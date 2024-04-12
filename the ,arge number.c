#include<stdio.h>

int main() {
    // variables
    int num1;
    int num2;

    printf("program to check if These numbers are equal.\n");

    // to prompt a user to enter values
    printf("Enter the first number: ");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    // another method 
    /* it allowed the program to keep prompting the user until they entered valid input, 
     printf("Enter the second number: ");
    while (scanf("%d", &num2) != 1) {
        // Clear input buffer
        while (getchar() != '\n');
        printf("Invalid input. Please enter an integer: ");
    }*/

    printf("Enter the second number: ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Check if the numbers are equal
    if (num1 == num2) {
        printf("These numbers are equal.\n");
    } else {
        // Print the larger number using the ternary operator
        printf("%d is larger.\n", (num1 > num2) ? num1 : num2);
    }
/*} else {
        // If not equal, print the larger number
        if (num1 > num2) {
            printf("%d is larger.\n", num1);
        } else {
            printf("%d is larger.\n", num2);
        }
    }
*/
    return 0;
}
