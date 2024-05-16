#include <stdio.h>

int main()
{
    int c, d, exchnage;

    printf("Enter two numbers: ");
    scanf("%d %d", &c, &d);

    // Interchange the values of c and d
    exchnage = c;
    c = d;
    d = exchnage;

    printf("After interchanging, c = %d and d = %d\n", c, d);

    return 0;
}
