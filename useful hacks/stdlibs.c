#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //converting string to numbers
    //will print 1234 in integers
    char number01[5] = "1234";
    int x = atoi(number01);
    printf("%d\n", x);
    //converting alphanumeric string
    //will print 0 so not very useful but possible
    char number02[6] = "hello";
    int y = atoi(number02);
    printf("%d\n", y);

    //converting a mix
    //will just print the numbers
    char number03[10] = "123hello!";
    int z = atoi(number03);
    printf("%d\n", z);
}