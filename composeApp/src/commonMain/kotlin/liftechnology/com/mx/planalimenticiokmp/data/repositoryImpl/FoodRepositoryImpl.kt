package liftechnology.com.mx.planalimenticiokmp.data.repositoryImpl

import app.cash.sqldelight.coroutines.asFlow
import app.cash.sqldelight.coroutines.mapToList
import app.cash.sqldelight.coroutines.mapToOneOrNull
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.map
import liftechnology.com.mx.planalimenticiokmp.data.local.database.FoodDatabase
import liftechnology.com.mx.planalimenticiokmp.data.local.mapper.FoodMapper
import liftechnology.com.mx.planalimenticiokmp.domain.model.Food
import liftechnology.com.mx.planalimenticiokmp.domain.repository.FoodRepository

/**
 * Implementación del repositorio de alimentos.
 * Gestiona el acceso a los datos de la tabla de alimentos utilizando SQLDelight.
 *
 * @property database Instancia de [FoodDatabase] generada por SQLDelight.
 * @author PelkiDev
 * @version 1.0.0
 */
class FoodRepositoryImpl(
    private val database: FoodDatabase
): FoodRepository {

    /**
     * Obtiene un flujo de alimentos filtrados por categoría.
     *
     * @param category Nombre de la categoría a filtrar.
     * @return [Flow] que contiene la lista de alimentos [Food] de la categoría especificada.
     */
    override fun getFoodsByCategory(category: String): Flow<List<Food>> {
        return database.foodDatabaseQueries
            .selectAllByCategory(category)
            .asFlow()
            .mapToList(Dispatchers.Default)
            .map { list -> list.map(FoodMapper::toDomain) }
    }

    /**
     * Obtiene de forma suspendida la lista de alimentos por categoría.
     *
     * @param category Nombre de la categoría a filtrar.
     * @return Lista de modelos de dominio [Food].
     */
    override suspend fun getFoodsByCategorySuspend(category: String): List<Food> {
        return database.foodDatabaseQueries
            .selectAllByCategory(category)
            .executeAsList()
            .map(FoodMapper::toDomain)
    }

    /**
     * Obtiene un flujo con todos los alimentos disponibles en la base de datos.
     *
     * @return [Flow] con la lista completa de [Food].
     */
    override fun getAllFoods(): Flow<List<Food>> {
        return database.foodDatabaseQueries
            .selectAll()
            .asFlow()
            .mapToList(Dispatchers.Default)
            .map { list -> list.map(FoodMapper::toDomain) }
    }

    /**
     * Obtiene de forma suspendida todos los alimentos de la base de datos.
     *
     * @return Lista completa de modelos de dominio [Food].
     */
    override suspend fun getAllFoodsSuspend(): List<Food> {
        return database.foodDatabaseQueries
            .selectAll()
            .executeAsList()
            .map(FoodMapper::toDomain)
    }

    /**
     * Realiza una búsqueda de alimentos por nombre.
     *
     * @param searchQuery Término de búsqueda.
     * @return [Flow] con la lista de alimentos que coinciden con la búsqueda.
     */
    override fun searchFoods(searchQuery: String): Flow<List<Food>> {
        return database.foodDatabaseQueries
            .searchFoods(searchQuery)
            .asFlow()
            .mapToList(Dispatchers.Default)
            .map { list -> list.map(FoodMapper::toDomain) }
    }

    /**
     * Realiza una búsqueda suspendida de alimentos por nombre.
     *
     * @param searchQuery Término de búsqueda.
     * @return Lista de alimentos que coinciden con el criterio.
     */
    override suspend fun searchFoodsSuspend(searchQuery: String): List<Food> {
        return database.foodDatabaseQueries
            .searchFoods(searchQuery)
            .executeAsList()
            .map(FoodMapper::toDomain)
    }

    /**
     * Obtiene un flujo con un alimento específico mediante su identificador.
     *
     * @param id Identificador único del alimento.
     * @return [Flow] que emite el alimento [Food] o nulo si no se encuentra.
     */
    override fun getFoodById(id: Long): Flow<Food?> {
        return database.foodDatabaseQueries
            .selectById(id)
            .asFlow()
            .mapToOneOrNull(Dispatchers.Default)
            .map { it?.let(FoodMapper::toDomain) }
    }

    /**
     * Obtiene de forma suspendida un alimento específico por su ID.
     *
     * @param id Identificador único del alimento.
     * @return Modelo [Food] o nulo si no existe en la base de datos.
     */
    override suspend fun getFoodByIdSuspend(id: Long): Food? {
        return database.foodDatabaseQueries
            .selectById(id)
            .executeAsOneOrNull()
            ?.let(FoodMapper::toDomain)
    }

    /**
     * Inserta una lista completa de alimentos en la base de datos de forma atómica.
     * Utiliza una transacción para optimizar el rendimiento de la inserción masiva.
     *
     * @param foods Lista de alimentos [Food] a insertar.
     */
    override suspend fun insertAllFoods(foods: List<Food>) {
        database.foodDatabaseQueries.transaction {
            foods.forEach { food ->
                database.foodDatabaseQueries.insertFood(
                    category = food.category,
                    idCategory = food.idCategory.toLong(),
                    food = food.food,
                    suggestedQuantity = food.suggestedQuantity.toDouble(),
                    unit = food.unit,
                    netWeightG = food.netWeightG,
                    roundedGrossWeightG = food.roundedGrossWeightG.toLong(),
                    energyKcal = food.energyKcal.toLong(),
                    proteinG = food.proteinG?.toDouble(),
                    lipidsG = food.lipidsG?.toDouble(),
                    carbohydratesG = food.carbohydratesG?.toDouble(),
                    fiverG = food.fiverG?.toDouble(),
                    vitaminAUgRe = food.vitaminAUgRe?.toDouble(),
                    ascorbicAcidMg = food.ascorbicAcidMg?.toDouble(),
                    folicAcidUg = food.folicAcidUg?.toDouble(),
                    ironNoHemMg = food.ironNoHemMg?.toDouble(),
                    potassiumMg = food.potassiumMg?.toDouble(),
                    hypoglycemicIndex = food.hypoglycemicIndex?.toDouble(),
                    hypoglycemicLoad = food.hypoglycemicLoad?.toDouble(),
                    sugarPerEquivalentG = food.sugarPerEquivalentG?.toDouble(),
                    calciumMg = food.calciumMg?.toDouble(),
                    ironMg = food.ironMg?.toDouble(),
                    sodiumMg = food.sodiumMg?.toDouble(),
                    cholesterolMg = food.cholesterolMg?.toDouble(),
                    seleniumMg = food.seleniumMg?.toDouble(),
                    phosphorusMg = food.phosphorusMg?.toDouble(),
                    agSaturatedG = food.agSaturatedG?.toDouble(),
                    agMonounsaturatedG = food.agMonounsaturatedG?.toDouble(),
                    agPolyunsaturatedG = food.agPolyunsaturatedG?.toDouble()
                )
            }
        }
    }

    /**
     * Obtiene el número total de alimentos registrados en una categoría específica.
     *
     * @param category Nombre de la categoría.
     * @return Cantidad total de alimentos en dicha categoría.
     */
    override suspend fun getFoodCountByCategory(category: String): Int {
        return database.foodDatabaseQueries
            .getFoodCountByCategory(category)
            .executeAsOne()
            .toInt()
    }
}
