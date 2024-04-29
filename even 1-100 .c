#include<stdio.h>
int main1(){
    int i=2;

    for(i=2; i <= 100; i+=2){
        printf("%d\n",i);
    }

return 0;
}




#include <stdio.h>

    int main()
    {
        float fahrenheit, celsius;

        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * 5 / 9;

        printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

        return 0;
    }


