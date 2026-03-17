package liftechnology.com.mx.planalimenticiokmp.ui.components.cards

import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Card
import androidx.compose.material3.CardDefaults
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import liftechnology.com.mx.planalimenticiokmp.ui.theme.margin8dp
import liftechnology.com.mx.planalimenticiokmp.ui.theme.sizeTextButton
import liftechnology.com.mx.planalimenticiokmp.ui.components.common.getCategoryColor
import liftechnology.com.mx.planalimenticiokmp.presentation.model.ui.ModelItemCard

@Composable
fun CategoryCard(
    item: ModelItemCard,
    onClick: (String) -> Unit
) {
    val categoryColor = getCategoryColor(item.idCategory)
    
    Card(
        modifier = Modifier
            .fillMaxWidth()
            .clickable { onClick(item.title) },
        shape = RoundedCornerShape(
            bottomStart = 8.dp,
            topEnd = 8.dp,
            bottomEnd = 8.dp,
            topStart = 8.dp
        ),
        colors = CardDefaults.cardColors(containerColor = categoryColor),
    ) {
        Row(
            modifier = Modifier
                .fillMaxWidth()
                .padding(8.dp),
            verticalAlignment = Alignment.CenterVertically
        ) {
            Text(
                text = (item.idCard).toString(),
                fontSize = sizeTextButton,
                modifier = Modifier
                    .padding(horizontal = margin8dp)
            )
            Text(
                text = (item.title),
                fontSize = sizeTextButton,
                modifier = Modifier
                    .padding(horizontal = margin8dp)
                    .weight(1f)
            )
        }
    }
}

@Preview(showBackground = true)
@Composable
private fun CategoryCardView() {
    val data = ModelItemCard(
        idCard = 1,
        idCategory = 17,
        title = "Verduras"
    )
    CategoryCard(
        item = data,
        onClick = {}
    )
}