package liftechnology.com.mx.planalimenticiokmp.data.mapper.subMenu

import liftechnology.com.mx.planalimenticiokmp.data.entity.getAgMonounsaturatedFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getAgPolyunsaturatedFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getAgSaturatedFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getAscorbicAcidFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getCalciumFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getCarbohydratesFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getCholesterolFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getEnergyFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getFiberFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getFolicAcidFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getHypoglycemicIndexFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getHypoglycemicLoadFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getIronFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getIronNoHemFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getLipidsFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getNetWeightFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getPhosphorusFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getPotassiumFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getProteinFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getRoundedGrossWeightFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getSeleniumFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getSodiumFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getSugarPerEquivalentFormatted
import liftechnology.com.mx.planalimenticiokmp.data.entity.getVitaminAFormatted
import liftechnology.com.mx.planalimenticiokmp.domain.model.Food
import liftechnology.com.mx.planalimenticiokmp.util.ModelSubItemCard

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
