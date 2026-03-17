package liftechnology.com.mx.planalimenticiokmp.ui.components.search

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
import androidx.compose.runtime.remember
import androidx.compose.ui.Modifier
import androidx.compose.ui.focus.FocusRequester
import androidx.compose.ui.platform.LocalSoftwareKeyboardController
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import liftechnology.com.mx.planalimenticiokmp.presentation.model.state.SubMenuState
import liftechnology.com.mx.planalimenticiokmp.presentation.viewmodel.search.SearchViewModel
import liftechnology.com.mx.planalimenticiokmp.ui.theme.allCategories
import liftechnology.com.mx.planalimenticiokmp.ui.theme.margin16dp
import liftechnology.com.mx.planalimenticiokmp.ui.theme.margin8dp
import liftechnology.com.mx.planalimenticiokmp.ui.components.cards.FoodCard
import liftechnology.com.mx.planalimenticiokmp.ui.components.common.HeaderScreen
import liftechnology.com.mx.planalimenticiokmp.ui.components.input.TextFieldGeneric
import liftechnology.com.mx.planalimenticiokmp.core.util.ModelRegex
import liftechnology.com.mx.planalimenticiokmp.presentation.model.ui.ModelSubItemCard
import org.koin.compose.viewmodel.koinViewModel

@Composable
fun TableSearchMenuScreen(
    uiState: SubMenuState
){
    LazyColumn(
        modifier = Modifier
            .wrapContentHeight()
            .padding(margin8dp),
        verticalArrangement = Arrangement.spacedBy(margin16dp)
    ) {
        itemsIndexed(
            items = uiState.foodList ?: emptyList(),
            key = { _ , item: ModelSubItemCard -> item.idCard }
        ) { _, item: ModelSubItemCard ->
            FoodCard(
                item = item
            )
        }
    }
}
