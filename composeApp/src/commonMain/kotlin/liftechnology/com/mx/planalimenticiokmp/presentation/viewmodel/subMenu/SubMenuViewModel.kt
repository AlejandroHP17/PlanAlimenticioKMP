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
import liftechnology.com.mx.planalimenticiokmp.data.mapper.subMenu.toSubMenuMapper
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.food.GetFoodsByCategoryUseCase
import liftechnology.com.mx.planalimenticiokmp.presentation.model.viewmodelState.SubMenuState


class SubMenuViewModel (
    private var getFoodsByCategoryUseCase: GetFoodsByCategoryUseCase
): ViewModel() {

    private val _uiState = MutableStateFlow(SubMenuState())
    /** El estado de la UI para la pantalla. */
    val uiState: StateFlow<SubMenuState> = _uiState.asStateFlow()

    val logger = Logger.withTag("SubMenuViewModel")

    /**
     * Obtiene los alimentos de una categoría específica.
     * Espera a que la base de datos esté inicializada antes de cargar los alimentos.
     */
    fun getFoodsByCategory(category: String){
        viewModelScope.launch {
            var result = getFoodsByCategoryUseCase.invokeSuspend(category)
            var attempts = 0
            val maxAttempts = 20 // Máximo 2 segundos (20 * 100ms)
            val delayMs = 100L // Espera 100ms entre intentos

            // Espera a que la base de datos esté inicializada
            while (result.isEmpty() && attempts < maxAttempts) {
                delay(delayMs)
                result = getFoodsByCategoryUseCase.invokeSuspend(category)
                attempts++
                if (result.isEmpty()) {
                    logger.d("Esperando inicialización de BD para categoría '$category'... Intento $attempts/$maxAttempts")
                }
            }

            if (result.isNotEmpty()) {
                logger.d("✅ Alimentos cargados para categoría '$category': ${result.size} alimentos encontrados")
                _uiState.update { it.copy(foodList = result.toSubMenuMapper()) }
            } else {
                logger.w("⚠️ No se encontraron alimentos para la categoría '$category' después de $maxAttempts intentos")
                _uiState.update { it.copy(foodList = emptyList()) }
            }
        }
    }
}