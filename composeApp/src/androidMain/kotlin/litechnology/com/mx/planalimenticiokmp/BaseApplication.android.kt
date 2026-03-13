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
    override fun onCreate() {
        super.onCreate()

        // Inicializa Koin
        startKoin {
            androidContext(this@BaseApplication)
            androidLogger()
            modules(
                platformDatabaseModule,
                databaseModule,
                useCaseModule,
                homeModule
            )
        }

        // Inicialización multiplataforma
        val initializeUseCase: InitializeDataBaseUseCase = get()
        AppInitializer.init(initializeUseCase)
    }
}