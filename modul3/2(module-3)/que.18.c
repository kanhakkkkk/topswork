#include <stdio.h>

int main() {
    float cost_price, selling_price, profit_loss;

    printf("Enter the cost price of the item: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price of the item: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price) {
        profit_loss = selling_price - cost_price;
        printf("Profit: %.2f\n", profit_loss);
    } else if (selling_price < cost_price) {
        profit_loss = cost_price - selling_price;
        printf("Loss: %.2f\n", profit_loss);
    } else {
        printf("No profit, no loss. The selling price is equal to the cost price.\n");
    }

    return 0;
}
