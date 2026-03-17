package liftechnology.com.mx.planalimenticiokmp.domain.repository

import kotlinx.coroutines.flow.Flow
import liftechnology.com.mx.planalimenticiokmp.domain.model.FoodDomain

interface FoodRepository {
    fun getFoodsByCategory(category: String): Flow<List<FoodDomain>>
    suspend fun getFoodsByCategorySuspend(category: String): List<FoodDomain>

    fun getAllFoods(): Flow<List<FoodDomain>>
    suspend fun getAllFoodsSuspend(): List<FoodDomain>

    fun searchFoods(searchQuery: String): Flow<List<FoodDomain>>
    suspend fun searchFoodsSuspend(searchQuery: String): List<FoodDomain>

    fun getFoodById(id: Long): Flow<FoodDomain?>
    suspend fun getFoodByIdSuspend(id: Long): FoodDomain?

    suspend fun insertAllFoods(foodDomains: List<FoodDomain>)
    suspend fun getFoodCountByCategory(category: String): Int
}
