package litechnology.com.mx.planalimenticiokmp.data.local.database

import litechnology.com.mx.planalimenticiokmp.domain.repository.FoodRepository
import litechnology.com.mx.planalimenticiokmp.util.Constants
import kotlinx.serialization.json.Json
import litechnology.com.mx.planalimenticiokmp.data.model.FoodJsonResponse
import litechnology.com.mx.planalimenticiokmp.domain.model.Food

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
    private val repository: FoodRepository,
    private val jsonFileName: String = Constants.NAME_JSON
) {
    private val json = Json {
        ignoreUnknownKeys = true
        coerceInputValues = true
    }

    /**
     * Inicializa la base de datos si está vacía.
     * Lee el archivo JSON de assets y lo inserta en la base de datos.
     *
     * @return true si se inicializó la base de datos, false si ya estaba poblada
     */
    suspend fun initializeIfNeeded(): Boolean {
        return try {
            // Verifica si la base de datos ya está poblada
            val existingFoods = repository.getAllFoodsSuspend()
            if (existingFoods.isNotEmpty()) {
                return false // Ya está inicializada
            }

            // Lee el archivo JSON de assets
            val jsonString = assetLoader.loadJsonFile(jsonFileName) ?: return false

            // Parsea el JSON a una lista de FoodJsonResponse
            val jsonResponses: List<FoodJsonResponse> = json.decodeFromString(jsonString)

            // Convierte los modelos JSON a Food (modelo de dominio)
            val foods: List<Food> = jsonResponses.map { it.toFood() }

            // Inserta los alimentos en la base de datos
            repository.insertAllFoods(foods)
            true
        } catch (e: Exception) {
            e.printStackTrace()
            false
        }
    }
}
