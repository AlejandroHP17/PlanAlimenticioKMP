package litechnology.com.mx.planalimenticiokmp.ui.menu

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
import litechnology.com.mx.planalimenticiokmp.presentation.model.viewmodelState.MenuState
import litechnology.com.mx.planalimenticiokmp.presentation.viewmodel.menu.MenuViewModel
import litechnology.com.mx.planalimenticiokmp.core.theme.margin16dp
import litechnology.com.mx.planalimenticiokmp.core.theme.margin8dp
import litechnology.com.mx.planalimenticiokmp.core.theme.titleMenu
import litechnology.com.mx.planalimenticiokmp.ui.components.cards.CategoryCard
import litechnology.com.mx.planalimenticiokmp.ui.components.common.HeaderScreen
import litechnology.com.mx.planalimenticiokmp.util.ModelItemCard
import org.koin.compose.viewmodel.koinViewModel

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

/**
 * Pantalla de splash de la aplicación.
 *
 * @param menuViewModel El ViewModel para esta pantalla.
 * @param onNavigateToMain Lambda que se invoca para navegar a la pantalla principal.
 */
@Composable
fun MenuScreen(
    menuViewModel: MenuViewModel = koinViewModel(),
    onNavigateToMain: (String) -> Unit,
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
            onNavigateToMain = { onNavigateToMain(it) }
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