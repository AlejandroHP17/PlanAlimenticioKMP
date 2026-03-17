package liftechnology.com.mx.planalimenticiokmp.ui.subMenu

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.wrapContentHeight
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.itemsIndexed
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import liftechnology.com.mx.planalimenticiokmp.presentation.model.state.SubMenuState
import liftechnology.com.mx.planalimenticiokmp.presentation.viewmodel.subMenu.SubMenuViewModel
import liftechnology.com.mx.planalimenticiokmp.ui.theme.margin16dp
import liftechnology.com.mx.planalimenticiokmp.ui.theme.margin8dp
import liftechnology.com.mx.planalimenticiokmp.ui.components.cards.FoodCard
import liftechnology.com.mx.planalimenticiokmp.ui.components.common.HeaderScreen
import liftechnology.com.mx.planalimenticiokmp.presentation.model.ui.ModelSubItemCard
import org.koin.compose.viewmodel.koinViewModel


/**
 * Pantalla de submenú que muestra los alimentos de una categoría específica.
 *
 * @param categoria Nombre de la categoría de alimentos a mostrar
 * @param subMenuViewModel El ViewModel para esta pantalla
 */
@Composable
fun SubMenuScreen(
    categoria: String,
    subMenuViewModel: SubMenuViewModel = koinViewModel(),
    onNavigateToSearch: (String) -> Unit
) {

    val uiState by subMenuViewModel.uiState.collectAsStateWithLifecycle()

    LaunchedEffect(categoria) {
        // Aquí puedes usar la categoría para cargar los alimentos específicos
        subMenuViewModel.getFoodsByCategory(categoria)
    }

    Column {
        HeaderScreen(
            title = categoria,
            onNavigateToSearch = { onNavigateToSearch(categoria) }
        )

        Spacer(modifier = Modifier.padding(8.dp))

        TableSubMenuScreen(
            uiState = uiState
        )
    }
}

@Composable
private fun TableSubMenuScreen(
    uiState: SubMenuState
) {
    LazyColumn(
        modifier = Modifier
            .wrapContentHeight()
            .padding(margin8dp),
        verticalArrangement = Arrangement.spacedBy(margin16dp)
    ) {
        itemsIndexed(
            items = uiState.foodList ?: emptyList(),
            key = { _, item: ModelSubItemCard -> item.idCard }
        ) { _, item: ModelSubItemCard ->
            FoodCard(
                item = item
            )
        }
    }
}

@Preview
@Composable
private fun SubMenuScreenView()
{
    SubMenuScreen(
        categoria = "VERDURAS",
        onNavigateToSearch = {})
}