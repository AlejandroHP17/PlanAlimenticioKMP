package liftechnology.com.mx.planalimenticiokmp.ui.components.common

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.Color
import liftechnology.com.mx.planalimenticiokmp.ui.theme.aceiteYGrasaProteina
import liftechnology.com.mx.planalimenticiokmp.ui.theme.aceiteYGrasas
import liftechnology.com.mx.planalimenticiokmp.ui.theme.altoGrasa
import liftechnology.com.mx.planalimenticiokmp.ui.theme.azucar
import liftechnology.com.mx.planalimenticiokmp.ui.theme.azucarGrasa
import liftechnology.com.mx.planalimenticiokmp.ui.theme.bajoGrasa
import liftechnology.com.mx.planalimenticiokmp.ui.theme.cereales
import liftechnology.com.mx.planalimenticiokmp.ui.theme.cerealesGrasa
import liftechnology.com.mx.planalimenticiokmp.ui.theme.colorBgCard
import liftechnology.com.mx.planalimenticiokmp.ui.theme.frutas
import liftechnology.com.mx.planalimenticiokmp.ui.theme.lecheAzucar
import liftechnology.com.mx.planalimenticiokmp.ui.theme.lecheDescremada
import liftechnology.com.mx.planalimenticiokmp.ui.theme.lecheEntera
import liftechnology.com.mx.planalimenticiokmp.ui.theme.lecheSemidescremada
import liftechnology.com.mx.planalimenticiokmp.ui.theme.leguminosas
import liftechnology.com.mx.planalimenticiokmp.ui.theme.moderadoGrasa
import liftechnology.com.mx.planalimenticiokmp.ui.theme.muyBajoGrasa
import liftechnology.com.mx.planalimenticiokmp.ui.theme.verduras

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
        1 -> aceiteYGrasaProteina
        2 -> aceiteYGrasas
        3 -> altoGrasa
        4 -> bajoGrasa
        5 -> moderadoGrasa
        6 -> muyBajoGrasa
        7 -> azucarGrasa
        8 -> azucar
        9 -> cerealesGrasa
        10 -> cereales
        11 -> frutas
        12 -> lecheAzucar
        13 -> lecheDescremada
        14 -> lecheEntera
        15 -> lecheSemidescremada
        16 -> leguminosas
        17 -> verduras
        else -> colorBgCard
    }
}