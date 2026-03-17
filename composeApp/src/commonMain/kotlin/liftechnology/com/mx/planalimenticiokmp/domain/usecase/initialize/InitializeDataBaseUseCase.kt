package liftechnology.com.mx.planalimenticiokmp.domain.usecase.initialize

import co.touchlab.kermit.Logger
import liftechnology.com.mx.planalimenticiokmp.data.local.database.DatabaseInitializer

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
    private val databaseInitializer: DatabaseInitializer
) {
    suspend operator fun invoke(): InitializeResult {
        return try {
            val initialized = databaseInitializer.initializeIfNeeded()
            if (initialized) InitializeResult.Success
            else InitializeResult.AlreadyInitialized
        } catch (e: Exception) {
            InitializeResult.Error(e.message ?: "Error desconocido")
        }
    }
}

sealed class InitializeResult {
    object Success : InitializeResult()
    object AlreadyInitialized : InitializeResult()
    class Error(val message: String) : InitializeResult()
}
