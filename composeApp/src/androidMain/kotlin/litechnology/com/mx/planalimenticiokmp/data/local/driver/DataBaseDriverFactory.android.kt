package litechnology.com.mx.planalimenticiokmp.data.local.driver

import android.content.Context
import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.android.AndroidSqliteDriver
import litechnology.com.mx.planalimenticiokmp.data.local.database.FoodDatabase

actual class DatabaseDriverFactory(private val context: Context) {
    actual fun createDriver(): SqlDriver {
        return AndroidSqliteDriver(
            schema = FoodDatabase.Schema,
            context = context,
            name = "food_database.db"
        )
    }
}
