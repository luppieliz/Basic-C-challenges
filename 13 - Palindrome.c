//QN6
#include <stdio.h>
int main(void) {

    int n;
    printf("Enter integer:");
    scanf("%d", &n);
    int original = n;
    int reversed = 0;

    while (n > 0) {
        if (n > 9) {
            int remainder = n % 10;
            n -= remainder;
            n /= 10;
            reversed = reversed * 10 + remainder;
        }
        if (n < 9) {
            reversed = reversed * 10 + n;
            break;
        }
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n ", original);
    }
}