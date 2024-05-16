#include <stdio.h>
#include <math.h>

#include <math.h>

int main()
{
    float length, width, radius;
    float rectArea, rectPerimeter, circleArea, circleCircumference;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate rectangle area and perimeter
    rectArea = length * width;
    rectPerimeter = 2 * (length + width);

    // Calculate circle area and circumference
    circleArea = M_PI * radius * radius;
    circleCircumference = 2 * M_PI * radius;

    printf("\nRectangle Area: %.2f\n", rectArea);
    printf("Rectangle Perimeter: %.2f\n", rectPerimeter);
    printf("Circle Area: %.2f\n", circleArea);
    printf("Circle Circumference: %.2f\n", circleCircumference);

    return 0;
}

