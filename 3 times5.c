
#include <stdio.h>

// Function to perform multiplication of 3 times 5 and return the product
int take() {
    return 3 * 5;
}

int main() {
    // Call the function to perform multiplication and get the result
    int product = take();

    // Print out the result
    printf("The product of 3 times 5 is: %d\n", product);

    return 0;
}