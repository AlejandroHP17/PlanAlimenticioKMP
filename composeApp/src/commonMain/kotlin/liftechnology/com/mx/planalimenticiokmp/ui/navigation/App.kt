package liftechnology.com.mx.planalimenticiokmp.ui.navigation

import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import liftechnology.com.mx.planalimenticiokmp.presentation.viewmodel.shared.SharedViewModel
import liftechnology.com.mx.planalimenticiokmp.ui.theme.AppTheme
import liftechnology.com.mx.planalimenticiokmp.ui.components.ShowCustomAnimated
import moe.tlaster.precompose.PreComposeApp
import moe.tlaster.precompose.navigation.rememberNavigator
import org.koin.compose.viewmodel.koinViewModel

@Composable
fun App(){
    PreComposeApp{
        val navigationController = rememberNavigator()
        val sharedViewModel: SharedViewModel = koinViewModel()
        val uiState by sharedViewModel.uiState.collectAsStateWithLifecycle()
        AppTheme{
            AppNavHost(navigationController)
            // Toast global que se muestra por encima de toda la navegación
            ShowCustomAnimated(
                message = uiState.controlToast.messageToast,
                isVisible = uiState.controlToast.showToast,
                onDismiss = {
                    sharedViewModel.hideToast()
                }
            )
        }
    }
}