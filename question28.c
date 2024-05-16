#include <stdio.h>

int main()
{
    int quantity;
    float price, total_expenses;

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    printf("Enter the price per item: ");
    scanf("%f", &price);

    if (quantity > 1000)
    {
        total_expenses = quantity * price * 0.9; // Apply 10% discount
    }
    else
    {
        total_expenses = quantity * price;
    }

    printf("Total expenses: Tsh %.2f\n", total_expenses);

    return 0;
}
