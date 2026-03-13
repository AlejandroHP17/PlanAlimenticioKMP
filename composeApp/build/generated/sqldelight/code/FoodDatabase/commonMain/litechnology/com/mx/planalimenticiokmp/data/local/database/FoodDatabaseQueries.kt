package litechnology.com.mx.planalimenticiokmp.`data`.local.database

import app.cash.sqldelight.Query
import app.cash.sqldelight.TransacterImpl
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlCursor
import app.cash.sqldelight.db.SqlDriver
import kotlin.Any
import kotlin.Double
import kotlin.Long
import kotlin.String

public class FoodDatabaseQueries(
  driver: SqlDriver,
) : TransacterImpl(driver) {
  public fun <T : Any> selectAll(mapper: (
    id: Long,
    category: String,
    idCategory: Long,
    food: String,
    suggestedQuantity: Double,
    unit: String,
    netWeightG: String,
    roundedGrossWeightG: Long,
    energyKcal: Long,
    proteinG: Double?,
    lipidsG: Double?,
    carbohydratesG: Double?,
    fiverG: Double?,
    vitaminAUgRe: Double?,
    ascorbicAcidMg: Double?,
    folicAcidUg: Double?,
    ironNoHemMg: Double?,
    potassiumMg: Double?,
    hypoglycemicIndex: Double?,
    hypoglycemicLoad: Double?,
    sugarPerEquivalentG: Double?,
    calciumMg: Double?,
    ironMg: Double?,
    sodiumMg: Double?,
    cholesterolMg: Double?,
    seleniumMg: Double?,
    phosphorusMg: Double?,
    agSaturatedG: Double?,
    agMonounsaturatedG: Double?,
    agPolyunsaturatedG: Double?,
  ) -> T): Query<T> = Query(1_295_415_460, arrayOf("FoodEntity"), driver, "FoodDatabase.sq", "selectAll", "SELECT FoodEntity.id, FoodEntity.category, FoodEntity.idCategory, FoodEntity.food, FoodEntity.suggestedQuantity, FoodEntity.unit, FoodEntity.netWeightG, FoodEntity.roundedGrossWeightG, FoodEntity.energyKcal, FoodEntity.proteinG, FoodEntity.lipidsG, FoodEntity.carbohydratesG, FoodEntity.fiverG, FoodEntity.vitaminAUgRe, FoodEntity.ascorbicAcidMg, FoodEntity.folicAcidUg, FoodEntity.ironNoHemMg, FoodEntity.potassiumMg, FoodEntity.hypoglycemicIndex, FoodEntity.hypoglycemicLoad, FoodEntity.sugarPerEquivalentG, FoodEntity.calciumMg, FoodEntity.ironMg, FoodEntity.sodiumMg, FoodEntity.cholesterolMg, FoodEntity.seleniumMg, FoodEntity.phosphorusMg, FoodEntity.agSaturatedG, FoodEntity.agMonounsaturatedG, FoodEntity.agPolyunsaturatedG FROM FoodEntity") { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getString(1)!!,
      cursor.getLong(2)!!,
      cursor.getString(3)!!,
      cursor.getDouble(4)!!,
      cursor.getString(5)!!,
      cursor.getString(6)!!,
      cursor.getLong(7)!!,
      cursor.getLong(8)!!,
      cursor.getDouble(9),
      cursor.getDouble(10),
      cursor.getDouble(11),
      cursor.getDouble(12),
      cursor.getDouble(13),
      cursor.getDouble(14),
      cursor.getDouble(15),
      cursor.getDouble(16),
      cursor.getDouble(17),
      cursor.getDouble(18),
      cursor.getDouble(19),
      cursor.getDouble(20),
      cursor.getDouble(21),
      cursor.getDouble(22),
      cursor.getDouble(23),
      cursor.getDouble(24),
      cursor.getDouble(25),
      cursor.getDouble(26),
      cursor.getDouble(27),
      cursor.getDouble(28),
      cursor.getDouble(29)
    )
  }

  public fun selectAll(): Query<FoodEntity> = selectAll(::FoodEntity)

  public fun <T : Any> selectById(id: Long, mapper: (
    id: Long,
    category: String,
    idCategory: Long,
    food: String,
    suggestedQuantity: Double,
    unit: String,
    netWeightG: String,
    roundedGrossWeightG: Long,
    energyKcal: Long,
    proteinG: Double?,
    lipidsG: Double?,
    carbohydratesG: Double?,
    fiverG: Double?,
    vitaminAUgRe: Double?,
    ascorbicAcidMg: Double?,
    folicAcidUg: Double?,
    ironNoHemMg: Double?,
    potassiumMg: Double?,
    hypoglycemicIndex: Double?,
    hypoglycemicLoad: Double?,
    sugarPerEquivalentG: Double?,
    calciumMg: Double?,
    ironMg: Double?,
    sodiumMg: Double?,
    cholesterolMg: Double?,
    seleniumMg: Double?,
    phosphorusMg: Double?,
    agSaturatedG: Double?,
    agMonounsaturatedG: Double?,
    agPolyunsaturatedG: Double?,
  ) -> T): Query<T> = SelectByIdQuery(id) { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getString(1)!!,
      cursor.getLong(2)!!,
      cursor.getString(3)!!,
      cursor.getDouble(4)!!,
      cursor.getString(5)!!,
      cursor.getString(6)!!,
      cursor.getLong(7)!!,
      cursor.getLong(8)!!,
      cursor.getDouble(9),
      cursor.getDouble(10),
      cursor.getDouble(11),
      cursor.getDouble(12),
      cursor.getDouble(13),
      cursor.getDouble(14),
      cursor.getDouble(15),
      cursor.getDouble(16),
      cursor.getDouble(17),
      cursor.getDouble(18),
      cursor.getDouble(19),
      cursor.getDouble(20),
      cursor.getDouble(21),
      cursor.getDouble(22),
      cursor.getDouble(23),
      cursor.getDouble(24),
      cursor.getDouble(25),
      cursor.getDouble(26),
      cursor.getDouble(27),
      cursor.getDouble(28),
      cursor.getDouble(29)
    )
  }

  public fun selectById(id: Long): Query<FoodEntity> = selectById(id, ::FoodEntity)

  public fun <T : Any> selectAllByCategory(category: String, mapper: (
    id: Long,
    category: String,
    idCategory: Long,
    food: String,
    suggestedQuantity: Double,
    unit: String,
    netWeightG: String,
    roundedGrossWeightG: Long,
    energyKcal: Long,
    proteinG: Double?,
    lipidsG: Double?,
    carbohydratesG: Double?,
    fiverG: Double?,
    vitaminAUgRe: Double?,
    ascorbicAcidMg: Double?,
    folicAcidUg: Double?,
    ironNoHemMg: Double?,
    potassiumMg: Double?,
    hypoglycemicIndex: Double?,
    hypoglycemicLoad: Double?,
    sugarPerEquivalentG: Double?,
    calciumMg: Double?,
    ironMg: Double?,
    sodiumMg: Double?,
    cholesterolMg: Double?,
    seleniumMg: Double?,
    phosphorusMg: Double?,
    agSaturatedG: Double?,
    agMonounsaturatedG: Double?,
    agPolyunsaturatedG: Double?,
  ) -> T): Query<T> = SelectAllByCategoryQuery(category) { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getString(1)!!,
      cursor.getLong(2)!!,
      cursor.getString(3)!!,
      cursor.getDouble(4)!!,
      cursor.getString(5)!!,
      cursor.getString(6)!!,
      cursor.getLong(7)!!,
      cursor.getLong(8)!!,
      cursor.getDouble(9),
      cursor.getDouble(10),
      cursor.getDouble(11),
      cursor.getDouble(12),
      cursor.getDouble(13),
      cursor.getDouble(14),
      cursor.getDouble(15),
      cursor.getDouble(16),
      cursor.getDouble(17),
      cursor.getDouble(18),
      cursor.getDouble(19),
      cursor.getDouble(20),
      cursor.getDouble(21),
      cursor.getDouble(22),
      cursor.getDouble(23),
      cursor.getDouble(24),
      cursor.getDouble(25),
      cursor.getDouble(26),
      cursor.getDouble(27),
      cursor.getDouble(28),
      cursor.getDouble(29)
    )
  }

  public fun selectAllByCategory(category: String): Query<FoodEntity> = selectAllByCategory(category, ::FoodEntity)

  public fun <T : Any> searchFoods(searchQuery: String, mapper: (
    id: Long,
    category: String,
    idCategory: Long,
    food: String,
    suggestedQuantity: Double,
    unit: String,
    netWeightG: String,
    roundedGrossWeightG: Long,
    energyKcal: Long,
    proteinG: Double?,
    lipidsG: Double?,
    carbohydratesG: Double?,
    fiverG: Double?,
    vitaminAUgRe: Double?,
    ascorbicAcidMg: Double?,
    folicAcidUg: Double?,
    ironNoHemMg: Double?,
    potassiumMg: Double?,
    hypoglycemicIndex: Double?,
    hypoglycemicLoad: Double?,
    sugarPerEquivalentG: Double?,
    calciumMg: Double?,
    ironMg: Double?,
    sodiumMg: Double?,
    cholesterolMg: Double?,
    seleniumMg: Double?,
    phosphorusMg: Double?,
    agSaturatedG: Double?,
    agMonounsaturatedG: Double?,
    agPolyunsaturatedG: Double?,
  ) -> T): Query<T> = SearchFoodsQuery(searchQuery) { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getString(1)!!,
      cursor.getLong(2)!!,
      cursor.getString(3)!!,
      cursor.getDouble(4)!!,
      cursor.getString(5)!!,
      cursor.getString(6)!!,
      cursor.getLong(7)!!,
      cursor.getLong(8)!!,
      cursor.getDouble(9),
      cursor.getDouble(10),
      cursor.getDouble(11),
      cursor.getDouble(12),
      cursor.getDouble(13),
      cursor.getDouble(14),
      cursor.getDouble(15),
      cursor.getDouble(16),
      cursor.getDouble(17),
      cursor.getDouble(18),
      cursor.getDouble(19),
      cursor.getDouble(20),
      cursor.getDouble(21),
      cursor.getDouble(22),
      cursor.getDouble(23),
      cursor.getDouble(24),
      cursor.getDouble(25),
      cursor.getDouble(26),
      cursor.getDouble(27),
      cursor.getDouble(28),
      cursor.getDouble(29)
    )
  }

  public fun searchFoods(searchQuery: String): Query<FoodEntity> = searchFoods(searchQuery, ::FoodEntity)

  public fun getFoodCountByCategory(category: String): Query<Long> = GetFoodCountByCategoryQuery(category) { cursor ->
    cursor.getLong(0)!!
  }

  public fun getAllCategories(): Query<String> = Query(-1_867_701_144, arrayOf("FoodEntity"), driver, "FoodDatabase.sq", "getAllCategories", "SELECT DISTINCT category FROM FoodEntity ORDER BY category ASC") { cursor ->
    cursor.getString(0)!!
  }

  /**
   * @return The number of rows updated.
   */
  public fun insertFood(
    category: String,
    idCategory: Long,
    food: String,
    suggestedQuantity: Double,
    unit: String,
    netWeightG: String,
    roundedGrossWeightG: Long,
    energyKcal: Long,
    proteinG: Double?,
    lipidsG: Double?,
    carbohydratesG: Double?,
    fiverG: Double?,
    vitaminAUgRe: Double?,
    ascorbicAcidMg: Double?,
    folicAcidUg: Double?,
    ironNoHemMg: Double?,
    potassiumMg: Double?,
    hypoglycemicIndex: Double?,
    hypoglycemicLoad: Double?,
    sugarPerEquivalentG: Double?,
    calciumMg: Double?,
    ironMg: Double?,
    sodiumMg: Double?,
    cholesterolMg: Double?,
    seleniumMg: Double?,
    phosphorusMg: Double?,
    agSaturatedG: Double?,
    agMonounsaturatedG: Double?,
    agPolyunsaturatedG: Double?,
  ): QueryResult<Long> {
    val result = driver.execute(-169_519_880, """
        |INSERT OR REPLACE INTO FoodEntity (
        |    category, idCategory, food, suggestedQuantity, unit, netWeightG,
        |    roundedGrossWeightG, energyKcal, proteinG, lipidsG, carbohydratesG,
        |    fiverG, vitaminAUgRe, ascorbicAcidMg, folicAcidUg, ironNoHemMg,
        |    potassiumMg, hypoglycemicIndex, hypoglycemicLoad, sugarPerEquivalentG,
        |    calciumMg, ironMg, sodiumMg, cholesterolMg, seleniumMg, phosphorusMg,
        |    agSaturatedG, agMonounsaturatedG, agPolyunsaturatedG
        |) VALUES (
        |    ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?
        |)
        """.trimMargin(), 29) {
          var parameterIndex = 0
          bindString(parameterIndex++, category)
          bindLong(parameterIndex++, idCategory)
          bindString(parameterIndex++, food)
          bindDouble(parameterIndex++, suggestedQuantity)
          bindString(parameterIndex++, unit)
          bindString(parameterIndex++, netWeightG)
          bindLong(parameterIndex++, roundedGrossWeightG)
          bindLong(parameterIndex++, energyKcal)
          bindDouble(parameterIndex++, proteinG)
          bindDouble(parameterIndex++, lipidsG)
          bindDouble(parameterIndex++, carbohydratesG)
          bindDouble(parameterIndex++, fiverG)
          bindDouble(parameterIndex++, vitaminAUgRe)
          bindDouble(parameterIndex++, ascorbicAcidMg)
          bindDouble(parameterIndex++, folicAcidUg)
          bindDouble(parameterIndex++, ironNoHemMg)
          bindDouble(parameterIndex++, potassiumMg)
          bindDouble(parameterIndex++, hypoglycemicIndex)
          bindDouble(parameterIndex++, hypoglycemicLoad)
          bindDouble(parameterIndex++, sugarPerEquivalentG)
          bindDouble(parameterIndex++, calciumMg)
          bindDouble(parameterIndex++, ironMg)
          bindDouble(parameterIndex++, sodiumMg)
          bindDouble(parameterIndex++, cholesterolMg)
          bindDouble(parameterIndex++, seleniumMg)
          bindDouble(parameterIndex++, phosphorusMg)
          bindDouble(parameterIndex++, agSaturatedG)
          bindDouble(parameterIndex++, agMonounsaturatedG)
          bindDouble(parameterIndex++, agPolyunsaturatedG)
        }
    notifyQueries(-169_519_880) { emit ->
      emit("FoodEntity")
    }
    return result
  }

  private inner class SelectByIdQuery<out T : Any>(
    public val id: Long,
    mapper: (SqlCursor) -> T,
  ) : Query<T>(mapper) {
    override fun addListener(listener: Query.Listener) {
      driver.addListener("FoodEntity", listener = listener)
    }

    override fun removeListener(listener: Query.Listener) {
      driver.removeListener("FoodEntity", listener = listener)
    }

    override fun <R> execute(mapper: (SqlCursor) -> QueryResult<R>): QueryResult<R> = driver.executeQuery(1_503_214_895, """SELECT FoodEntity.id, FoodEntity.category, FoodEntity.idCategory, FoodEntity.food, FoodEntity.suggestedQuantity, FoodEntity.unit, FoodEntity.netWeightG, FoodEntity.roundedGrossWeightG, FoodEntity.energyKcal, FoodEntity.proteinG, FoodEntity.lipidsG, FoodEntity.carbohydratesG, FoodEntity.fiverG, FoodEntity.vitaminAUgRe, FoodEntity.ascorbicAcidMg, FoodEntity.folicAcidUg, FoodEntity.ironNoHemMg, FoodEntity.potassiumMg, FoodEntity.hypoglycemicIndex, FoodEntity.hypoglycemicLoad, FoodEntity.sugarPerEquivalentG, FoodEntity.calciumMg, FoodEntity.ironMg, FoodEntity.sodiumMg, FoodEntity.cholesterolMg, FoodEntity.seleniumMg, FoodEntity.phosphorusMg, FoodEntity.agSaturatedG, FoodEntity.agMonounsaturatedG, FoodEntity.agPolyunsaturatedG FROM FoodEntity WHERE id = ?""", mapper, 1) {
      var parameterIndex = 0
      bindLong(parameterIndex++, id)
    }

    override fun toString(): String = "FoodDatabase.sq:selectById"
  }

  private inner class SelectAllByCategoryQuery<out T : Any>(
    public val category: String,
    mapper: (SqlCursor) -> T,
  ) : Query<T>(mapper) {
    override fun addListener(listener: Query.Listener) {
      driver.addListener("FoodEntity", listener = listener)
    }

    override fun removeListener(listener: Query.Listener) {
      driver.removeListener("FoodEntity", listener = listener)
    }

    override fun <R> execute(mapper: (SqlCursor) -> QueryResult<R>): QueryResult<R> = driver.executeQuery(1_848_098_361, """SELECT FoodEntity.id, FoodEntity.category, FoodEntity.idCategory, FoodEntity.food, FoodEntity.suggestedQuantity, FoodEntity.unit, FoodEntity.netWeightG, FoodEntity.roundedGrossWeightG, FoodEntity.energyKcal, FoodEntity.proteinG, FoodEntity.lipidsG, FoodEntity.carbohydratesG, FoodEntity.fiverG, FoodEntity.vitaminAUgRe, FoodEntity.ascorbicAcidMg, FoodEntity.folicAcidUg, FoodEntity.ironNoHemMg, FoodEntity.potassiumMg, FoodEntity.hypoglycemicIndex, FoodEntity.hypoglycemicLoad, FoodEntity.sugarPerEquivalentG, FoodEntity.calciumMg, FoodEntity.ironMg, FoodEntity.sodiumMg, FoodEntity.cholesterolMg, FoodEntity.seleniumMg, FoodEntity.phosphorusMg, FoodEntity.agSaturatedG, FoodEntity.agMonounsaturatedG, FoodEntity.agPolyunsaturatedG FROM FoodEntity WHERE category = ?""", mapper, 1) {
      var parameterIndex = 0
      bindString(parameterIndex++, category)
    }

    override fun toString(): String = "FoodDatabase.sq:selectAllByCategory"
  }

  private inner class SearchFoodsQuery<out T : Any>(
    public val searchQuery: String,
    mapper: (SqlCursor) -> T,
  ) : Query<T>(mapper) {
    override fun addListener(listener: Query.Listener) {
      driver.addListener("FoodEntity", listener = listener)
    }

    override fun removeListener(listener: Query.Listener) {
      driver.removeListener("FoodEntity", listener = listener)
    }

    override fun <R> execute(mapper: (SqlCursor) -> QueryResult<R>): QueryResult<R> = driver.executeQuery(-1_396_235_028, """SELECT FoodEntity.id, FoodEntity.category, FoodEntity.idCategory, FoodEntity.food, FoodEntity.suggestedQuantity, FoodEntity.unit, FoodEntity.netWeightG, FoodEntity.roundedGrossWeightG, FoodEntity.energyKcal, FoodEntity.proteinG, FoodEntity.lipidsG, FoodEntity.carbohydratesG, FoodEntity.fiverG, FoodEntity.vitaminAUgRe, FoodEntity.ascorbicAcidMg, FoodEntity.folicAcidUg, FoodEntity.ironNoHemMg, FoodEntity.potassiumMg, FoodEntity.hypoglycemicIndex, FoodEntity.hypoglycemicLoad, FoodEntity.sugarPerEquivalentG, FoodEntity.calciumMg, FoodEntity.ironMg, FoodEntity.sodiumMg, FoodEntity.cholesterolMg, FoodEntity.seleniumMg, FoodEntity.phosphorusMg, FoodEntity.agSaturatedG, FoodEntity.agMonounsaturatedG, FoodEntity.agPolyunsaturatedG FROM FoodEntity WHERE food LIKE ('%' || ? || '%')""", mapper, 1) {
      var parameterIndex = 0
      bindString(parameterIndex++, searchQuery)
    }

    override fun toString(): String = "FoodDatabase.sq:searchFoods"
  }

  private inner class GetFoodCountByCategoryQuery<out T : Any>(
    public val category: String,
    mapper: (SqlCursor) -> T,
  ) : Query<T>(mapper) {
    override fun addListener(listener: Query.Listener) {
      driver.addListener("FoodEntity", listener = listener)
    }

    override fun removeListener(listener: Query.Listener) {
      driver.removeListener("FoodEntity", listener = listener)
    }

    override fun <R> execute(mapper: (SqlCursor) -> QueryResult<R>): QueryResult<R> = driver.executeQuery(-1_540_191_695, """SELECT COUNT(*) FROM FoodEntity WHERE category = ?""", mapper, 1) {
      var parameterIndex = 0
      bindString(parameterIndex++, category)
    }

    override fun toString(): String = "FoodDatabase.sq:getFoodCountByCategory"
  }
}
