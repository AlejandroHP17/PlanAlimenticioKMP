package litechnology.com.mx.planalimenticiokmp.data.entity

import litechnology.com.mx.planalimenticiokmp.domain.model.Food
import kotlin.math.roundToInt

/**
 * Enum que define todas las unidades de medida utilizadas en Food.
 *
 * @author pelkidev
 */
enum class FoodUnit(val symbol: String, val displayName: String) {
    GRAMS("g", "gramos"),
    KILOCALORIES("kcal", "kilocalorías"),
    MILLIGRAMS("mg", "miligramos"),
    MICROGRAMS_RE("µg RE", "microgramos de retinol equivalente"),
    MICROGRAMS("µg", "microgramos"),
    UNITLESS("", "sin unidad")
}

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

/**
 * Formatea un valor con su unidad de medida.
 */
private fun formatWithUnit(value: Any?, unit: FoodUnit): String {
    if (value == null) return "N/A"
    
    val formattedValue = when (value) {
        is Float -> {
            if (value % 1.0f == 0f) {
                value.toInt().toString()
            } else {
                ((value * 100).roundToInt() / 100.0).toString()
            }
        }
        is Double -> {
            if (value % 1.0 == 0.0) {
                value.toInt().toString()
            } else {
                ((value * 100).roundToInt() / 100.0).toString()
            }
        }
        is Int -> value.toString()
        is String -> if (value.isBlank() || value == "0") return "N/A" else value
        else -> value.toString()
    }
    
    return if (unit.symbol.isEmpty()) formattedValue else "$formattedValue ${unit.symbol}"
}

/**
 * Funciones de extensión para Food que proporcionan acceso fácil
 * a las unidades y formateo de valores.
 *
 * @author pelkidev
 */

/**
 * Obtiene el valor formateado de netWeightG con su unidad.
 */
fun Food.getNetWeightFormatted(): String {
    return formatWithUnit(netWeightG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de energyKcal con su unidad.
 */
fun Food.getEnergyFormatted(): String {
    return formatWithUnit(energyKcal, FoodUnit.KILOCALORIES)
}

/**
 * Obtiene el valor formateado de proteinG con su unidad.
 */
fun Food.getProteinFormatted(): String {
    return formatWithUnit(proteinG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de roundedGrossWeightG con su unidad.
 */
fun Food.getRoundedGrossWeightFormatted(): String {
    return formatWithUnit(roundedGrossWeightG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de lipidsG con su unidad.
 */
fun Food.getLipidsFormatted(): String {
    return formatWithUnit(lipidsG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de carbohydratesG con su unidad.
 */
fun Food.getCarbohydratesFormatted(): String {
    return formatWithUnit(carbohydratesG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de fiverG con su unidad.
 */
fun Food.getFiberFormatted(): String {
    return formatWithUnit(fiverG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de vitaminAUgRe con su unidad.
 */
fun Food.getVitaminAFormatted(): String {
    return formatWithUnit(vitaminAUgRe, FoodUnit.MICROGRAMS_RE)
}

/**
 * Obtiene el valor formateado de ascorbicAcidMg con su unidad.
 */
fun Food.getAscorbicAcidFormatted(): String {
    return formatWithUnit(ascorbicAcidMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de folicAcidUg con su unidad.
 */
fun Food.getFolicAcidFormatted(): String {
    return formatWithUnit(folicAcidUg, FoodUnit.MICROGRAMS)
}

/**
 * Obtiene el valor formateado de ironNoHemMg con su unidad.
 */
fun Food.getIronNoHemFormatted(): String {
    return formatWithUnit(ironNoHemMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de potassiumMg con su unidad.
 */
fun Food.getPotassiumFormatted(): String {
    return formatWithUnit(potassiumMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de calciumMg con su unidad.
 */
fun Food.getCalciumFormatted(): String {
    return formatWithUnit(calciumMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de ironMg con su unidad.
 */
fun Food.getIronFormatted(): String {
    return formatWithUnit(ironMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de sodiumMg con su unidad.
 */
fun Food.getSodiumFormatted(): String {
    return formatWithUnit(sodiumMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de cholesterolMg con su unidad.
 */
fun Food.getCholesterolFormatted(): String {
    return formatWithUnit(cholesterolMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de seleniumMg con su unidad.
 */
fun Food.getSeleniumFormatted(): String {
    return formatWithUnit(seleniumMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de phosphorusMg con su unidad.
 */
fun Food.getPhosphorusFormatted(): String {
    return formatWithUnit(phosphorusMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de agSaturatedG con su unidad.
 */
fun Food.getAgSaturatedFormatted(): String {
    return formatWithUnit(agSaturatedG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de agMonounsaturatedG con su unidad.
 */
fun Food.getAgMonounsaturatedFormatted(): String {
    return formatWithUnit(agMonounsaturatedG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de agPolyunsaturatedG con su unidad.
 */
fun Food.getAgPolyunsaturatedFormatted(): String {
    return formatWithUnit(agPolyunsaturatedG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de sugarPerEquivalentG con su unidad.
 */
fun Food.getSugarPerEquivalentFormatted(): String {
    return formatWithUnit(sugarPerEquivalentG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de hypoglycemicIndex con su unidad.
 */
fun Food.getHypoglycemicIndexFormatted(): String {
    return formatWithUnit(hypoglycemicIndex, FoodUnit.UNITLESS)
}

/**
 * Obtiene el valor formateado de hypoglycemicLoad con su unidad.
 */
fun Food.getHypoglycemicLoadFormatted(): String {
    return formatWithUnit(hypoglycemicLoad, FoodUnit.UNITLESS)
}
