package litechnology.com.mx.planalimenticiokmp.`data`.local.database

import kotlin.Double
import kotlin.Long
import kotlin.String

public data class FoodEntity(
  public val id: Long,
  public val category: String,
  public val idCategory: Long,
  public val food: String,
  public val suggestedQuantity: Double,
  public val unit: String,
  public val netWeightG: String,
  public val roundedGrossWeightG: Long,
  public val energyKcal: Long,
  public val proteinG: Double?,
  public val lipidsG: Double?,
  public val carbohydratesG: Double?,
  public val fiverG: Double?,
  public val vitaminAUgRe: Double?,
  public val ascorbicAcidMg: Double?,
  public val folicAcidUg: Double?,
  public val ironNoHemMg: Double?,
  public val potassiumMg: Double?,
  public val hypoglycemicIndex: Double?,
  public val hypoglycemicLoad: Double?,
  public val sugarPerEquivalentG: Double?,
  public val calciumMg: Double?,
  public val ironMg: Double?,
  public val sodiumMg: Double?,
  public val cholesterolMg: Double?,
  public val seleniumMg: Double?,
  public val phosphorusMg: Double?,
  public val agSaturatedG: Double?,
  public val agMonounsaturatedG: Double?,
  public val agPolyunsaturatedG: Double?,
)
