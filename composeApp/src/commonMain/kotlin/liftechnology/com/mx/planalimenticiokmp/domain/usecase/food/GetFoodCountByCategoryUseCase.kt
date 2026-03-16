package liftechnology.com.mx.planalimenticiokmp.domain.usecase.food

import kotlinx.coroutines.withContext
import liftechnology.com.mx.planalimenticiokmp.domain.repository.FoodRepository
import liftechnology.com.mx.planalimenticiokmp.util.AppDispatchers

/**
 * Caso de uso para obtener el conteo de alimentos por categoría.
 * Útil para mostrar estadísticas o validar si una categoría tiene alimentos.
 *
 * @param repository Repositorio de alimentos
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
class GetFoodCountByCategoryUseCase(
    private val repository: FoodRepository,
    private val dispatcher: AppDispatchers
) {
    /**
     * Ejecuta el caso de uso y retorna el número de alimentos en la categoría.
     *
     * @param category Nombre de la categoría
     * @return Número de alimentos en la categoría especificada
     */
    suspend operator fun invoke(category: String): Int {
        return withContext(dispatcher.io) {
            repository.getFoodCountByCategory(category)
        }
    }
}

