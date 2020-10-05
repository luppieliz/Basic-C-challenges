//QN4
#include <stdio.h>

int main(void){
    int a;
    int factorial = 1;
    printf("Enter a number:");
    scanf("%d",&a);

    for (int i = a;i < a + 1 && i > 0; i--){
        factorial *= i;

    }
    printf("%d\n",factorial);
    }