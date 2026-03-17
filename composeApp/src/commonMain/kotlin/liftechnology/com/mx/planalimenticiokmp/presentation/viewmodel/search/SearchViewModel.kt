package liftechnology.com.mx.planalimenticiokmp.presentation.viewmodel.search

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import co.touchlab.kermit.Logger
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch
import liftechnology.com.mx.planalimenticiokmp.presentation.mapper.subMenu.toSubMenuMapper
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.food.GetAllFoodsUseCase
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.food.GetFoodsByCategoryUseCase
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.food.SearchFoodsUseCase
import liftechnology.com.mx.planalimenticiokmp.presentation.model.state.SubMenuState
import liftechnology.com.mx.planalimenticiokmp.ui.navigation.AppRoutes.ARGUMENTS


class SearchViewModel (
    private val getAllFoodsUseCase: GetAllFoodsUseCase,
    private val getFoodsByCategoryUseCase: GetFoodsByCategoryUseCase,
    private val searchFoodsUseCase: SearchFoodsUseCase
): ViewModel() {

    private val _uiState = MutableStateFlow(SubMenuState())
    /** El estado de la UI para la pantalla. */
    val uiState: StateFlow<SubMenuState> = _uiState.asStateFlow()

    val logger = Logger.withTag("SearchViewModel")

    /**
     * Carga los alimentos iniciales según la categoría.
     * Si categoria es null, muestra todos los alimentos.
     * Si categoria tiene valor, muestra solo los alimentos de esa categoría.
     * Espera a que la base de datos esté inicializada antes de cargar los alimentos.
     *
     * @param categoria Nombre de la categoría o null para buscar en toda la base de datos
     */
    fun searchFood(categoria: String?) {
        viewModelScope.launch {
            val result =
                categoria?.let{
                    getFoodsByCategoryUseCase.invokeSuspend(it)
                }?: getAllFoodsUseCase.invokeSuspend()

            if (result.isNotEmpty()) {
                logger.d("✅ Alimentos cargados: ${result.size} alimentos encontrados")
                _uiState.update {
                    it.copy(foodList = result.toSubMenuMapper())
                }
            } else {
                _uiState.update {
                    it.copy(foodList = emptyList())
                }
            }
        }
    }

    /**
     * Busca alimentos por texto de búsqueda.
     * Si searchQuery está vacío, muestra todos los alimentos (de la categoría si se especifica).
     * Si categoria es null, busca en toda la base de datos.
     * Si categoria tiene valor, busca solo dentro de esa categoría.
     *
     * @param searchQuery Texto de búsqueda
     * @param categoria Nombre de la categoría o null para buscar en toda la base de datos
     */
    fun searchByText(searchQuery: String, categoria: String? = ARGUMENTS.All) {
        viewModelScope.launch {
            val result =
                if (searchQuery.isBlank()) {
                // Si el texto está vacío, mostrar todos los alimentos (de la categoría si se especifica)
                if (categoria == ARGUMENTS.All) {
                    getAllFoodsUseCase.invokeSuspend()
                } else {
                    getFoodsByCategoryUseCase.invokeSuspend(categoria!!)
                }
            } else if (categoria!!.contains(ARGUMENTS.All)) {
                // Buscar en toda la base de datos
                searchFoodsUseCase.invokeSuspend(searchQuery)
            } else {
                // Buscar dentro de una categoría específica
                // Primero obtenemos todos los alimentos de la categoría
                val categoryFoods = getFoodsByCategoryUseCase.invokeSuspend(categoria)
                // Luego filtramos por el texto de búsqueda (case-insensitive)
                categoryFoods.filter {
                    it.food.contains(searchQuery, ignoreCase = true)
                }
            }

            _uiState.update {
                it.copy(foodList = result.toSubMenuMapper())
            }
        }
    }
}