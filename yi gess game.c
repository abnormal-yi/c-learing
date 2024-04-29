#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

// Constants should be defined with a data type
const double min = 1;
const double max = 6;
const double minmoney = 100;
const double maxmoney = 100000;
const double minwithdraw = 200;
const double maxwithdraw = 10000;

int main()
{
    // Variables
    double balance;
    char levels;
    int luckynum;

    // Constant arrays should be defined using 2D array syntax
    char Qlevels[][100] = {"A: EASY      ODD 1.50   @100  total game you will play",
                           "B: MEDIUM    ODD.4.50   @ 300 total game you will play",
                           "C: DIFICULT  ODD 9.50   @ 500 total game you will play"};

    printf("*******************YI********************LUCKY*******GAME*************************\n");
    printf("HELLO YOUR WELCOME\n");
    printf("**********************************************************************************\n");
    printf("TO PLAY  FIRST STAKE YOUR AMOUNT     MINIMUM 100 , MAXIMUM 100000: ");
    scanf("%lf", &balance);

    // Check if the amount of money is within the range
    if (balance >= minmoney && balance <= maxmoney)
    {
        printf("Congrat You have successfully deposited %lf\n", balance);
    }
    else
    {
        printf("STAKE (MINIMUM 100 MAXIMUM 100000)\n");
        return 1; // Exit the program with error code
    }

    // Levels
    printf("***************************************************************************************************\n");
    printf("balance %lf\n", balance);
    printf("Choose LEVELS\n");
    printf("%s\n", Qlevels);

    // Get user's choice of level
    printf("Enter level (A/B/C): ");
    scanf(" %c", &levels); // Added a space before %c to consume whitespace characters

    levels = toupper(levels); // Convert to uppercase

    switch (levels)
    {
    case 'A':
        printf("You have chosen EASY level\n");
        printf("Guess a number between 1 and 3: ");
        scanf("%d", &luckynum);

        // Check if the guessed number is between 1 and 3
        if (luckynum < 1 || luckynum > 3)
        {
            printf("Invalid number! Choose between 1 and 3.\n");
            return 1; // Exit the program with error code
        }

        // Seed the random number generator with the current time
        srand(time(NULL));

        // Generate and print random lucky numbers
        for (int i = 0; i < luckynum; i++)
        {
            int lucky = (rand() % 3) + 1; // Generates a random number between 1 and 3
            printf("Lucky number %d: %d\n", i + 1, lucky);
        }
        break;

    case 'B':
        printf("You have chosen MEDIUM level\n");
        printf("Guess a number between 1 and 6: ");
        scanf("%d", &luckynum);

        // Check if the guessed number is between 1 and 6
        if (luckynum < 1 || luckynum > 6)
        {
            printf("Invalid number! Choose between 1 and 6.\n");
            return 1; // Exit the program with error code
        }

        // Seed the random number generator with the current time
        srand(time(NULL));

        // Generate and print random lucky numbers
        for (int i = 0; i < luckynum; i++)
        {
            int lucky = (rand() % 6) + 1; // Generates a random number between 1 and 6
            printf("Lucky number %d: %d\n", i + 1, lucky);
        }
        break;

    case 'C':
        printf("You have chosen DIFFICULT level\n");
        printf("Guess a number between 1 and 9: ");
        scanf("%d", &luckynum);

        // Check if the guessed number is between 1 and 9
        if (luckynum < 1 || luckynum > 9)
        {
            printf("Invalid number! Choose between 1 and 9.\n");
            return 1; // Exit the program with error code
        }

        // Seed the random number generator with the current time
        srand(time(NULL));

        // Generate and print random lucky numbers
        for (int i = 0; i < luckynum; i++)
        {
            int lucky = (rand() % 9) + 1; // Generates a random number between 1 and 9
            printf("Lucky number %d: %d\n", i + 1, lucky);
        }
        break;

    default:
        printf("Invalid level choice!\n");
        return 1; // Exit the program with error code
    }

    return 0;
}
