@file:OptIn(kotlinx.cinterop.ExperimentalForeignApi::class)

package liftechnology.com.mx.planalimenticiokmp.data.local.database

import platform.Foundation.NSBundle
import platform.Foundation.NSString
import platform.Foundation.stringWithContentsOfFile
import platform.Foundation.NSUTF8StringEncoding

actual class AssetLoader {
    actual suspend fun loadJsonFile(fileName: String): String? {
        return try {
            val bundle = NSBundle.mainBundle
            
            // fileName is "files/alimentos_smae.json"
            val name = fileName.split("/").last()
            val nameNoExt = name.substringBeforeLast(".")
            val ext = name.substringAfterLast(".")
            
            // 1. Try finding it with the exact path
            var path = bundle.pathForResource(fileName, null)
            
            // 2. Try in the compose-resources directory (Standard for KMP Resources)
            if (path == null) {
                val directory = "compose-resources/" + fileName.substringBeforeLast("/", "")
                path = bundle.pathForResource(nameNoExt, ext, directory)
            }
            
            // 3. Try finding by name and extension anywhere in the bundle
            if (path == null) {
                path = bundle.pathForResource(nameNoExt, ext)
            }

            if (path != null) {
                NSString.stringWithContentsOfFile(path, encoding = NSUTF8StringEncoding, error = null)
            } else {
                println("AssetLoader: Resource not found: $fileName")
                null
            }
        } catch (e: Exception) {
            println("AssetLoader: Error loading $fileName: ${e.message}")
            null
        }
    }
}
