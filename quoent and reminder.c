#include <stdio.h>

int main() {
    // Explanation of the program
    printf("This program calculates the sum, product, difference, quotient, and remainder of two numbers.\n");

    // Variables
    int num1, num2, sum, product, difference, quotient, remainder;

    // Collecting input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculations
    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;

    // Check if the second number is zero to prevent division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
        remainder = num1 % num2;
    } else {
        printf("Cannot divide by zero.\n");
        return 1; // Exit with an error code
    }

    // Displaying the results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Difference: %d\n", difference);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
