#include <stdio.h>

int main() {
    // Variables
    float length, width, area, perimeter;

    // Input length and width from user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Output the results
    printf("Area of the rectangle: %.2f square units\n", area);
    printf("Perimeter of the rectangle: %.2f units\n", perimeter);

    return 0;
}
