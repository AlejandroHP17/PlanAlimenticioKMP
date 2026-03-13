package litechnology.com.mx.planalimenticiokmp.data.local.driver

import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.native.NativeSqliteDriver
import litechnology.com.mx.planalimenticiokmp.data.local.database.FoodDatabase

actual class DatabaseDriverFactory {
    actual fun createDriver(): SqlDriver {
        return NativeSqliteDriver(
            schema = FoodDatabase.Schema,
            name = "food_database.db"
        )
    }
}
