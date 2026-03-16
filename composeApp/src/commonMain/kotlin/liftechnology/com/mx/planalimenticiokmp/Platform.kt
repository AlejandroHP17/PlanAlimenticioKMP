package liftechnology.com.mx.planalimenticiokmp

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform