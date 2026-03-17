package liftechnology.com.mx.planalimenticiokmp.framework

import android.app.Application
import liftechnology.com.mx.planalimenticiokmp.core.di.databaseModule
import liftechnology.com.mx.planalimenticiokmp.core.di.viewModelModule
import liftechnology.com.mx.planalimenticiokmp.core.di.platformDatabaseModule
import liftechnology.com.mx.planalimenticiokmp.core.di.useCaseModule
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
                viewModelModule
            )
        }
    }
}