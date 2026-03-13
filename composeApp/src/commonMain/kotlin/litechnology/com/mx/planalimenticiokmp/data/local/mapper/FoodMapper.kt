package litechnology.com.mx.planalimenticiokmp.data.local.mapper

import litechnology.com.mx.planalimenticiokmp.data.local.database.FoodEntity
import litechnology.com.mx.planalimenticiokmp.domain.model.Food

/**
 * Mapper para convertir entre entidades de SQLDelight y modelos de dominio.
 */
object FoodMapper {

    /**
     * Convierte una entidad de SQLDelight (FoodEntity) a un modelo de dominio (Food).
     */
    fun toDomain(entity: FoodEntity): Food {
        return Food(
            id = entity.id,
            category = entity.category,
            idCategory = entity.idCategory.toInt(),
            food = entity.food,
            suggestedQuantity = entity.suggestedQuantity.toFloat(),
            unit = entity.unit,
            netWeightG = entity.netWeightG,
            roundedGrossWeightG = entity.roundedGrossWeightG.toInt(),
            energyKcal = entity.energyKcal.toInt(),
            proteinG = entity.proteinG?.toFloat(),
            lipidsG = entity.lipidsG?.toFloat(),
            carbohydratesG = entity.carbohydratesG?.toFloat(),
            fiverG = entity.fiverG?.toFloat(),
            vitaminAUgRe = entity.vitaminAUgRe?.toFloat(),
            ascorbicAcidMg = entity.ascorbicAcidMg?.toFloat(),
            folicAcidUg = entity.folicAcidUg?.toFloat(),
            ironNoHemMg = entity.ironNoHemMg?.toFloat(),
            potassiumMg = entity.potassiumMg?.toFloat(),
            hypoglycemicIndex = entity.hypoglycemicIndex?.toFloat(),
            hypoglycemicLoad = entity.hypoglycemicLoad?.toFloat(),
            sugarPerEquivalentG = entity.sugarPerEquivalentG?.toFloat(),
            calciumMg = entity.calciumMg?.toFloat(),
            ironMg = entity.ironMg?.toFloat(),
            sodiumMg = entity.sodiumMg?.toFloat(),
            cholesterolMg = entity.cholesterolMg?.toFloat(),
            seleniumMg = entity.seleniumMg?.toFloat(),
            phosphorusMg = entity.phosphorusMg?.toFloat(),
            agSaturatedG = entity.agSaturatedG?.toFloat(),
            agMonounsaturatedG = entity.agMonounsaturatedG?.toFloat(),
            agPolyunsaturatedG = entity.agPolyunsaturatedG?.toFloat()
        )
    }
}
