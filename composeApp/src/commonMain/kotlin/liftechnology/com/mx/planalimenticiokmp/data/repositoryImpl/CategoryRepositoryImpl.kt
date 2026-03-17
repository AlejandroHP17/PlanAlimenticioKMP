package liftechnology.com.mx.planalimenticiokmp.data.repositoryImpl

import app.cash.sqldelight.coroutines.asFlow
import app.cash.sqldelight.coroutines.mapToList
import kotlinx.coroutines.flow.Flow
import liftechnology.com.mx.planalimenticiokmp.data.local.database.FoodDatabase
import liftechnology.com.mx.planalimenticiokmp.domain.repository.CategoryRepository
import liftechnology.com.mx.planalimenticiokmp.core.util.AppDispatchers

class CategoryRepositoryImpl(
    private val database: FoodDatabase
): CategoryRepository {

    override fun getAllCategories(): Flow<List<String>> {
        return database.foodDatabaseQueries
            .getAllCategories()
            .asFlow()
            .mapToList<String>(AppDispatchers.default)
    }

    override suspend fun getAllCategoriesSuspend(): List<String> {
        return database.foodDatabaseQueries
            .getAllCategories()
            .executeAsList()
    }
}
