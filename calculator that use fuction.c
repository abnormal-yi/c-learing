/*
Write C program that accepts input of two numbers. The program contains 
function addition for performing addition of two numbers; function subtraction for 
performing subtraction of the second number from the first number; function 
multiplication for multiplication of the two numbers and function division to divide 
two numbers. The program should also give the user an option of performing one 
of the operations above and display the result on the screen.
*/
#include <stdio.h>
// function

int sum(int num1, int num2) {

    int sum;
    sum = num1 + num2;

}
int substraction(int num1, int num2) {
    int subs;
    subs = num1 - num2;

}
int multply(int num1, int num2) {
    int mlti;
    mlti = num1 * num2 ;

}
int divide(int num1, int num2) {
    int divi;
     if (num2 != 0){
       divi= num1 / num2;
       }
    else {
        printf("Error: Division by zero\n");

}
}

int main() {
    //variables
   int  num1;
   int  num2;
   char op;


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

    printf("Enter the operator: +  - *  / \n");
    if(scanf(" %c", &op) != 1) {
        printf("Invalid input. Please enter a valid operator.\n");
        return 1; // Exit the program with an error code
    }

    switch (op) {
        case '+':
            printf("%d\n", sum(num1, num2));
            break;
        case '-':
            printf("%d\n", substraction(num1, num2));
            break;
        case '*':
            printf("%d\n",multply(num1, num2));
            break;
        case '/':
            printf("%d\n", divide(num1, num2));
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}

