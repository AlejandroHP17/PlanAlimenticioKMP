package litechnology.com.mx.planalimenticiokmp.domain.repository

import kotlinx.coroutines.flow.Flow

interface CategoryRepository {
    fun getAllCategories(): Flow<List<String>>
    suspend fun getAllCategoriesSuspend(): List<String>
}