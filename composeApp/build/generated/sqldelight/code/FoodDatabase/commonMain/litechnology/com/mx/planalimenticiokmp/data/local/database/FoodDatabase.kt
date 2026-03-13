package litechnology.com.mx.planalimenticiokmp.`data`.local.database

import app.cash.sqldelight.Transacter
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.db.SqlSchema
import kotlin.Unit
import litechnology.com.mx.planalimenticiokmp.`data`.local.database.composeApp.newInstance
import litechnology.com.mx.planalimenticiokmp.`data`.local.database.composeApp.schema

public interface FoodDatabase : Transacter {
  public val foodDatabaseQueries: FoodDatabaseQueries

  public companion object {
    public val Schema: SqlSchema<QueryResult.Value<Unit>>
      get() = FoodDatabase::class.schema

    public operator fun invoke(driver: SqlDriver): FoodDatabase = FoodDatabase::class.newInstance(driver)
  }
}
