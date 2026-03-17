package liftechnology.com.mx.planalimenticiokmp.data.entity

import liftechnology.com.mx.planalimenticiokmp.data.model.FoodUnit
import liftechnology.com.mx.planalimenticiokmp.domain.model.FoodDomain
import kotlin.math.roundToInt


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
fun FoodDomain.getNetWeightFormatted(): String {
    return formatWithUnit(netWeightG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de energyKcal con su unidad.
 */
fun FoodDomain.getEnergyFormatted(): String {
    return formatWithUnit(energyKcal, FoodUnit.KILOCALORIES)
}

/**
 * Obtiene el valor formateado de proteinG con su unidad.
 */
fun FoodDomain.getProteinFormatted(): String {
    return formatWithUnit(proteinG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de roundedGrossWeightG con su unidad.
 */
fun FoodDomain.getRoundedGrossWeightFormatted(): String {
    return formatWithUnit(roundedGrossWeightG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de lipidsG con su unidad.
 */
fun FoodDomain.getLipidsFormatted(): String {
    return formatWithUnit(lipidsG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de carbohydratesG con su unidad.
 */
fun FoodDomain.getCarbohydratesFormatted(): String {
    return formatWithUnit(carbohydratesG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de fiverG con su unidad.
 */
fun FoodDomain.getFiberFormatted(): String {
    return formatWithUnit(fiverG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de vitaminAUgRe con su unidad.
 */
fun FoodDomain.getVitaminAFormatted(): String {
    return formatWithUnit(vitaminAUgRe, FoodUnit.MICROGRAMS_RE)
}

/**
 * Obtiene el valor formateado de ascorbicAcidMg con su unidad.
 */
fun FoodDomain.getAscorbicAcidFormatted(): String {
    return formatWithUnit(ascorbicAcidMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de folicAcidUg con su unidad.
 */
fun FoodDomain.getFolicAcidFormatted(): String {
    return formatWithUnit(folicAcidUg, FoodUnit.MICROGRAMS)
}

/**
 * Obtiene el valor formateado de ironNoHemMg con su unidad.
 */
fun FoodDomain.getIronNoHemFormatted(): String {
    return formatWithUnit(ironNoHemMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de potassiumMg con su unidad.
 */
fun FoodDomain.getPotassiumFormatted(): String {
    return formatWithUnit(potassiumMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de calciumMg con su unidad.
 */
fun FoodDomain.getCalciumFormatted(): String {
    return formatWithUnit(calciumMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de ironMg con su unidad.
 */
fun FoodDomain.getIronFormatted(): String {
    return formatWithUnit(ironMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de sodiumMg con su unidad.
 */
fun FoodDomain.getSodiumFormatted(): String {
    return formatWithUnit(sodiumMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de cholesterolMg con su unidad.
 */
fun FoodDomain.getCholesterolFormatted(): String {
    return formatWithUnit(cholesterolMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de seleniumMg con su unidad.
 */
fun FoodDomain.getSeleniumFormatted(): String {
    return formatWithUnit(seleniumMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de phosphorusMg con su unidad.
 */
fun FoodDomain.getPhosphorusFormatted(): String {
    return formatWithUnit(phosphorusMg, FoodUnit.MILLIGRAMS)
}

/**
 * Obtiene el valor formateado de agSaturatedG con su unidad.
 */
fun FoodDomain.getAgSaturatedFormatted(): String {
    return formatWithUnit(agSaturatedG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de agMonounsaturatedG con su unidad.
 */
fun FoodDomain.getAgMonounsaturatedFormatted(): String {
    return formatWithUnit(agMonounsaturatedG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de agPolyunsaturatedG con su unidad.
 */
fun FoodDomain.getAgPolyunsaturatedFormatted(): String {
    return formatWithUnit(agPolyunsaturatedG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de sugarPerEquivalentG con su unidad.
 */
fun FoodDomain.getSugarPerEquivalentFormatted(): String {
    return formatWithUnit(sugarPerEquivalentG, FoodUnit.GRAMS)
}

/**
 * Obtiene el valor formateado de hypoglycemicIndex con su unidad.
 */
fun FoodDomain.getHypoglycemicIndexFormatted(): String {
    return formatWithUnit(hypoglycemicIndex, FoodUnit.UNITLESS)
}

/**
 * Obtiene el valor formateado de hypoglycemicLoad con su unidad.
 */
fun FoodDomain.getHypoglycemicLoadFormatted(): String {
    return formatWithUnit(hypoglycemicLoad, FoodUnit.UNITLESS)
}
