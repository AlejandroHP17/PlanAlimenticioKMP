package liftechnology.com.mx.planalimenticiokmp.ui.components.common

import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Assistant
import androidx.compose.material.icons.filled.AutoDelete
import androidx.compose.material.icons.filled.Search
import androidx.compose.material3.Icon
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.focus.FocusRequester
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import liftechnology.com.mx.planalimenticiokmp.core.util.ModelRegex
import liftechnology.com.mx.planalimenticiokmp.ui.components.input.TextFieldGeneric
import liftechnology.com.mx.planalimenticiokmp.ui.theme.colorWhite
import liftechnology.com.mx.planalimenticiokmp.ui.theme.onPrimaryContainerLight

@Composable
fun HeaderScreen(
    title: String,
    isSearch: Boolean = true,
    onWordSearch: (String) -> Unit,
) {
    val focusRequester = remember { FocusRequester() }
    var showSearch by remember {mutableStateOf(false)}

    Column {
        Row(modifier = Modifier
            .fillMaxWidth()
            .background(onPrimaryContainerLight),
        verticalAlignment = Alignment.CenterVertically
        ) {
        Text(
            text = title.uppercase(),
            fontSize = 18.sp,
            color = colorWhite,
            modifier = Modifier
                .align(Alignment.CenterVertically)
                .padding(8.dp)
                .weight(1f)
        )

        if (isSearch)
            Icon(
                imageVector = if(showSearch)Icons.Filled.AutoDelete
                else Icons.Filled.Search,
                contentDescription = "Search",
                tint = colorWhite,
                modifier = Modifier
                    .padding(horizontal = 8.dp)
                    .clickable { showSearch = !showSearch }
            )
        }

        if(showSearch){
            Spacer(modifier = Modifier.padding(8.dp))

            TextFieldGeneric(
                regex = ModelRegex.SIMPLE_TEXT,
                onBoxChanged = { onWordSearch(it)},
                focusRequester = focusRequester
            )
        }else{
            onWordSearch("")
        }
    }
}

@Preview(showBackground = true)
@Composable
fun HeaderScreenPreview() {
    HeaderScreen(
        title = "Categorías",
        isSearch = true,
        onWordSearch = {}
    )
}