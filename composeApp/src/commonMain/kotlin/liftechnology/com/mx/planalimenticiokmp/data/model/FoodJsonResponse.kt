@file:OptIn(kotlinx.serialization.ExperimentalSerializationApi::class)

package liftechnology.com.mx.planalimenticiokmp.data.model

import kotlinx.serialization.KSerializer
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.descriptors.PrimitiveKind
import kotlinx.serialization.descriptors.PrimitiveSerialDescriptor
import kotlinx.serialization.descriptors.SerialDescriptor
import kotlinx.serialization.encoding.Decoder
import kotlinx.serialization.encoding.Encoder
import kotlinx.serialization.json.JsonDecoder
import kotlinx.serialization.json.JsonPrimitive
import kotlinx.serialization.json.floatOrNull
import liftechnology.com.mx.planalimenticiokmp.domain.model.Food
import liftechnology.com.mx.planalimenticiokmp.util.ModelRegex.PRIMITIVE_TEXT

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

/**
 * Modelo de respuesta para parsear el JSON de alimentos del SMAE.
 * Mapea los campos en español del JSON a las propiedades de la entidad.
 *
 * @author pelkidev
 */
@Serializable
data class FoodJsonResponse(
    @SerialName("Alimento")
    val alimento: String,

    @SerialName("Cantidad sugerida")
    @Serializable(with = SafeDoubleSerializer::class)
    val cantidadSugerida: Double? = null,

    @SerialName("Unidad")
    val unidad: String,

    @SerialName("Peso bruto redondeado (g)")
    @Serializable(with = SafeDoubleSerializer::class)
    val pesoBrutoRedondeado: Double? = null,

    @SerialName("Peso neto (g)")
    @Serializable(with = SafeDoubleSerializer::class)
    val pesoNeto: Double? = null,

    @SerialName("Energía (Kcal)")
    @Serializable(with = SafeDoubleSerializer::class)
    val energiaKcal: Double? = null,

    @SerialName("Proteína (g)")
    @Serializable(with = SafeFloatSerializer::class)
    val proteina: Float? = null,

    @SerialName("Lípidos (g)")
    @Serializable(with = SafeFloatSerializer::class)
    val lipidos: Float? = null,

    @SerialName("Hidratos de carbono (g)")
    @Serializable(with = SafeFloatSerializer::class)
    val hidratosCarbono: Float? = null,

    @SerialName("Fibra (g)")
    @Serializable(with = SafeFloatSerializer::class)
    val fibra: Float? = null,

    @SerialName("Vitamina A (µg RE)")
    @Serializable(with = SafeFloatSerializer::class)
    val vitaminaA: Float? = null,

    @SerialName("Acido Ascórbico (mg)")
    @Serializable(with = SafeFloatSerializer::class)
    val acidoAscorbico: Float? = null,

    @SerialName("Ácido Fólico (µg)")
    @Serializable(with = SafeFloatSerializer::class)
    val acidoFolico: Float? = null,

    @SerialName("Hierro NO HEM (mg)")
    @Serializable(with = SafeFloatSerializer::class)
    val hierroNoHem: Float? = null,

    @SerialName("Potasio (mg)")
    @Serializable(with = SafeFloatSerializer::class)
    val potasio: Float? = null,

    @SerialName("Índice glicémico")
    @Serializable(with = SafeDoubleSerializer::class)
    val indiceGlicemico: Double? = null,

    @SerialName("Carga glicémica")
    @Serializable(with = SafeDoubleSerializer::class)
    val cargaGlicemica: Double? = null,

    @SerialName("Categoria")
    val categoria: String,

    @SerialName("idCategory")
    @Serializable(with = SafeDoubleSerializer::class)
    val idCategory: Double? = null,

    @SerialName("Azúcar por equivalente (g)")
    @Serializable(with = SafeFloatSerializer::class)
    val azucarPorEquivalente: Float? = null,

    @SerialName("Calcio (mg)")
    @Serializable(with = SafeFloatSerializer::class)
    val calcio: Float? = null,

    @SerialName("Hierro (mg)")
    @Serializable(with = SafeFloatSerializer::class)
    val hierro: Float? = null,

    @SerialName("sodio (mg)")
    @Serializable(with = SafeFloatSerializer::class)
    val sodio: Float? = null,

    @SerialName("Colesterol (mg)")
    @Serializable(with = SafeFloatSerializer::class)
    val colesterol: Float? = null,

    @SerialName("Selenio (mg)")
    @Serializable(with = SafeFloatSerializer::class)
    val selenioMg: Float? = null,

    @SerialName("Fósforo (mg)")
    @Serializable(with = SafeFloatSerializer::class)
    val fosforo: Float? = null,

    @SerialName("AG Saturados (g)")
    @Serializable(with = SafeFloatSerializer::class)
    val agSaturados: Float? = null,

    @SerialName("AG\nMonoinsaturado s (g)")
    @Serializable(with = SafeFloatSerializer::class)
    val agMonoinsaturados: Float? = null,

    @SerialName("AG\nPolinsaturados (g)")
    @Serializable(with = SafeFloatSerializer::class)
    val agPolinsaturados: Float? = null
) {
    /**
     * Convierte el modelo JSON a Food (modelo de dominio).
     */
    fun toFood(): Food {
        return Food(
            id = 0, // Se auto-genera
            category = categoria,
            idCategory = idCategory?.toInt() ?: 0,
            food = alimento,
            suggestedQuantity = cantidadSugerida?.toFloat() ?: 0f,
            unit = unidad,
            netWeightG = pesoNeto?.toString() ?: "0",
            roundedGrossWeightG = pesoBrutoRedondeado?.toInt() ?: 0,
            energyKcal = energiaKcal?.toInt() ?: 0,
            proteinG = proteina,
            lipidsG = lipidos,
            carbohydratesG = hidratosCarbono,
            fiverG = fibra,
            vitaminAUgRe = vitaminaA,
            ascorbicAcidMg = acidoAscorbico,
            folicAcidUg = acidoFolico,
            ironNoHemMg = hierroNoHem,
            potassiumMg = potasio,
            hypoglycemicIndex = indiceGlicemico?.toFloat(),
            hypoglycemicLoad = cargaGlicemica?.toFloat(),
            sugarPerEquivalentG = azucarPorEquivalente,
            calciumMg = calcio,
            ironMg = hierro,
            sodiumMg = sodio,
            cholesterolMg = colesterol,
            seleniumMg = selenioMg,
            phosphorusMg = fosforo,
            agSaturatedG = agSaturados,
            agMonounsaturatedG = agMonoinsaturados,
            agPolyunsaturatedG = agPolinsaturados
        )
    }
}
