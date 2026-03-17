package liftechnology.com.mx.planalimenticiokmp

import androidx.compose.ui.window.ComposeUIViewController
import liftechnology.com.mx.planalimenticiokmp.core.di.databaseModule
import liftechnology.com.mx.planalimenticiokmp.core.di.viewModelModule
import liftechnology.com.mx.planalimenticiokmp.core.di.platformDatabaseModule
import liftechnology.com.mx.planalimenticiokmp.core.di.useCaseModule
import liftechnology.com.mx.planalimenticiokmp.ui.App
import org.koin.core.context.startKoin


fun MainViewController() =
    ComposeUIViewController{
        App()
    }


fun initKoin() {
    startKoin {
        modules(
            platformDatabaseModule,
            databaseModule,
            useCaseModule,
            viewModelModule
        )
    }  .koin
}

