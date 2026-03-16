package litechnology.com.mx.planalimenticiokmp.presentation.model.event

/**
 * Representa el estado de la UI compartido entre diferentes pantallas.
 *
 * @property controlToast El estado para la visualización de mensajes toast.
 * @author Pelkidev
 * @version 1.0.0
 */
data class ShareUiState(
    val controlToast: ToastUiState = ToastUiState("s", false),
)
