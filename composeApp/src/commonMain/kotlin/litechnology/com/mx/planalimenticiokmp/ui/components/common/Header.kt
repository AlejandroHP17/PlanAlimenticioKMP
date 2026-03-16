package litechnology.com.mx.planalimenticiokmp.ui.components.common

import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Search
import androidx.compose.material3.Icon
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import litechnology.com.mx.planalimenticiokmp.core.theme.colorWhite
import litechnology.com.mx.planalimenticiokmp.core.theme.onPrimaryContainerLight

@Composable
fun HeaderScreen(
    title: String,
    isSearch: Boolean = true,
    onNavigateToSearch: () -> Unit
) {
    Row(
        modifier = Modifier
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
                imageVector = Icons.Filled.Search,
                contentDescription = "Search",
                tint = colorWhite,
                modifier = Modifier
                    .padding(horizontal = 8.dp)
                    .clickable { onNavigateToSearch() }
            )
    }
}