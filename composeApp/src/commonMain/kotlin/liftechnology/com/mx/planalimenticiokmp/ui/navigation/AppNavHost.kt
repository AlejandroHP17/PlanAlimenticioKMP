package liftechnology.com.mx.planalimenticiokmp.ui.navigation

import androidx.compose.runtime.Composable
import liftechnology.com.mx.planalimenticiokmp.ui.menu.MenuScreen
import liftechnology.com.mx.planalimenticiokmp.ui.search.SearchScreen
import liftechnology.com.mx.planalimenticiokmp.ui.subMenu.SubMenuScreen
import liftechnology.com.mx.planalimenticiokmp.ui.navigation.AppRoutes.NAV
import liftechnology.com.mx.planalimenticiokmp.ui.navigation.AppRoutes.ARGUMENTS
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
                onNavigateToSearch = { navigator.navigate(NAV.buildSearchRoute(null))}
            )
        }
        scene(route = NAV.SUB_MENU) { backStackEntry ->
            SubMenuScreen(backStackEntry.path<String>(ARGUMENTS.CATEGORY)!!){
                navigator.navigate("/search/$it")
            }
        }

        scene(route = NAV.SEARCH) { backStackEntry ->
            SearchScreen(backStackEntry.path<String>(ARGUMENTS.CATEGORY))
        }
    }
}