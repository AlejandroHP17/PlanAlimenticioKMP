package liftechnology.com.mx.planalimenticiokmp.data.local.database

import co.touchlab.kermit.Logger
import kotlinx.coroutines.withContext
import liftechnology.com.mx.planalimenticiokmp.domain.repository.FoodRepository
import kotlinx.serialization.json.Json
import liftechnology.com.mx.planalimenticiokmp.data.model.FoodJsonResponse

/**
 * Inicializador de la base de datos SQLDelight.
 * Se encarga de poblar la base de datos con los datos iniciales del Sistema Mexicano
 * de Alimentos y Equivalentes (SMAE) la primera vez que se ejecuta la aplicación.
 *
 * @param assetLoader Cargador de assets multiplataforma
 * @param repository Repositorio de alimentos
 * @param jsonFileName Nombre del archivo JSON en assets (por defecto: "alimentos_smae.json")
 *
 * @author pelkidev
 */
class DatabaseInitializer(
    private val assetLoader: AssetLoader,
    private val repository: FoodRepository
) {
    private val json = Json {
        ignoreUnknownKeys = true
        coerceInputValues = true
    }

    /**
     * Inicializa la base de datos si está vacía.
     * @return true si se insertaron datos, false si ya existían
     */
    suspend fun initializeIfNeeded(): Boolean = withContext(kotlinx.coroutines.Dispatchers.Default) {
        val logger = Logger.withTag("DatabaseInitializer")
        try {
            val existingFoods = repository.getAllFoodsSuspend()
            if (existingFoods.isNotEmpty()) return@withContext false

            // Lee JSON multiplataforma
            val jsonString = assetLoader.loadJsonFile("files/alimentos_smae.json")
                ?: return@withContext false

            // Parsea JSON
            val jsonResponses: List<FoodJsonResponse> = json.decodeFromString(jsonString)

            // Convierte a modelo de dominio
            val foods = jsonResponses.map { it.toFood() }

            // Inserta en la DB
            repository.insertAllFoods(foods)
            logger.d { "✅ Base de datos inicializada correctamente con ${foods.size} alimentos" }
            true
        } catch (e: Exception) {
            logger.e { "❌ Error inicializando DB: ${e.message}" }
            false
        }
    }
}
