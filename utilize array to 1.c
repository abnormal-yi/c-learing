/*
Write a C program that initializes all 10 array elements to 1
*/

#include <stdio.h>

int main() {
    // Define an array with 10 elements
    int array[] ={1,2,3,4,5,6,7,8,9,0};
    int i;

    for (i = 0; i < 10; i++) {
        array[i] = 1;
 }

    
    printf("Array after initialization:\n");
    for ( i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
