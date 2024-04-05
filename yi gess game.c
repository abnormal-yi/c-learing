#include <stdio.h>
#include <ctype.h>
#include <time.h>

//constants 
const min=1;
const max=6;
const minmoney=100;
const maxmoney=100000;
const minwithdarw=200;
const maxwithdarw=10000;



int main(){

//variables
double balance;
int unit;
char Qlevels[] [100]={"A: EASY      ODD 1.50   @100  total game you will play",
                     "B: MEDIUM    ODD.4.50   @ 300 total game you will play",
                     "C: DIFICULT  ODD 9.50   @ 500 total game you will play"};

char   option[] [3]={"A","B","C"}      

char   answers[] [3]={"A","B","C"}   

int luckynum,i;
double  ebbalance;
double mbbalance;
double dbbalance;


printf("*******************YI********************LUCKY*******GAME*************************");
printf("HELLO YOUR WELCOME ");
printf("**********************************************************************************");
printf("TO PLAY  FIRST STAKE YOUR AMOUNT     MINMUM 100 ,MAX100000: ");
scanf(%lf, &balance);

//check that amount of money
if (if 100 <= balance <= 100000)
{
 printf("Congrat You have succefull deposit %lf",balance);

}
else{
    print("STAKE (MINMUM 100 MAXMIM 10000)")
}

//Levels

print("***************************************************************************************************");
print("balance %lf",balance);
print(choose LEVELS\n);
ebbalance=balance/100;
mbbalance=balance/300;
dbbalance=balance/500;
print("%s\n", Qlevels  );

//     jinsi  ya display mulitpo choise

scanf(%s,&levels);

levels=touppercase(levels);

switch (levels)
{
case EASY:
printf("this you have to guess  between  three  numbers 1 up to 3   eg 2 Goodluck");
printf("ENTER YOUR LUCKY NUMBER:");
scanf(%d,luckynum);

//check number
if(1<=luckynum>=3){
    // Seed the random number generator with the current time 
     srand(time(NULL)); 

} for (i = 0; i < luckynums; i++) { 

    int luckynums = (rand() % 3) + 1; // Generates a random number between 1 and 3

    printf("lucky number %d: %d\n", i+1, luckynum); 

  } 

}
else{

}
    break;

default:
    break;
}

    return=0;
}