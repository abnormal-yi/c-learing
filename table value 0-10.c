/*program that calculates the squares and cubes of the numbers from 0 to 
10 and uses tabs to print the table value:*/


#include <stdio.h>

int main(){
//variabes

int i;

    printf("number\t square\t cube\t\n");
for(i=0; i<=10; i++){

    printf("%d\t %d\t %d\t\n",i,i*i,i*i*i);
}
    return 0;
}


