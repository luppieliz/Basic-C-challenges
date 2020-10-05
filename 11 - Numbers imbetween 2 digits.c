// Qns 3
#include <stdio.h>
int main(void) {
    int n1;
    int n2;
    do {

        printf("Enter n1> ");
        scanf("%d", &n1);
        printf("Enter n2> ");
        scanf("%d", &n2);

        if ((n1 + n2) % 3 != 0) {
            printf("Invalid!\n");
        }
    } while ((n1 + n2) % 3 != 0);

    if (n1 >= n2) {
        for (int i = n2; i <= n1; i++) {
            printf("%d ", i);
        }
    } else if (n1 <= n2) {
        for (int i = n1; i <= n2; i++) {
            printf("%d ", i);
        }
    }
}