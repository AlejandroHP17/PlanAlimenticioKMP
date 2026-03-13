@file:OptIn(kotlinx.cinterop.ExperimentalForeignApi::class)

package litechnology.com.mx.planalimenticiokmp.data.local.database

import platform.Foundation.NSBundle
import platform.Foundation.NSString
import platform.Foundation.stringWithContentsOfFile
import platform.Foundation.NSUTF8StringEncoding

actual class AssetLoader {
    actual suspend fun loadJsonFile(fileName: String): String? {
        return try {
            val bundle = NSBundle.mainBundle
            val path = bundle.pathForResource(fileName.removeSuffix(".json"), "json")
            if (path != null) {
                NSString.stringWithContentsOfFile(path, encoding = NSUTF8StringEncoding, error = null)
            } else {
                null
            }
        } catch (e: Exception) {
            null
        }
    }
}
