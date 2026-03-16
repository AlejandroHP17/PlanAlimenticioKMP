package litechnology.com.mx.planalimenticiokmp

import androidx.compose.ui.window.ComposeUIViewController
import litechnology.com.mx.planalimenticiokmp.core.di.databaseModule
import litechnology.com.mx.planalimenticiokmp.core.di.homeModule
import litechnology.com.mx.planalimenticiokmp.core.di.platformDatabaseModule
import litechnology.com.mx.planalimenticiokmp.core.di.useCaseModule
import litechnology.com.mx.planalimenticiokmp.core.navigation.App
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
            homeModule
        )
    }  .koin
}

