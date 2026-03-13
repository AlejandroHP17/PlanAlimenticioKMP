package litechnology.com.mx.planalimenticiokmp

interface AssetLoader {
    suspend fun loadJsonFile(path: String): String?
}