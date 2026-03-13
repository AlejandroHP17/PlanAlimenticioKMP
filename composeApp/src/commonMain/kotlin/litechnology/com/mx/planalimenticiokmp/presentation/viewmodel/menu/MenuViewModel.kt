package litechnology.com.mx.planalimenticiokmp.presentation.viewmodel.menu

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import co.touchlab.kermit.Logger
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch
import litechnology.com.mx.planalimenticiokmp.data.mapper.menu.toMenuMapper
import litechnology.com.mx.planalimenticiokmp.domain.usecase.category.GetAllCategoriesUseCase
import litechnology.com.mx.planalimenticiokmp.presentation.model.viewmodelState.MenuState

class MenuViewModel (
    private var getAllCategoriesUseCase: GetAllCategoriesUseCase
): ViewModel() {

    private val _uiState = MutableStateFlow(MenuState())
    /** El estado de la UI para la pantalla. */
    val uiState: StateFlow<MenuState> = _uiState.asStateFlow()

    private val tag = "MenuViewModel"
    val logger = Logger.withTag("MenuViewModel")

    /**
     * Obtiene las categorías de la base de datos.
     * Espera a que la base de datos esté inicializada antes de cargar las categorías.
     * Esto resuelve el problema de que en la primera instalación, la UI se renderiza
     * antes de que la base de datos termine de inicializarse.
     */
    fun getCategories(){
        viewModelScope.launch {
            var result = getAllCategoriesUseCase.invokeSuspend()
            var attempts = 0
            val maxAttempts = 20 // Máximo 2 segundos (20 * 100ms)
            val delayMs = 100L // Espera 100ms entre intentos

            // Espera a que la base de datos esté inicializada
            while (result.isEmpty() && attempts < maxAttempts) {
                delay(delayMs)
                result = getAllCategoriesUseCase.invokeSuspend()
                attempts++
                if (result.isEmpty()) {
                    logger.d("Esperando inicialización de BD... Intento $attempts/$maxAttempts")
                }
            }

            if (result.isNotEmpty()) {
                logger.d( "✅ Categorías cargadas: ${result.size} categorías encontradas")
                _uiState.update { it.copy(categoryList = result.toMenuMapper()) }
            } else {
                logger.w("⚠️ No se encontraron categorías después de $maxAttempts intentos")
                // Aún así actualiza el estado (con lista vacía) para que la UI sepa que terminó de intentar
                _uiState.update { it.copy(categoryList = emptyList()) }
            }
        }
    }
}