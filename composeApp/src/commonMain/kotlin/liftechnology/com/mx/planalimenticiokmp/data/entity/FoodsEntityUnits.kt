package liftechnology.com.mx.planalimenticiokmp.data.entity

import liftechnology.com.mx.planalimenticiokmp.data.model.FoodUnit
import liftechnology.com.mx.planalimenticiokmp.domain.model.FoodDomain
import kotlin.math.roundToInt


/**
 * Objeto que contiene los metadatos de cada campo de Food,
 * incluyendo su unidad de medida y etiqueta para mostrar.
 *
 * @author pelkidev
 */
object FoodEntityMetadata {
    /**
     * Obtiene la unidad de medida para un campo específico.
     */
    fun getUnit(fieldName: String): FoodUnit {
        return when (fieldName) {
            "suggestedQuantity" -> FoodUnit.UNITLESS
            "unit" -> FoodUnit.UNITLESS
            "netWeightG" -> FoodUnit.GRAMS
            "roundedGrossWeightG" -> FoodUnit.GRAMS
            "energyKcal" -> FoodUnit.KILOCALORIES
            "proteinG" -> FoodUnit.GRAMS
            "lipidsG" -> FoodUnit.GRAMS
            "carbohydratesG" -> FoodUnit.GRAMS
            "fiverG" -> FoodUnit.GRAMS
            "vitaminAUgRe" -> FoodUnit.MICROGRAMS_RE
            "ascorbicAcidMg" -> FoodUnit.MILLIGRAMS
            "folicAcidUg" -> FoodUnit.MICROGRAMS
            "ironNoHemMg" -> FoodUnit.MILLIGRAMS
            "potassiumMg" -> FoodUnit.MILLIGRAMS
            "hypoglycemicIndex" -> FoodUnit.UNITLESS
            "hypoglycemicLoad" -> FoodUnit.UNITLESS
            "sugarPerEquivalentG" -> FoodUnit.GRAMS
            "calciumMg" -> FoodUnit.MILLIGRAMS
            "ironMg" -> FoodUnit.MILLIGRAMS
            "sodiumMg" -> FoodUnit.MILLIGRAMS
            "cholesterolMg" -> FoodUnit.MILLIGRAMS
            "seleniumMg" -> FoodUnit.MILLIGRAMS
            "phosphorusMg" -> FoodUnit.MILLIGRAMS
            "agSaturatedG" -> FoodUnit.GRAMS
            "agMonounsaturatedG" -> FoodUnit.GRAMS
            "agPolyunsaturatedG" -> FoodUnit.GRAMS
            else -> FoodUnit.UNITLESS
        }
    }

    /**
     * Obtiene la etiqueta de visualización para un campo específico.
     */
    fun getLabel(fieldName: String): String {
        return when (fieldName) {
            "suggestedQuantity" -> "Cantidad sugerida"
            "unit" -> "Unidad"
            "netWeightG" -> "Peso neto"
            "roundedGrossWeightG" -> "Peso bruto redondeado"
            "energyKcal" -> "Energía"
            "proteinG" -> "Proteína"
            "lipidsG" -> "Lípidos"
            "carbohydratesG" -> "Hidratos de carbono"
            "fiverG" -> "Fibra"
            "vitaminAUgRe" -> "Vitamina A"
            "ascorbicAcidMg" -> "Ácido Ascórbico"
            "folicAcidUg" -> "Ácido Fólico"
            "ironNoHemMg" -> "Hierro NO HEM"
            "potassiumMg" -> "Potasio"
            "hypoglycemicIndex" -> "Índice glicémico"
            "hypoglycemicLoad" -> "Carga glicémica"
            "sugarPerEquivalentG" -> "Azúcar por equivalente"
            "calciumMg" -> "Calcio"
            "ironMg" -> "Hierro"
            "sodiumMg" -> "Sodio"
            "cholesterolMg" -> "Colesterol"
            "seleniumMg" -> "Selenio"
            "phosphorusMg" -> "Fósforo"
            "agSaturatedG" -> "AG Saturados"
            "agMonounsaturatedG" -> "AG Monoinsaturados"
            "agPolyunsaturatedG" -> "AG Poliinsaturados"
            else -> fieldName
        }
    }
}