package litechnology.com.mx.planalimenticiokmp.data.repositoryImpl

import app.cash.sqldelight.coroutines.asFlow
import app.cash.sqldelight.coroutines.mapToList
import kotlinx.coroutines.flow.Flow
import litechnology.com.mx.planalimenticiokmp.data.local.database.FoodDatabase
import litechnology.com.mx.planalimenticiokmp.domain.repository.CategoryRepository
import litechnology.com.mx.planalimenticiokmp.util.AppDispatchers

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
