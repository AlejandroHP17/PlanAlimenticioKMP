package litechnology.com.mx.planalimenticiokmp.domain.repository

import kotlinx.coroutines.flow.Flow
import litechnology.com.mx.planalimenticiokmp.domain.model.Food

interface FoodRepository {
    fun getFoodsByCategory(category: String): Flow<List<Food>>
    suspend fun getFoodsByCategorySuspend(category: String): List<Food>

    fun getAllFoods(): Flow<List<Food>>
    suspend fun getAllFoodsSuspend(): List<Food>

    fun searchFoods(searchQuery: String): Flow<List<Food>>
    suspend fun searchFoodsSuspend(searchQuery: String): List<Food>

    fun getFoodById(id: Long): Flow<Food?>
    suspend fun getFoodByIdSuspend(id: Long): Food?

    suspend fun insertAllFoods(foods: List<Food>)
    suspend fun getFoodCountByCategory(category: String): Int
}
