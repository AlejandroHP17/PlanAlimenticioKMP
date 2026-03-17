package liftechnology.com.mx.planalimenticiokmp.ui.components

import androidx.compose.animation.AnimatedVisibility
import androidx.compose.animation.fadeIn
import androidx.compose.animation.fadeOut
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.statusBarsPadding
import androidx.compose.foundation.layout.wrapContentHeight
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.compose.ui.zIndex
import kotlinx.coroutines.delay
import liftechnology.com.mx.planalimenticiokmp.presentation.model.ToastType
import liftechnology.com.mx.planalimenticiokmp.ui.theme.colorErrorToast
import liftechnology.com.mx.planalimenticiokmp.ui.theme.colorInformativeToast
import liftechnology.com.mx.planalimenticiokmp.ui.theme.colorSuccessToast
import liftechnology.com.mx.planalimenticiokmp.ui.theme.colorWarningToast

/**
 * Componente que muestra un toast personalizado animado.
 * Se muestra por encima de toda la navegación y no interrumpe el flujo de la app.
 *
 * @param message El mensaje a mostrar.
 * @param isVisible Si el toast es visible.
 * @param durationMillis La duración en milisegundos para mostrar el toast.
 * @param toastType El tipo de toast (SUCCESS, ERROR, WARNING, INFORMATIVE).
 * @param onDismiss Lambda que se invoca cuando el toast se oculta.
 */
@Composable
fun ShowCustomAnimated(
    message: String,
    isVisible: Boolean,
    durationMillis: Long = 3000,
    toastType: ToastType = ToastType.SUCCESS,
    onDismiss: () -> Unit,
) {
    LaunchedEffect(isVisible) {
        if (isVisible) {
            delay(durationMillis)
            onDismiss()
        }
    }

    // Box externo con zIndex alto para asegurar que esté por encima de todo
    Box(
        modifier = Modifier
            .fillMaxWidth()
            .zIndex(1000f) // zIndex alto para estar por encima de la navegación
    ) {
        AnimatedVisibility(
            visible = isVisible,
            enter = fadeIn(),
            exit = fadeOut(),
            modifier = Modifier
                .fillMaxWidth()
                .padding(16.dp)
                .wrapContentHeight()
                .statusBarsPadding()
                .align(Alignment.TopCenter)
        ) {
            Box(
                modifier = Modifier.background(
                    when (toastType) {
                        ToastType.SUCCESS -> colorSuccessToast
                        ToastType.ERROR -> colorErrorToast
                        ToastType.WARNING -> colorWarningToast
                        ToastType.INFORMATIVE -> colorInformativeToast
                    },
                    RoundedCornerShape(8.dp)
                )
                    .padding(horizontal = 16.dp, vertical = 12.dp),
                contentAlignment = Alignment.Center
            ) {
                Text(message, color = Color.White)
            }
        }
    }
}