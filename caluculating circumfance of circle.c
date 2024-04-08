#include <stdio.h>

int main() {

    //decraration of variable 
    const double PI = 3.14159;//%f %c %lf %d
    double radius;
    double circumference;
    double area;

    printf("Enter radius: ");//output
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCircumference of circle is: %lf\n", circumference);
    printf("Area of circle is: %lf\n", area);

    return 0;
}
