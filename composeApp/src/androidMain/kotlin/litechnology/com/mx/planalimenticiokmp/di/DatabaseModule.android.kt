package litechnology.com.mx.planalimenticiokmp.di

import litechnology.com.mx.planalimenticiokmp.data.local.database.AssetLoader
import litechnology.com.mx.planalimenticiokmp.data.local.driver.DatabaseDriverFactory
import org.koin.android.ext.koin.androidContext
import org.koin.core.module.Module
import org.koin.dsl.module

actual val platformDatabaseModule: Module = module {
    // Database Driver Factory para Android
    single<DatabaseDriverFactory> {
        DatabaseDriverFactory(androidContext())
    }
    
    // Asset Loader para Android
    single<AssetLoader> {
        AssetLoader(androidContext())
    }
}
