package liftechnology.com.mx.planalimenticiokmp.data.model

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