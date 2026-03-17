package liftechnology.com.mx.planalimenticiokmp.presentation.viewmodel.subMenu

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import co.touchlab.kermit.Logger
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch
import liftechnology.com.mx.planalimenticiokmp.presentation.mapper.subMenu.toSubMenuMapper
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.food.GetFoodsByCategoryUseCase
import liftechnology.com.mx.planalimenticiokmp.presentation.model.state.SubMenuState


class SubMenuViewModel (
    private var getFoodsByCategoryUseCase: GetFoodsByCategoryUseCase
): ViewModel() {

    private val _uiState = MutableStateFlow(SubMenuState())
    /** El estado de la UI para la pantalla. */
    val uiState: StateFlow<SubMenuState> = _uiState.asStateFlow()

    /**
     * Obtiene los alimentos de una categoría específica.
     * Espera a que la base de datos esté inicializada antes de cargar los alimentos.
     */
    fun getFoodsByCategory(category: String){
        viewModelScope.launch {
            val result = getFoodsByCategoryUseCase.invokeSuspend(category)

            if (result.isNotEmpty()) {
                _uiState.update { it.copy(foodList = result.toSubMenuMapper()) }
            } else {
                _uiState.update { it.copy(foodList = emptyList()) }
            }
        }
    }
}