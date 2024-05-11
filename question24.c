#include<stdio.h>
int main(){

int marry, john, luca;

printf("enter marry's age");
scanf("%d", &marry);

printf("enter john's age");
scanf("%d", &john);

printf("enter luca's age");
scanf("%d", &luca);

if(marry > john){
    printf("john is youngest");
}

else if(marry > luca){
    printf("luca is youngest");

}
      else{
        printf("luca is oldest");
      }


    return 0;
}