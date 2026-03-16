package liftechnology.com.mx.planalimenticiokmp.presentation.viewmodel.shared

import androidx.lifecycle.ViewModel
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import liftechnology.com.mx.planalimenticiokmp.presentation.model.event.ShareUiState
import liftechnology.com.mx.planalimenticiokmp.presentation.model.event.ToastUiState
import liftechnology.com.mx.planalimenticiokmp.presentation.model.event.TypeToastUi

/**
 * ViewModel compartido para gestionar el estado común de la UI entre diferentes pantallas.
 * Centraliza la gestión de toasts globales que se muestran por encima de toda la navegación.
 *
 * @author Pelkidev
 * @version 1.0.0
 */
class SharedViewModel() : ViewModel(){
    private val _uiState = MutableStateFlow(ShareUiState())
    /** El estado de la UI para componentes compartidos. */
    val uiState: StateFlow<ShareUiState> = _uiState.asStateFlow()

    /**
     * Modifica el estado del toast.
     *
     * @param controlToast El nuevo estado del toast.
     */
    fun modifyShowToast(controlToast: ToastUiState) {
        _uiState.update {
            it.copy(
                controlToast = ToastUiState(
                    messageToast = controlToast.messageToast,
                    showToast = controlToast.showToast,
                    typeToast = controlToast.typeToast
                )
            )
        }
    }

    /**
     * Muestra un toast con el mensaje y tipo especificados.
     * Método helper centralizado para mostrar toasts desde cualquier lugar.
     *
     * @param messageToast El recurso del string del mensaje a mostrar.
     * @param typeToast El tipo de toast (SUCCESS, ERROR, WARNING, INFORMATIVE).
     */
    fun showToast(
        messageToast: String,
        typeToast: TypeToastUi = TypeToastUi.SUCCESS
    ) {
        _uiState.update {
            it.copy(
                controlToast = ToastUiState(
                    messageToast = messageToast,
                    showToast = true,
                    typeToast = typeToast
                )
            )
        }
    }

    /**
     * Oculta el toast actual.
     */
    fun hideToast() {
        _uiState.update {
            it.copy(
                controlToast = it.controlToast.copy(
                    showToast = false
                )
            )
        }
    }
}