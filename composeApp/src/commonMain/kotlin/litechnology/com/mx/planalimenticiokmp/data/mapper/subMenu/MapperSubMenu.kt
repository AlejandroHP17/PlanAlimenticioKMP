package litechnology.com.mx.planalimenticiokmp.data.mapper.subMenu

import litechnology.com.mx.planalimenticiokmp.data.entity.getAgMonounsaturatedFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getAgPolyunsaturatedFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getAgSaturatedFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getAscorbicAcidFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getCalciumFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getCarbohydratesFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getCholesterolFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getEnergyFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getFiberFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getFolicAcidFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getHypoglycemicIndexFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getHypoglycemicLoadFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getIronFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getIronNoHemFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getLipidsFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getNetWeightFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getPhosphorusFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getPotassiumFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getProteinFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getRoundedGrossWeightFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getSeleniumFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getSodiumFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getSugarPerEquivalentFormatted
import litechnology.com.mx.planalimenticiokmp.data.entity.getVitaminAFormatted
import litechnology.com.mx.planalimenticiokmp.domain.model.Food
import litechnology.com.mx.planalimenticiokmp.util.ModelSubItemCard

fun List<Food>.toSubMenuMapper(): List<ModelSubItemCard> {
    return this.mapIndexed { _, it ->
        ModelSubItemCard(
            idCard = it.id.toInt(),
            idCategory = it.idCategory,
            foodTitle = it.food,
            suggestedQuantity = "${it.suggestedQuantity} ${it.unit}",
            netWeightG = it.getNetWeightFormatted(),
            roundedGrossWeightG = it.getRoundedGrossWeightFormatted(),
            energyKcal = it.getEnergyFormatted(),
            proteinG = it.getProteinFormatted(),
            lipidsG = it.getLipidsFormatted(),
            carbohydratesG = it.getCarbohydratesFormatted(),
            fiverG = it.getFiberFormatted(),
            vitaminAUgRe = it.getVitaminAFormatted(),
            ascorbicAcidMg = it.getAscorbicAcidFormatted(),
            folicAcidUg = it.getFolicAcidFormatted(),
            ironNoHemMg = it.getIronNoHemFormatted(),
            potassiumMg = it.getPotassiumFormatted(),
            hypoglycemicIndex = it.getHypoglycemicIndexFormatted(),
            hypoglycemicLoad = it.getHypoglycemicLoadFormatted(),
            sugarPerEquivalentG = it.getSugarPerEquivalentFormatted(),
            calciumMg = it.getCalciumFormatted(),
            ironMg = it.getIronFormatted(),
            sodiumMg = it.getSodiumFormatted(),
            cholesterolMg = it.getCholesterolFormatted(),
            seleniumMg = it.getSeleniumFormatted(),
            phosphorusMg = it.getPhosphorusFormatted(),
            agSaturatedG = it.getAgSaturatedFormatted(),
            agMonounsaturatedG = it.getAgMonounsaturatedFormatted(),
            agPolyunsaturatedG = it.getAgPolyunsaturatedFormatted()
        )
    }
}
