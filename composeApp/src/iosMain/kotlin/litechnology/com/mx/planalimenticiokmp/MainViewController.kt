package litechnology.com.mx.planalimenticiokmp

import androidx.compose.ui.window.ComposeUIViewController
import litechnology.com.mx.planalimenticiokmp.ui.menu.MenuScreen

fun MainViewController() = ComposeUIViewController { MenuScreen(
    onNavigateToMain = { },
    onNavigateToSearch = { }
) }