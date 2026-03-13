package litechnology.com.mx.planalimenticiokmp.data.local.driver

import app.cash.sqldelight.db.SqlDriver

expect class DatabaseDriverFactory {
    fun createDriver(): SqlDriver
}
