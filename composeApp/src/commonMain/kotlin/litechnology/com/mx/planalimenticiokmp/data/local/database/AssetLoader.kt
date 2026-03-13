package litechnology.com.mx.planalimenticiokmp.data.local.database

/**
 * Interfaz para cargar archivos de assets de forma multiplataforma.
 */
expect class AssetLoader {
    suspend fun loadJsonFile(fileName: String): String?
}
