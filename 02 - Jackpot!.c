#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // code needed to generate different random numbers
    srand (time(0));
    int num1 = rand() % 9 + 1;
    int num2 = rand() % 9 + 1;
    int num3 = rand() % 9 + 1;
    printf("Press <enter> key to start");
    // to pause and wait for user input
    // grab the "enter" character and discard it
    getchar();
    printf("*****************\n");
    printf("** %d ** %d ** %d **\n", num1, num2, num3);
    printf("*****************\n");

    // complete your code below
    if (num1 == num2 && num2 == num3){
        printf("** Jackpot! **");
    } else if (num1 == num2 || num2 == num3 || num3 == num1){
        printf("** 2 of a kind! **");
    } else {
        printf("** Try again! **");
    }
}


