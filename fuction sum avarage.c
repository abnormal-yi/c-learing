/*
Write a function that receives 5 integers, calculates the sum and average of 
these numbers. Call this function from main() and print the results.
*/
#include <stdio.h>

void receiver(int num1, int num2, int num3, int num4, int num5, int *sum, float *average) {
    *sum = num1 + num2 + num3 + num4 + num5;
    *average = *sum / 5.0; // Calculate average as float
}

int main() {
    int num1, num2, num3, num4, num5;
    int sum;
    float average;

    printf("Program that calculates sum and average\n");

    // Input loop for the first number
    printf("Enter the first number: ");
    while (scanf("%d", &num1) != 1) {
        while (getchar() != '\n'); // Clear input buffer
        printf("Invalid input. Please enter a valid number: ");
    }

    // Input loop for the second number
    printf("Enter the second number: ");
    while (scanf("%d", &num2) != 1) {
        while (getchar() != '\n'); // Clear input buffer
        printf("Invalid input. Please enter a valid number: ");
    }

    // Input loop for the third number
    printf("Enter the third number: ");
    while (scanf("%d", &num3) != 1) {
        while (getchar() != '\n'); // Clear input buffer
        printf("Invalid input. Please enter a valid number: ");
    }

    // Input loop for the fourth number
    printf("Enter the fourth number: ");
    while (scanf("%d", &num4) != 1) {
        while (getchar() != '\n'); // Clear input buffer
        printf("Invalid input. Please enter a valid number: ");
    }

    // Input loop for the fifth number
    printf("Enter the fifth number: ");
    while (scanf("%d", &num5) != 1) {
        while (getchar() != '\n'); // Clear input buffer
        printf("Invalid input. Please enter a valid number: ");
    }

    // Calculate sum and average
    receiver(num1, num2, num3, num4, num5, &sum, &average);

    // Print sum and average
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
