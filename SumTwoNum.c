#include <stdio.h>

int main() {
    // Explain the purpose of the program
    printf("This program calculates the sum of two numbers.\n");

    // Variables
    int num1, num2, sum;

    // Collecting numbers from the user
    printf("Enter the first number: ");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1; // Exit the program with an error code
    }

    printf("Enter the second number: ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1; // Exit the program with an error code
    }

    // Calculation
    sum = num1 + num2;

    // Display the result
    printf("The result is: %d\n", sum);

    return 0;
}
