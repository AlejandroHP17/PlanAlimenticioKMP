package litechnology.com.mx.planalimenticiokmp.domain.usecase.initialize

import kotlinx.coroutines.withContext
import litechnology.com.mx.planalimenticiokmp.data.local.database.DatabaseInitializer
import litechnology.com.mx.planalimenticiokmp.util.AppDispatchers

/**
 * Caso de uso para inicializar la base de datos con los datos del SMAE.
 * Se ejecuta la primera vez que se abre la aplicación para poblar la base de datos
 * con los alimentos del Sistema Mexicano de Alimentos y Equivalentes.
 *
 * @param databaseInitializer Inicializador de la base de datos
 * @param dispatcher Dispatcher de corrutinas
 *
 * @author pelkidev
 */
class InitializeDataBaseUseCase(
    private val databaseInitializer: DatabaseInitializer,
    private val dispatcher: AppDispatchers
) {
    /**
     * Ejecuta la inicialización de la base de datos si es necesaria.
     *
     * @return Resultado de la inicialización:
     *         - InitializeResult.Success si se inicializó correctamente
     *         - InitializeResult.AlreadyInitialized si ya estaba inicializada
     *         - InitializeResult.Error si hubo un error
     */
    suspend operator fun invoke(): InitializeResult = withContext(dispatcher.io) {
        try {
            val wasInitialized = databaseInitializer.initializeIfNeeded()

            if (wasInitialized) {
                InitializeResult.Success
            } else {
                InitializeResult.AlreadyInitialized
            }
        } catch (e: Exception) {
            e.printStackTrace()
            InitializeResult.Error(e.message ?: "Error desconocido")
        }
    }
}

/**
 * Resultado de la inicialización de la base de datos.
 */
sealed class InitializeResult {
    /**
     * La base de datos se inicializó correctamente.
     */
    object Success : InitializeResult()

    /**
     * La base de datos ya estaba inicializada.
     */
    object AlreadyInitialized : InitializeResult()

    /**
     * Ocurrió un error durante la inicialización.
     *
     * @param message Mensaje de error
     */
    data class Error(val message: String) : InitializeResult()
}

