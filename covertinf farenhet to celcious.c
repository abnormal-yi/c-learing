#include <stdio.h>
#include <ctype.h>

int main(){
 
 char unit;
 float temp;


 printf("is temprature in F OR C");
scanf(%c, &unit);

unit = touppercase(unit);

if (unit=='F')
{
    printf("enter farenheight");
    scanf(%f,&temp)

    temp =  ((temp-32)*5) /9;
    printf("the temp in farenhight is %.1f",temp);
}

else if (unit == 'C')
{
      printf("enter farenheight");
    scanf(%f,&temp)

    temp =  (temp * 9/5)=32;
    printf("the temp in farenhight is %.1f",temp);
}

else
{
    printf("\n%c is not vlid unit of meausurement",unit);
}


    return=0;
}