package liftechnology.com.mx.planalimenticiokmp.util

import kotlinx.coroutines.CoroutineDispatcher

expect object AppDispatchers {
    val default: CoroutineDispatcher
    val io: CoroutineDispatcher
}
