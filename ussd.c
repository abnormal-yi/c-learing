#include <stdio.h>
#include <ctype.h>


int main() {
    // variable
    int unit;

    printf("Enter 1 to proceed: ");
    scanf("%d", &unit);

    if (unit == 1) {
        printf("CHAGUA KIFURUSHI\n");
        printf("1. bundle\n");
        printf("2. sms\n");
        printf("3. dakika\n");
        printf("4. comb\n");
        printf("5. rushi\n");
   int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("1. siku\n");
                printf("2. wiki\n");
                printf("3. mwezi\n");
                printf("Enter your choice: ");
                scanf("%d", &unit);

                if (unit == 1) {
                    printf("1. 500 300mb\n");
                    printf("2. 1000 600mb\n");
                    printf("3. 1500 1.5gb\n");
                    printf("enter your choice");
                    scanf("%d",&unit);
                                    if (unit == 1) {
                                    printf("hongera  umepokea 300mb\n");

                                } else if (unit == 2) {
                                    printf("hongera umepokea 600mb\n");

                                } else if (unit == 3) {

                                    printf("hongera umepokea 1.5gb\n");
                                } else {
                                    printf("Invalid choice.\n");
                                }

                } else if (unit == 2) {
                    printf("1. 3000 2GB\n");
                    printf("2. 5000 3GB\n");
                    printf("3. 1000 6GB\n");
                } else if (unit == 3) {
                    printf("1. 10000 24GB\n");
                    printf("2. 20000 30GB\n");
                    printf("3. 50000 66GB\n");
                } else {
                    printf("Invalid choice.\n");
                }
                break;
            case 2:
        printf("1. siku\n");
        printf("2. wiki \n");
        printf("3. mwezi\n");
        printf("You chose bundle.\n");
          scanf("%d", &unit);
                if (unit == 1) {
                    printf("1. 500 300mb\n");
                    printf("2. 1000 600mb\n");
                    printf("3. 1500 1.5gb\n");
                } else if (unit == 2) {
                    printf("1. 3000 2GB\n");
                    printf("2. 5000 3GB\n");
                    printf("3. 1000 6GB\n");
                } else if (unit == 3) {
                    printf("1. 10000 24GB\n");
                    printf("2. 20000 30GB\n");
                    printf("3. 50000 66GB\n");
                } else {
                    printf("Invalid choice.\n");
                }
                break;
            case 3:
        printf("1. siku\n");
        printf("2. wiki \n");
        printf("3. mwezi\n");
        printf("You chose bundle.\n");
          scanf("%d", &unit);
                if (unit == 1) {
                    printf("1. 500 300mb\n");
                    printf("2. 1000 600mb\n");
                    printf("3. 1500 1.5gb\n");
                } else if (unit == 2) {
                    printf("1. 3000 2GB\n");
                    printf("2. 5000 3GB\n");
                    printf("3. 1000 6GB\n");
                } else if (unit == 3) {
                    printf("1. 10000 24GB\n");
                    printf("2. 20000 30GB\n");
                    printf("3. 50000 66GB\n");
                } else {
                    printf("Invalid choice.\n");
                }
                break;
            case 4:
        printf("1. siku\n");
        printf("2. wiki \n");
        printf("3. mwezi\n");
        printf("You chose bundle.\n");
          scanf("%d", &unit);
                if (unit == 1) {
                    printf("1. 500 300mb\n");
                    printf("2. 1000 600mb\n");
                    printf("3. 1500 1.5gb\n");
                } else if (unit == 2) {
                    printf("1. 3000 2GB\n");
                    printf("2. 5000 3GB\n");
                    printf("3. 1000 6GB\n");
                } else if (unit == 3) {
                    printf("1. 10000 24GB\n");
                    printf("2. 20000 30GB\n");
                    printf("3. 50000 66GB\n");
                } else {
                    printf("Invalid choice.\n");
                }
                break;
            case 5:
        printf("1. siku\n");
        printf("2. wiki \n");
        printf("3. mwezi\n");
        printf("You chose bundle.\n");
          scanf("%d", &unit);
                if (unit == 1) {
                    printf("1. 500 300mb\n");
                    printf("2. 1000 600mb\n");
                    printf("3. 1500 1.5gb\n");
                    scanf("%d", unit );
                } else if (unit == 2) {
                    printf("1. 3000 2GB\n");
                    printf("2. 5000 3GB\n");
                    printf("3. 1000 6GB\n");
                } else if (unit == 3) {
                    printf("1. 10000 24GB\n");
                    printf("2. 20000 30GB\n");
                    printf("3. 50000 66GB\n");
                } else {
                    printf("Invalid choice.\n");
                }
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }

    return 0;
}
