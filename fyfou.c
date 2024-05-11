#include<stdio.h>
int main(){
    int num;
    int num1;

    printf("enter any year");
    scanf("%d", &num);


    num1=num%2;
     
    if(num1 == 0){
        printf("the year %d is leap", num);
    }
    else{
        printf("the year %d is not leap", num);
    }

return 0;
}