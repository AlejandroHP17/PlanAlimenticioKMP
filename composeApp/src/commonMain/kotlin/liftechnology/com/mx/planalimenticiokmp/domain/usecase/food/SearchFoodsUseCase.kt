package liftechnology.com.mx.planalimenticiokmp.domain.usecase.food

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flowOn
import liftechnology.com.mx.planalimenticiokmp.domain.model.Food
import liftechnology.com.mx.planalimenticiokmp.domain.repository.FoodRepository
import liftechnology.com.mx.planalimenticiokmp.util.AppDispatchers

/**
 * Caso de uso para buscar alimentos por nombre.
 * Realiza una búsqueda parcial (case-insensitive) en los nombres de los alimentos.
 *
 * @param repository Repositorio de alimentos
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
class SearchFoodsUseCase(
    private val repository: FoodRepository,
    private val dispatcher: AppDispatchers
) {
    /**
     * Ejecuta el caso de uso y retorna un Flow con los alimentos que coinciden con la búsqueda.
     *
     * @param searchQuery Término de búsqueda (ej: "manzana", "pollo", etc.)
     * @return Flow que emite una lista de alimentos que coinciden con la búsqueda
     */
    operator fun invoke(searchQuery: String): Flow<List<Food>> {
        return repository.searchFoods(searchQuery)
            .flowOn(dispatcher.io)
    }

    /**
     * Ejecuta el caso de uso y retorna una lista suspendida con los alimentos que coinciden.
     *
     * @param searchQuery Término de búsqueda
     * @return Lista de alimentos que coinciden con la búsqueda
     */
    suspend fun invokeSuspend(searchQuery: String): List<Food> {
        return repository.searchFoodsSuspend(searchQuery)
    }
}

