package liftechnology.com.mx.planalimenticiokmp.ui.menu

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.wrapContentHeight
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.itemsIndexed
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import liftechnology.com.mx.planalimenticiokmp.presentation.model.state.MenuState
import liftechnology.com.mx.planalimenticiokmp.presentation.viewmodel.menu.MenuViewModel
import liftechnology.com.mx.planalimenticiokmp.ui.theme.margin16dp
import liftechnology.com.mx.planalimenticiokmp.ui.theme.margin8dp
import liftechnology.com.mx.planalimenticiokmp.ui.theme.titleMenu
import liftechnology.com.mx.planalimenticiokmp.ui.components.cards.CategoryCard
import liftechnology.com.mx.planalimenticiokmp.ui.components.common.HeaderScreen
import liftechnology.com.mx.planalimenticiokmp.presentation.model.ui.ModelItemCard
import org.koin.compose.viewmodel.koinViewModel

/**
 * Pantalla de splash de la aplicación.
 *
 * @param menuViewModel El ViewModel para esta pantalla.
 * @param onNavigateToSubMenu Lambda que se invoca para navegar a la pantalla principal.
 */
@Composable
fun MenuScreen(
    menuViewModel: MenuViewModel = koinViewModel(),
    onNavigateToSubMenu: (String) -> Unit,
    onNavigateToSearch: () -> Unit
) {
    val uiState by menuViewModel.uiState.collectAsState()

    LaunchedEffect(Unit) {
        menuViewModel.getCategories()
    }

    Column {
        HeaderScreen(
            title = titleMenu,
            onNavigateToSearch = {onNavigateToSearch()}
        )

        Spacer(modifier = Modifier.padding(8.dp))

        TableMenuScreen(
            uiState = uiState,
            onNavigateToMain = { onNavigateToSubMenu(it) }
        )
    }
}

@Composable
private fun TableMenuScreen(
    uiState: MenuState,
    onNavigateToMain: (String) -> Unit
) {
    LazyColumn(
        modifier = Modifier
            .wrapContentHeight()
            .padding(margin8dp),
        verticalArrangement = Arrangement.spacedBy(margin16dp)
    ) {
        itemsIndexed(
            items = uiState.categoryList ?: emptyList(),
            key = { _, item: ModelItemCard -> item.title }
        ) { _, item: ModelItemCard ->
            CategoryCard(
                item = item,
                onClick = { onNavigateToMain(it) }
            )
        }
    }
}

@Preview(showBackground = true)
@Composable
private fun MenuScreenView() {
    val list = listOf(
        ModelItemCard(
            idCard = 1,
            idCategory = 1,
            title = "Prueba"
        ),
        ModelItemCard(
            idCard = 2,
            idCategory = 2,
            title = "Test"
        )
    )
    TableMenuScreen(
        uiState = MenuState(list),
        onNavigateToMain = {}

    )
}