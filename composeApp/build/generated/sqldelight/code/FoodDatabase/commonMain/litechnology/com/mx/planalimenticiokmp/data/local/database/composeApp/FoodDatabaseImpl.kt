package litechnology.com.mx.planalimenticiokmp.`data`.local.database.composeApp

import app.cash.sqldelight.TransacterImpl
import app.cash.sqldelight.db.AfterVersion
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.db.SqlSchema
import kotlin.Long
import kotlin.Unit
import kotlin.reflect.KClass
import litechnology.com.mx.planalimenticiokmp.`data`.local.database.FoodDatabase
import litechnology.com.mx.planalimenticiokmp.`data`.local.database.FoodDatabaseQueries

internal val KClass<FoodDatabase>.schema: SqlSchema<QueryResult.Value<Unit>>
  get() = FoodDatabaseImpl.Schema

internal fun KClass<FoodDatabase>.newInstance(driver: SqlDriver): FoodDatabase = FoodDatabaseImpl(driver)

private class FoodDatabaseImpl(
  driver: SqlDriver,
) : TransacterImpl(driver),
    FoodDatabase {
  override val foodDatabaseQueries: FoodDatabaseQueries = FoodDatabaseQueries(driver)

  public object Schema : SqlSchema<QueryResult.Value<Unit>> {
    override val version: Long
      get() = 1

    override fun create(driver: SqlDriver): QueryResult.Value<Unit> {
      driver.execute(null, """
          |CREATE TABLE FoodEntity (
          |    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
          |    category TEXT NOT NULL,
          |    idCategory INTEGER NOT NULL,
          |    food TEXT NOT NULL,
          |    suggestedQuantity REAL NOT NULL,
          |    unit TEXT NOT NULL,
          |    netWeightG TEXT NOT NULL,
          |    roundedGrossWeightG INTEGER NOT NULL,
          |    energyKcal INTEGER NOT NULL,
          |    proteinG REAL,
          |    lipidsG REAL,
          |    carbohydratesG REAL,
          |    fiverG REAL,
          |    vitaminAUgRe REAL,
          |    ascorbicAcidMg REAL,
          |    folicAcidUg REAL,
          |    ironNoHemMg REAL,
          |    potassiumMg REAL,
          |    hypoglycemicIndex REAL,
          |    hypoglycemicLoad REAL,
          |    sugarPerEquivalentG REAL,
          |    calciumMg REAL,
          |    ironMg REAL,
          |    sodiumMg REAL,
          |    cholesterolMg REAL,
          |    seleniumMg REAL,
          |    phosphorusMg REAL,
          |    agSaturatedG REAL,
          |    agMonounsaturatedG REAL,
          |    agPolyunsaturatedG REAL
          |)
          """.trimMargin(), 0)
      return QueryResult.Unit
    }

    override fun migrate(
      driver: SqlDriver,
      oldVersion: Long,
      newVersion: Long,
      vararg callbacks: AfterVersion,
    ): QueryResult.Value<Unit> = QueryResult.Unit
  }
}
