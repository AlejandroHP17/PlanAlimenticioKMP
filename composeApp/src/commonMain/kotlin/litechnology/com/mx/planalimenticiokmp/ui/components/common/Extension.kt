package litechnology.com.mx.planalimenticiokmp.ui.components.common

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.Color
import litechnology.com.mx.planalimenticiokmp.theme.aceiteYGrasaProteina
import litechnology.com.mx.planalimenticiokmp.theme.aceiteYGrasas
import litechnology.com.mx.planalimenticiokmp.theme.altoGrasa
import litechnology.com.mx.planalimenticiokmp.theme.azucar
import litechnology.com.mx.planalimenticiokmp.theme.azucarGrasa
import litechnology.com.mx.planalimenticiokmp.theme.bajoGrasa
import litechnology.com.mx.planalimenticiokmp.theme.cereales
import litechnology.com.mx.planalimenticiokmp.theme.cerealesGrasa
import litechnology.com.mx.planalimenticiokmp.theme.colorBgCard
import litechnology.com.mx.planalimenticiokmp.theme.frutas
import litechnology.com.mx.planalimenticiokmp.theme.lecheAzucar
import litechnology.com.mx.planalimenticiokmp.theme.lecheDescremada
import litechnology.com.mx.planalimenticiokmp.theme.lecheEntera
import litechnology.com.mx.planalimenticiokmp.theme.lecheSemidescremada
import litechnology.com.mx.planalimenticiokmp.theme.leguminosas
import litechnology.com.mx.planalimenticiokmp.theme.moderadoGrasa
import litechnology.com.mx.planalimenticiokmp.theme.muyBajoGrasa
import litechnology.com.mx.planalimenticiokmp.theme.verduras

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