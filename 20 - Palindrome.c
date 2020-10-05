#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_palindrome(char string[]) {

    int size = strlen(string);
    int end = size - 1;
    int count = 0;
    int middle = size / 2;
    int start = 0;

    for (start = 0; start < middle; start++) {
        if (string[start] != string[end]) {
            return false;
        }
        if (string[start] == string[end]) {
            end--;
        }
    }
    if (start == middle) {
        return true;
    }
}

int main(void) {
    {
        printf("Test 1\n");
        char string[] = "madam";
        bool result = is_palindrome(string);
        printf("Expected:True\n");
        printf("Actual  :%s\n", result ? "True" : "False");
        printf("\n");
    }

    {
        printf("Test 2\n");
        char string[] = "No 'x' in Nixon";
        bool result = is_palindrome(string);
        printf("Expected:True\n");
        printf("Actual  :%s\n", result ? "True" : "False");
        printf("\n");
    }

    {
        printf("Test 3\n");
        char string[] = "bad, chocolate dab";
        bool result = is_palindrome(string);
        printf("Expected:False\n");
        printf("Actual  :%s\n", result ? "True" : "False");
        printf("\n");
    }
}

// Sample Run 3:
// Enter the string :
// The string "bad, chocolate dab" is not a palindrome
