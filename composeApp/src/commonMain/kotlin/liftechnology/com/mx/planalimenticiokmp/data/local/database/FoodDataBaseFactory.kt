package liftechnology.com.mx.planalimenticiokmp.data.local.database

import liftechnology.com.mx.planalimenticiokmp.data.local.driver.DatabaseDriverFactory

/**
 * Factory para crear instancias de FoodDatabase.
 *
 * @param driverFactory Factory para crear el driver de la base de datos
 */
class FoodDatabaseFactory(
    private val driverFactory: DatabaseDriverFactory
) {
    fun createDatabase(): FoodDatabase {
        return FoodDatabase(driverFactory.createDriver())
    }
}
