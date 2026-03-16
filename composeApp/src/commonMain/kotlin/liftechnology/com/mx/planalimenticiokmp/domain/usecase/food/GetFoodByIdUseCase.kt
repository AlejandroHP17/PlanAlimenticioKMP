package liftechnology.com.mx.planalimenticiokmp.domain.usecase.food

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flowOn
import liftechnology.com.mx.planalimenticiokmp.domain.model.Food
import liftechnology.com.mx.planalimenticiokmp.domain.repository.FoodRepository
import liftechnology.com.mx.planalimenticiokmp.util.AppDispatchers

/**
 * Caso de uso para obtener un alimento específico por su ID.
 *
 * @param repository Repositorio de alimentos
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
class GetFoodByIdUseCase(
    private val repository: FoodRepository,
    private val dispatcher: AppDispatchers
) {
    /**
     * Ejecuta el caso de uso y retorna un Flow con el alimento encontrado.
     *
     * @param id ID del alimento
     * @return Flow que emite el alimento encontrado o null si no existe
     */
    operator fun invoke(id: Long): Flow<Food?> {
        return repository.getFoodById(id)
            .flowOn(dispatcher.io)
    }

    /**
     * Ejecuta el caso de uso y retorna el alimento encontrado.
     *
     * @param id ID del alimento
     * @return El alimento encontrado o null si no existe
     */
    suspend fun invokeSuspend(id: Long): Food? {
        return repository.getFoodByIdSuspend(id)
    }
}

