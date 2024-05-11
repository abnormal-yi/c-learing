#include <stdio.h>

int main (){
int joshy,koba,king, youngest_age;

printf("Enter the age of joshy: ");
scanf("%d",&joshy);

printf("Enter the age of Koba: ");
scanf("%d",&koba);

printf("Enter the age of King: ");
scanf("%d",&king);

//how t find the youngest age of them 
youngest_age=joshy;

if (koba< youngest_age){
    youngest_age=koba;
}

if(king<youngest_age){
youngest_age=king;
}
           
//print the youngest age
if (youngest_age == joshy){
    printf("joshy is youngest. \n");
} 
else if (youngest_age == koba){
    printf("koba is the youngest. \n");
}
else{
    printf("king is the youngest");
}






    return 0;
}