package litechnology.com.mx.planalimenticiokmp.util

object ModelRegex {
    val PRIMITIVE_TEXT = Regex("[^0-9.\\-]")
    val SIMPLE_TEXT = Regex("[^a-zA-Z0-9\\s]")
}
