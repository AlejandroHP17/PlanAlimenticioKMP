package liftechnology.com.mx.planalimenticiokmp.domain.usecase.food

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flowOn
import liftechnology.com.mx.planalimenticiokmp.domain.model.Food
import liftechnology.com.mx.planalimenticiokmp.domain.repository.FoodRepository
import liftechnology.com.mx.planalimenticiokmp.core.util.AppDispatchers

/**
 * Caso de uso para obtener todos los alimentos almacenados.
 * Retorna todos los alimentos del Sistema Mexicano de Alimentos y Equivalentes.
 *
 * @param repository Repositorio de alimentos
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
class GetAllFoodsUseCase(
    private val repository: FoodRepository,
    private val dispatcher: AppDispatchers
) {
    /**
     * Ejecuta el caso de uso y retorna un Flow con todos los alimentos.
     *
     * @return Flow que emite una lista de todos los alimentos
     */
    operator fun invoke(): Flow<List<Food>> {
        return repository.getAllFoods()
            .flowOn(dispatcher.io)
    }

    /**
     * Ejecuta el caso de uso y retorna una lista suspendida con todos los alimentos.
     *
     * @return Lista de todos los alimentos
     */
    suspend fun invokeSuspend(): List<Food> {
        return repository.getAllFoodsSuspend()
    }
}

