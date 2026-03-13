package litechnology.com.mx.planalimenticiokmp.util

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers

actual object AppDispatchers {
    actual val default: CoroutineDispatcher = Dispatchers.Default
    actual val io: CoroutineDispatcher = Dispatchers.Default // iOS usa Default para operaciones I/O
}