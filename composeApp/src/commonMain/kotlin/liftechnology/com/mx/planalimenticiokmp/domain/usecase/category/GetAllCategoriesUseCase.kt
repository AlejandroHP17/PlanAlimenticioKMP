package liftechnology.com.mx.planalimenticiokmp.domain.usecase.category

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flowOn
import liftechnology.com.mx.planalimenticiokmp.domain.repository.CategoryRepository
import liftechnology.com.mx.planalimenticiokmp.core.util.AppDispatchers

/**
 * Caso de uso para obtener todas las categorías de alimentos disponibles.
 * Retorna las categorías del Sistema Mexicano de Alimentos y Equivalentes.
 *
 * @param repository Repositorio de categorías
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
class GetAllCategoriesUseCase(
    private val repository: CategoryRepository,
    private val dispatcher: AppDispatchers
) {
    /**
     * Ejecuta el caso de uso y retorna un Flow con todas las categorías.
     *
     * @return Flow que emite una lista de nombres de categorías
     */
    operator fun invoke(): Flow<List<String>> {
        return repository.getAllCategories()
            .flowOn(dispatcher.io)
    }

    /**
     * Ejecuta el caso de uso y retorna una lista suspendida con todas las categorías.
     *
     * @return Lista de nombres de categorías
     */
    suspend fun invokeSuspend(): List<String> {
        return repository.getAllCategoriesSuspend()
    }
}