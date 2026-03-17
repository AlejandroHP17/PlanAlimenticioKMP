package liftechnology.com.mx.planalimenticiokmp.core

interface AssetLoader {
    suspend fun loadJsonFile(path: String): String?
}