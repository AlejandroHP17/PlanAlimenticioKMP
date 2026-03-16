package litechnology.com.mx.planalimenticiokmp.core.navigation

import androidx.compose.runtime.Composable
import litechnology.com.mx.planalimenticiokmp.ui.menu.MenuScreen
import litechnology.com.mx.planalimenticiokmp.ui.search.SearchScreen
import litechnology.com.mx.planalimenticiokmp.ui.subMenu.SubMenuScreen
import litechnology.com.mx.planalimenticiokmp.util.AppRoutes.Main
import moe.tlaster.precompose.navigation.NavHost
import moe.tlaster.precompose.navigation.Navigator
import moe.tlaster.precompose.navigation.path

@Composable
fun AppNavHost (navigator: Navigator){

    NavHost(
        navigator = navigator,
        initialRoute = Main.MENU
    ){
        scene(route = "/menu"){
            MenuScreen(
                onNavigateToMain = {navigator.navigate("/subMenu/$it") },
                onNavigateToSearch = { navigator.navigate(Main.buildSearchRoute(null))}
            )
        }
        scene(route = Main.SUB_MENU) { backStackEntry ->
            SubMenuScreen(backStackEntry.path<String>("category")!!){
                navigator.navigate("/search/$it")
            }
        }

        scene(route = Main.SEARCH) { backStackEntry ->
            SearchScreen(backStackEntry.path<String>("category"))
        }
    }
}