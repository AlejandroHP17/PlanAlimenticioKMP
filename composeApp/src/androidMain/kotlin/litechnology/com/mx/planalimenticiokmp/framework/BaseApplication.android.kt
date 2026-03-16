package litechnology.com.mx.planalimenticiokmp.framework

import android.app.Application
import litechnology.com.mx.planalimenticiokmp.AppInitializer
import litechnology.com.mx.planalimenticiokmp.core.di.databaseModule
import litechnology.com.mx.planalimenticiokmp.core.di.homeModule
import litechnology.com.mx.planalimenticiokmp.core.di.platformDatabaseModule
import litechnology.com.mx.planalimenticiokmp.core.di.useCaseModule
import litechnology.com.mx.planalimenticiokmp.domain.usecase.initialize.InitializeDataBaseUseCase
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