package litechnology.com.mx.planalimenticiokmp

import android.app.Application
import android.util.Log
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.SupervisorJob
import kotlinx.coroutines.launch
import litechnology.com.mx.planalimenticiokmp.di.databaseModule
import litechnology.com.mx.planalimenticiokmp.di.homeModule
import litechnology.com.mx.planalimenticiokmp.di.platformDatabaseModule
import litechnology.com.mx.planalimenticiokmp.di.useCaseModule
import litechnology.com.mx.planalimenticiokmp.domain.usecase.initialize.InitializeDataBaseUseCase
import litechnology.com.mx.planalimenticiokmp.domain.usecase.initialize.InitializeResult
import org.koin.android.ext.android.get
import org.koin.android.ext.koin.androidContext
import org.koin.android.ext.koin.androidLogger
import org.koin.core.context.startKoin

/**
 * @author pelkidev
 * @date 20/08/2023
 * */
class BaseApplication : Application() {

    private val applicationScope = CoroutineScope(SupervisorJob() + Dispatchers.Default)

    override fun onCreate() {
        super.onCreate()

        /* Inicializa la DI Koin */
        startKoin {
            androidLogger()
            androidContext(this@BaseApplication)
            modules(
                platformDatabaseModule, // Módulo de plataforma (Android/iOS)
                databaseModule,         // Módulo de base de datos común
                useCaseModule,          // Módulo de Use Cases
                homeModule              // Módulo de ViewModels (app)
            )
        }

        // Inicializar la base de datos con los datos del SMAE
        initializeDatabase()
    }

    /**
     * Inicializa la base de datos con los datos del Sistema Mexicano de Alimentos y Equivalentes.
     * Se ejecuta en background para no bloquear el hilo principal.
     */
    private fun initializeDatabase() {
        applicationScope.launch {
            try {
                val initializeUseCase: InitializeDataBaseUseCase = get()
                when (val result = initializeUseCase()) {
                    is InitializeResult.Success -> {
                        Log.d("BaseApplication", "✅ Base de datos inicializada correctamente con datos del SMAE")
                    }
                    is InitializeResult.AlreadyInitialized -> {
                        Log.d("BaseApplication", "ℹ️ Base de datos ya estaba inicializada")
                    }
                    is InitializeResult.Error -> {
                        Log.e("BaseApplication", "❌ Error al inicializar la base de datos: ${result.message}")
                    }
                }
            } catch (e: Exception) {
                Log.e("BaseApplication", "❌ Excepción al inicializar la base de datos", e)
            }
        }
    }
}