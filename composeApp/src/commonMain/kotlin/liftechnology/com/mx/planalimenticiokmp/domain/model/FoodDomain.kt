package liftechnology.com.mx.planalimenticiokmp.domain.model

/**
 * Modelo de dominio para un alimento.
 * Representa un alimento del Sistema Mexicano de Alimentos y Equivalentes (SMAE).
 *
 * @author pelkidev
 */
data class FoodDomain(
    val id: Long = 0,
    val category: String,
    val idCategory: Int,
    val food: String,
    val suggestedQuantity: Float,
    val unit: String,
    val netWeightG: String,
    val roundedGrossWeightG: Int,
    val energyKcal: Int,
    val proteinG: Float?,
    val lipidsG: Float?,
    val carbohydratesG: Float?,
    val fiverG: Float?,
    val vitaminAUgRe: Float?,
    val ascorbicAcidMg: Float?,
    val folicAcidUg: Float?,
    val ironNoHemMg: Float?,
    val potassiumMg: Float?,
    val hypoglycemicIndex: Float?,
    val hypoglycemicLoad: Float?,
    val sugarPerEquivalentG: Float?,
    val calciumMg: Float?,
    val ironMg: Float?,
    val sodiumMg: Float?,
    val cholesterolMg: Float?,
    val seleniumMg: Float?,
    val phosphorusMg: Float?,
    val agSaturatedG: Float?,
    val agMonounsaturatedG: Float?,
    val agPolyunsaturatedG: Float?
)
