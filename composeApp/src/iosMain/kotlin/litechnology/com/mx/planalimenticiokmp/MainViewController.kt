package litechnology.com.mx.planalimenticiokmp

import androidx.compose.ui.window.ComposeUIViewController
import litechnology.com.mx.planalimenticiokmp.di.databaseModule
import litechnology.com.mx.planalimenticiokmp.di.homeModule
import litechnology.com.mx.planalimenticiokmp.di.platformDatabaseModule
import litechnology.com.mx.planalimenticiokmp.di.useCaseModule
import litechnology.com.mx.planalimenticiokmp.ui.menu.MenuScreen
import org.koin.core.context.startKoin


fun MainViewController() =
    ComposeUIViewController{
        MenuScreen(
            onNavigateToMain = { },
            onNavigateToSearch = { }
        )
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

