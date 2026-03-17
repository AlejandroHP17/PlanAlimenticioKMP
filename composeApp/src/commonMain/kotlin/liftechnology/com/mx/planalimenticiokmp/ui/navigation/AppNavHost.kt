package liftechnology.com.mx.planalimenticiokmp.ui.navigation

import androidx.compose.runtime.Composable
import liftechnology.com.mx.planalimenticiokmp.ui.menu.MenuScreen
import liftechnology.com.mx.planalimenticiokmp.ui.navigation.AppRoutes.ARGUMENTS
import liftechnology.com.mx.planalimenticiokmp.ui.navigation.AppRoutes.NAV
import liftechnology.com.mx.planalimenticiokmp.ui.subMenu.SubMenuScreen
import moe.tlaster.precompose.navigation.NavHost
import moe.tlaster.precompose.navigation.Navigator
import moe.tlaster.precompose.navigation.path

@Composable
fun AppNavHost (navigator: Navigator){

    NavHost(
        navigator = navigator,
        initialRoute = NAV.MENU
    ){
        scene(route = NAV.MENU){
            MenuScreen(
                onNavigateToSubMenu = {navigator.navigate("/subMenu/$it") },
            )
        }
        scene(route = NAV.SUB_MENU) { backStackEntry ->
            SubMenuScreen(backStackEntry.path<String>(ARGUMENTS.CATEGORY)!!)
        }
    }
}