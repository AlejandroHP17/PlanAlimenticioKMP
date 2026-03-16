package litechnology.com.mx.planalimenticiokmp.core.di

import litechnology.com.mx.planalimenticiokmp.data.local.database.AssetLoader
import litechnology.com.mx.planalimenticiokmp.data.local.driver.DatabaseDriverFactory
import org.koin.core.module.Module
import org.koin.dsl.module

actual val platformDatabaseModule: Module = module {
    single { DatabaseDriverFactory() }
    single { AssetLoader() }
}
