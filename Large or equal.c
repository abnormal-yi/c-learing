#include <stdio.h>

//function
int max(int numb1,int numb2){
    int result;
    if (numb1 > numb2){
     result = numb1;
    }
    else{
        result = numb2;
    }
}
int main() {
    int numb1;
    int numb2;

  //  ask usr to enter
    printf("Hello enter first number\n");
  while (scanf("%d",&numb1)!=1){
     while (getchar() != '\n');
        printf("Invalid input. Please enter an integer: ");
    }

 printf(" enter second number\n");
  while (scanf("%d",&numb2)!=1){
     while (getchar() != '\n');
        printf("Invalid input. Please enter an integer: ");
    }

if (numb1==numb2)
{
   printf("they are equal");
}
else{
    printf("the large is is %d",max(numb1,numb2));
}
    return 0;
}

