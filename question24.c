#include <stdio.h>

int main() {
    int marry, john, luca, youngest;

    printf("Enter Mary's age: ");
    scanf("%d", &marry);

    printf("Enter John's age: ");
    scanf("%d", &john);

    printf("Enter Luca's age: ");
    scanf("%d", &luca);

    if (marry <= john && marry <= luca) {
        youngest = marry;
    } else if (john <= marry && john <= luca) {
        youngest = john;
    } else {
        youngest = luca;
    }
//not complete this stupid condition i dont know where 😐😐😐😒😒
  //   if (youngest == marry)
    printf("The youngest is %d years old.\n", youngest);

    return 0;
}
