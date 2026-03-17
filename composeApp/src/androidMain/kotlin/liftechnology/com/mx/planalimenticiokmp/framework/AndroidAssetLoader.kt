package liftechnology.com.mx.planalimenticiokmp.framework

import android.content.Context
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.withContext
import liftechnology.com.mx.planalimenticiokmp.core.AssetLoader

class AndroidAssetLoader(private val context: Context) : AssetLoader {
    override suspend fun loadJsonFile(path: String): String? = withContext(Dispatchers.IO) {
        try {
            // Android usa assets → path relativo al directorio assets
            context.assets.open(path).bufferedReader().use { it.readText() }
        } catch (e: Exception) {
            e.printStackTrace()
            null
        }
    }
}