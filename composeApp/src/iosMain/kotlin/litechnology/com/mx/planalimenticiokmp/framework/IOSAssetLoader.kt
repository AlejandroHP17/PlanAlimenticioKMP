package litechnology.com.mx.planalimenticiokmp.framework

import kotlinx.cinterop.ExperimentalForeignApi
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.withContext
import litechnology.com.mx.planalimenticiokmp.AssetLoader
import platform.Foundation.NSBundle
import platform.Foundation.NSString
import platform.Foundation.NSUTF8StringEncoding
import platform.Foundation.lastPathComponent
import platform.Foundation.stringWithContentsOfURL

class IOSAssetLoader : AssetLoader {
    @OptIn(ExperimentalForeignApi::class)
    override suspend fun loadJsonFile(path: String): String? = withContext(Dispatchers.Default) {
        try {
            val fileName = (path as NSString).lastPathComponent // "alimentos_smae.json"
            val fileURL =
                NSBundle.Companion.mainBundle.URLForResource(fileName, withExtension = null)
                    ?: return@withContext null
            NSString.Companion.stringWithContentsOfURL(
                fileURL,
                encoding = NSUTF8StringEncoding,
                error = null
            ) as String
        } catch (e: Exception) {
            println("Error leyendo JSON en iOS: ${e.message}")
            null
        }
    }
}