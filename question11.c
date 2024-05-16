#include <stdio.h>

int main()
{
    int num1, num2, num3, sum, product, smallest, largest;
    float average;

    printf("Enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    product = num1 * num2 * num3;
    average = (float)(num1 + num2 + num3) / 3;

    smallest = num1;
    if (num2 < smallest)
        smallest = num2;
    if (num3 < smallest)
        smallest = num3;

    largest = num1;
    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    printf("Product = %d\n", product);
    printf("Smallest = %d\n", smallest);
    printf("Largest = %d\n", largest);

    return 0;
}
