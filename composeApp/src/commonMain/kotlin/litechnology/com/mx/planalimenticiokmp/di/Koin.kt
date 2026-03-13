package litechnology.com.mx.planalimenticiokmp.di

import org.koin.core.context.startKoin
import org.koin.core.module.Module
import org.koin.dsl.KoinAppDeclaration

fun initKoin(appDeclaration: KoinAppDeclaration = {}) =
    startKoin {
        appDeclaration()
        modules(
            platformDatabaseModule,
            databaseModule,
            useCaseModule,
            homeModule
        )
    }

// Usado por iOS
fun initKoin() = initKoin {}
