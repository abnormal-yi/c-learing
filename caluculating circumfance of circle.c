#include <stdio.h>

int main() {
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCircumference of circle is: %lf\n", circumference);
    printf("Area of circle is: %lf\n", area);

    return 0;
}
