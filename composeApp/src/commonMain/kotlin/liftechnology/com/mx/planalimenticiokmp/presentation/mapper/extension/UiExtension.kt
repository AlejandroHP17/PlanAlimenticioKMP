package liftechnology.com.mx.planalimenticiokmp.presentation.mapper.extension

import liftechnology.com.mx.planalimenticiokmp.data.entity.FoodEntityMetadata
import liftechnology.com.mx.planalimenticiokmp.presentation.model.ui.ModelSubItemCard

/**
 * Función de extensión que convierte ModelSubItemCard en una lista de strings formateados.
 * Filtra los valores nulos o "N/A" y formatea cada campo como "Etiqueta: valor".
 *
 * @return Lista de strings con los campos no nulos formateados
 *
 * @author pelkidev
 */fun ModelSubItemCard.toNonNullList(): List<String> = buildList {

    fun addField(key: String, value: String?) {
        value?.takeIf { it.isNotBlank() && it != "N/A" }
            ?.let { add("${FoodEntityMetadata.getLabel(key)}: $it") }
    }

    add("${FoodEntityMetadata.getLabel("suggestedQuantity")}: $suggestedQuantity")
    add("${FoodEntityMetadata.getLabel("netWeightG")}: $netWeightG")
    add("${FoodEntityMetadata.getLabel("roundedGrossWeightG")}: $roundedGrossWeightG")
    add("${FoodEntityMetadata.getLabel("energyKcal")}: $energyKcal")

    listOf(
        "proteinG" to proteinG,
        "lipidsG" to lipidsG,
        "carbohydratesG" to carbohydratesG,
        "fiverG" to fiverG,
        "vitaminAUgRe" to vitaminAUgRe,
        "ascorbicAcidMg" to ascorbicAcidMg,
        "folicAcidUg" to folicAcidUg,
        "ironNoHemMg" to ironNoHemMg,
        "potassiumMg" to potassiumMg,
        "hypoglycemicIndex" to hypoglycemicIndex,
        "hypoglycemicLoad" to hypoglycemicLoad,
        "sugarPerEquivalentG" to sugarPerEquivalentG,
        "calciumMg" to calciumMg,
        "ironMg" to ironMg,
        "sodiumMg" to sodiumMg,
        "cholesterolMg" to cholesterolMg,
        "seleniumMg" to seleniumMg,
        "phosphorusMg" to phosphorusMg,
        "agSaturatedG" to agSaturatedG,
        "agMonounsaturatedG" to agMonounsaturatedG,
        "agPolyunsaturatedG" to agPolyunsaturatedG
    ).forEach { (key, value) ->
        addField(key, value)
    }
}