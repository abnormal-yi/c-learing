#include <stdio.h>

int main()
{
    float basic_salary, gross_salary, hra, da;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    if (basic_salary < 1500)
    {
        hra = 0.1 * basic_salary;
        da = 0.9 * basic_salary;
    }
    else
    {
        hra = 500;
        da = 0.98 * basic_salary;
    }

    gross_salary = basic_salary + hra + da;

    printf("The gross salary of the employee is: Tsh %.2f\n", gross_salary);

    return 0;
}
