package liftechnology.com.mx.planalimenticiokmp.data.local.serializer

import kotlinx.serialization.KSerializer
import kotlinx.serialization.descriptors.PrimitiveKind
import kotlinx.serialization.descriptors.PrimitiveSerialDescriptor
import kotlinx.serialization.descriptors.SerialDescriptor
import kotlinx.serialization.encoding.Decoder
import kotlinx.serialization.encoding.Encoder
import kotlinx.serialization.json.JsonDecoder
import kotlinx.serialization.json.JsonPrimitive
import kotlinx.serialization.json.floatOrNull
import liftechnology.com.mx.planalimenticiokmp.core.util.ModelRegex.PRIMITIVE_TEXT

/**
 * Deserializador seguro que maneja valores numéricos como String o Number,
 * limpiando formatos inválidos (como "1.4." o múltiples puntos).
 */
object SafeFloatSerializer : KSerializer<Float?> {
    override val descriptor: SerialDescriptor = PrimitiveSerialDescriptor("SafeFloat", PrimitiveKind.FLOAT)

    override fun serialize(encoder: Encoder, value: Float?) {
        if (value == null) {
            encoder.encodeNull()
        } else {
            encoder.encodeFloat(value)
        }
    }

    override fun deserialize(decoder: Decoder): Float? {
        val input = decoder as? JsonDecoder ?: return decoder.decodeFloat()
        val element = input.decodeJsonElement()
        if (element is JsonPrimitive) {
            if (element.content == "null" || element.content.isEmpty()) return null

            return element.floatOrNull ?: run {
                val str = element.content.trim()
                // Limpiar: remover caracteres no numéricos excepto punto y signo negativo
                var cleaned = str.replace(PRIMITIVE_TEXT, "")
                // Si termina con punto, removerlo
                cleaned = cleaned.trimEnd('.')
                // Si tiene múltiples puntos consecutivos o separados, tomar solo el primero
                val dotIndex = cleaned.indexOf('.')
                if (dotIndex >= 0) {
                    val beforeDot = cleaned.take(dotIndex)
                    val afterDot = cleaned.substring(dotIndex + 1).replace(".", "")
                    cleaned = "$beforeDot.$afterDot"
                }
                cleaned.toFloatOrNull()
            }
        }
        return null
    }
}

object SafeDoubleSerializer : KSerializer<Double?> {
    override val descriptor: SerialDescriptor = PrimitiveSerialDescriptor("SafeDouble", PrimitiveKind.DOUBLE)

    override fun serialize(encoder: Encoder, value: Double?) {
        if (value == null) {
            encoder.encodeNull()
        } else {
            encoder.encodeDouble(value)
        }
    }

    override fun deserialize(decoder: Decoder): Double? {
        val input = decoder as? JsonDecoder ?: return decoder.decodeDouble()
        val element = input.decodeJsonElement()
        if (element is JsonPrimitive) {
            if (element.content == "null" || element.content.isEmpty()) return null

            val doubleValue = element.content.toDoubleOrNull()
            if (doubleValue != null) return doubleValue

            val str = element.content.trim()
            // Limpiar: remover caracteres no numéricos excepto punto y signo negativo
            var cleaned = str.replace(PRIMITIVE_TEXT, "")
            // Si termina con punto, removerlo
            cleaned = cleaned.trimEnd('.')
            // Si tiene múltiples puntos consecutivos o separados, tomar solo el primero
            val dotIndex = cleaned.indexOf('.')
            if (dotIndex >= 0) {
                val beforeDot = cleaned.take(dotIndex)
                val afterDot = cleaned.substring(dotIndex + 1).replace(".", "")
                cleaned = "$beforeDot.$afterDot"
            }
            return cleaned.toDoubleOrNull()
        }
        return null
    }
}