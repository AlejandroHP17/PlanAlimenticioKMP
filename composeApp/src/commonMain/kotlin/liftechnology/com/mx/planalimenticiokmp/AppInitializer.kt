package liftechnology.com.mx.planalimenticiokmp

import co.touchlab.kermit.Logger
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.SupervisorJob
import kotlinx.coroutines.launch
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.initialize.InitializeDataBaseUseCase
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.initialize.InitializeResult

object AppInitializer {

    lateinit var initializeDatabaseUseCase: InitializeDataBaseUseCase

    fun init(initializeDBUseCase: InitializeDataBaseUseCase) {
        initializeDatabaseUseCase = initializeDBUseCase
        launchDatabaseInitialization()
    }

    private fun launchDatabaseInitialization() {
        val scope = createApplicationScope()
        scope.launch {
            try {
                when (val result = initializeDatabaseUseCase()) {
                    is InitializeResult.Success -> Logger.d { "✅ Base de datos inicializada correctamente" }
                    is InitializeResult.AlreadyInitialized -> Logger.i { "ℹ️ Base de datos ya estaba inicializada" }
                    is InitializeResult.Error -> Logger.e { "❌ Error inicializando base de datos: ${result.message}" }
                }
            } catch (e: Exception) {
                Logger.e(e) { "❌ Excepción al inicializar la base de datos" }
            }
        }
    }
}

fun createApplicationScope(): CoroutineScope =
    CoroutineScope(SupervisorJob() + Dispatchers.Default)