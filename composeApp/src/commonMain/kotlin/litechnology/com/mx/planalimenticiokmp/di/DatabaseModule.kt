package litechnology.com.mx.planalimenticiokmp.di

import litechnology.com.mx.planalimenticiokmp.data.local.database.AssetLoader
import litechnology.com.mx.planalimenticiokmp.data.local.database.DatabaseInitializer
import litechnology.com.mx.planalimenticiokmp.data.local.database.FoodDatabase
import litechnology.com.mx.planalimenticiokmp.data.local.database.FoodDatabaseFactory
import litechnology.com.mx.planalimenticiokmp.data.local.driver.DatabaseDriverFactory
import litechnology.com.mx.planalimenticiokmp.data.repositoryImpl.CategoryRepositoryImpl
import litechnology.com.mx.planalimenticiokmp.data.repositoryImpl.FoodRepositoryImpl
import litechnology.com.mx.planalimenticiokmp.domain.repository.CategoryRepository
import litechnology.com.mx.planalimenticiokmp.domain.repository.FoodRepository
import org.koin.core.module.Module
import org.koin.dsl.module

val databaseModule = module {
    // Database Factory
    single { FoodDatabaseFactory(get<DatabaseDriverFactory>()) }
    
    // Database
    single { get<FoodDatabaseFactory>().createDatabase() }
    
    // Repositories (deben estar antes de DatabaseInitializer)
    single<FoodRepository> { FoodRepositoryImpl(get<FoodDatabase>()) }
    single<CategoryRepository> { CategoryRepositoryImpl(get<FoodDatabase>()) }
    
    // Database Initializer (depende de AssetLoader y FoodRepository)
    single { DatabaseInitializer(get<AssetLoader>(), get<FoodRepository>()) }
}

// Módulo de plataforma (se define en androidMain/iosMain)
expect val platformDatabaseModule: Module
