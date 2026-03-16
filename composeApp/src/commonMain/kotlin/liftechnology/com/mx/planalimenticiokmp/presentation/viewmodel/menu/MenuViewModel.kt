package liftechnology.com.mx.planalimenticiokmp.presentation.viewmodel.menu

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import co.touchlab.kermit.Logger
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch
import liftechnology.com.mx.planalimenticiokmp.data.mapper.menu.toMenuMapper
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.category.GetAllCategoriesUseCase
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.initialize.InitializeDataBaseUseCase
import liftechnology.com.mx.planalimenticiokmp.presentation.model.viewmodelState.MenuState

class MenuViewModel (
    private val getAllCategoriesUseCase: GetAllCategoriesUseCase,
    private val initializeDataBaseUseCase: InitializeDataBaseUseCase
): ViewModel() {

    private val _uiState = MutableStateFlow(MenuState())
    /** El estado de la UI para la pantalla. */
    val uiState: StateFlow<MenuState> = _uiState.asStateFlow()

    val logger = Logger.withTag("SubMenuViewModel")

    /**
     * Obtiene las categorías de la base de datos.
     * Asegura que la base de datos esté inicializada antes de cargar las categorías.
     */
    fun getCategories(){
        viewModelScope.launch {
            logger.d("Iniciando carga de categorías...")
            
            // Aseguramos que la base de datos esté inicializada (especialmente importante en iOS)
            initializeDataBaseUseCase()
            
            val result = getAllCategoriesUseCase.invokeSuspend()

            if (result.isNotEmpty()) {
                logger.d( "✅ Categorías cargadas: ${result.size} categorías encontradas")
                _uiState.update { it.copy(categoryList = result.toMenuMapper()) }
            } else {
                logger.w("⚠️ No se encontraron categorías")
                _uiState.update { it.copy(categoryList = emptyList()) }
            }
        }
    }
}