//QN5
#include <stdio.h>
int main(void) {

    char letter;
    do {

        printf("Enter letter:");
        scanf("%s", &letter);

        if (letter == 65 || letter == 69) {
            printf("vowel\n");
        }
        if (letter == 73 || letter == 79) {
            printf("vowel\n");
        }
        if (letter == 85 || letter == 97) {
            printf("vowel\n");
        }
        if (letter == 101 || letter == 105) {
            printf("vowel\n");
        }
        if (letter == 111 || letter == 117) {
            printf("vowel\n");
        }

        if (letter >= 65 && letter <= 122) {
            printf("consonent\n");
        }
        if (letter >= 91 && letter <= 96) {
            break;
        }

    } while (letter > 65 && letter < 122);
    printf("Bye Bye\n");
}
