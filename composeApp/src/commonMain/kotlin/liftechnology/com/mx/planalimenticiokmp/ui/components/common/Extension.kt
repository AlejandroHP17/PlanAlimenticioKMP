package liftechnology.com.mx.planalimenticiokmp.ui.components.common

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.Color
import liftechnology.com.mx.planalimenticiokmp.core.theme.aceiteYGrasaProteina
import liftechnology.com.mx.planalimenticiokmp.core.theme.aceiteYGrasas
import liftechnology.com.mx.planalimenticiokmp.core.theme.altoGrasa
import liftechnology.com.mx.planalimenticiokmp.core.theme.azucar
import liftechnology.com.mx.planalimenticiokmp.core.theme.azucarGrasa
import liftechnology.com.mx.planalimenticiokmp.core.theme.bajoGrasa
import liftechnology.com.mx.planalimenticiokmp.core.theme.cereales
import liftechnology.com.mx.planalimenticiokmp.core.theme.cerealesGrasa
import liftechnology.com.mx.planalimenticiokmp.core.theme.colorBgCard
import liftechnology.com.mx.planalimenticiokmp.core.theme.frutas
import liftechnology.com.mx.planalimenticiokmp.core.theme.lecheAzucar
import liftechnology.com.mx.planalimenticiokmp.core.theme.lecheDescremada
import liftechnology.com.mx.planalimenticiokmp.core.theme.lecheEntera
import liftechnology.com.mx.planalimenticiokmp.core.theme.lecheSemidescremada
import liftechnology.com.mx.planalimenticiokmp.core.theme.leguminosas
import liftechnology.com.mx.planalimenticiokmp.core.theme.moderadoGrasa
import liftechnology.com.mx.planalimenticiokmp.core.theme.muyBajoGrasa
import liftechnology.com.mx.planalimenticiokmp.core.theme.verduras

/**
 * Obtiene el color de la tarjeta según el ID de categoría.
 * Cada categoría tiene un color único para facilitar la identificación visual.
 *
 * @param idCategory identificador de la categoría (1-17)
 * @return Color correspondiente a la categoría
 */
@Composable
fun getCategoryColor(idCategory: Int): Color {
    return when (idCategory) {
        1 -> aceiteYGrasaProteina // Aceite y grasas con proteína - Rosa claro
        2 -> aceiteYGrasas // Aceites y grasas - Naranja claro
        3 -> altoGrasa // Alimentos de origen animal alto aporte de grasa - Rosa pastel
        4 -> bajoGrasa // Alimentos de origen animal bajo aporte de grasa - Azul claro
        5 -> moderadoGrasa // Alimentos de origen animal moderado aporte de grasa - Verde claro
        6 -> muyBajoGrasa // Alimentos de origen animal muy bajo aporte de grasa - Morado claro
        7 -> azucarGrasa // Azúcares con grasa - Melocotón claro
        8 -> azucar // Azúcares sin grasa - Amarillo claro
        9 -> cerealesGrasa // Cereales con grasa - Verde menta
        10 -> cereales // Cereales sin grasa - Verde pastel
        11 -> frutas // Frutas - Rosa suave
        12 -> lecheAzucar // Leche con azúcar - Azul cielo
        13 -> lecheDescremada // Leche descremada - Azul muy claro
        14 -> lecheEntera // Leche entera - Crema
        15 -> lecheSemidescremada // Leche semidescremada - Lavanda claro
        16 -> leguminosas // Leguminosas - Salmón claro
        17 -> verduras // Verduras - Verde claro
        else -> colorBgCard // Color por defecto si no coincide
    }
}