package liftechnology.com.mx.planalimenticiokmp.data.local.database

import android.content.Context
import android.util.Log
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.withContext
import java.io.IOException
import java.io.InputStream

actual class AssetLoader(private val context: Context) {
    actual suspend fun loadJsonFile(fileName: String): String? = withContext(Dispatchers.IO) {
        try {
            val inputStream: InputStream = context.assets.open(fileName)
            val size: Int = inputStream.available()
            val buffer = ByteArray(size)
            inputStream.read(buffer)
            inputStream.close()
            String(buffer, Charsets.UTF_8)
        } catch (ex: IOException) {
            Log.e("AssetLoader", "Error al leer archivo desde assets: $fileName", ex)
            null
        }
    }
}