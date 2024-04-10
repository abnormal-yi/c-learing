#include <stdio.h>

int main() {
    // Explanation of the program
    printf("This program calculates the product of three variables (X, Y, Z).\n");

    // Variables
    int x, y, z, product;

    // Collecting input from the user
    printf("Enter the value of X: ");
    if (scanf("%d", &x) != 1) {
        printf("Please enter a valid integer for X.\n");
        return 1; // Exit with an error code
    }

    printf("Enter the value of Y: ");
    if (scanf("%d", &y) != 1) {
        printf("Please enter a valid integer for Y.\n");
        return 1; // Exit with an error code
    }

    printf("Enter the value of Z: ");
    if (scanf("%d", &z) != 1) {
        printf("Please enter a valid integer for Z.\n");
        return 1; // Exit with an error code
    }

    // Calculating the product
    product = x * y * z;

    // Displaying the result
    printf("The product is: %d\n", product);

    return 0;
}
