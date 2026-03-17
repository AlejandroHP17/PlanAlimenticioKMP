package liftechnology.com.mx.planalimenticiokmp.core.util

import kotlinx.coroutines.CoroutineDispatcher

expect object AppDispatchers {
    val default: CoroutineDispatcher
    val io: CoroutineDispatcher
}
