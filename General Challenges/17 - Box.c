
#include <stdbool.h>
#include <stdio.h>

void asterisks(int n) {
    while (n != 0) {
        printf("%c", '*');
        n--;
    }
    printf("\n");
}

void box(int rows, int columns) {
    // Base case row <= 2
    if (rows <= 2) {
        while (rows != 0) {
            asterisks(columns);
            rows--;
        }
    }
    // Base case column <= 2
    else if (columns <= 2) {
        while (rows != 0) {
            asterisks(columns);
            rows--;
        }
    }

    // Every other cases
    else {
        int row = 1;
        int col = columns;
        while (true) {
            if (row == 1) { //First row
                asterisks(columns);
                row++;
            } else if (row == rows) { //Last row
                asterisks(columns);
                break;
            } else { // Middle rows
                printf("*");
                int space = 0;
                while (space != columns - 2) {
                    printf(" ");
                    space++;
                }
                printf("*");
                row++;
                printf("\n");
            }
        }
    }
}

void main() {
    box(4, 5);
}