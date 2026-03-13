package litechnology.com.mx.planalimenticiokmp.domain.usecase.food

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flowOn
import litechnology.com.mx.planalimenticiokmp.domain.model.Food
import litechnology.com.mx.planalimenticiokmp.domain.repository.FoodRepository
import litechnology.com.mx.planalimenticiokmp.util.AppDispatchers

/**
 * Caso de uso para obtener alimentos por categoría.
 * Obtiene todos los alimentos de una categoría específica del Sistema Mexicano de Alimentos y Equivalentes.
 *
 * @param repository Repositorio de alimentos
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
class GetFoodsByCategoryUseCase(
    private val repository: FoodRepository,
    private val dispatcher: AppDispatchers
) {
    /**
     * Ejecuta el caso de uso y retorna un Flow con los alimentos de la categoría.
     *
     * @param category Nombre de la categoría (ej: "VERDURAS", "FRUTAS", "CEREALES SIN GRASA", etc.)
     * @return Flow que emite una lista de alimentos de la categoría especificada
     */
    operator fun invoke(category: String): Flow<List<Food>> {
        return repository.getFoodsByCategory(category)
            .flowOn(dispatcher.io)
    }

    /**
     * Ejecuta el caso de uso y retorna una lista suspendida con los alimentos de la categoría.
     *
     * @param category Nombre de la categoría
     * @return Lista de alimentos de la categoría especificada
     */
    suspend fun invokeSuspend(category: String): List<Food> {
        return repository.getFoodsByCategorySuspend(category)
    }
}