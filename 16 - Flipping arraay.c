#include <stdio.h>
int main(void) {
    const x = 2;
    int array[x] = {2, 3};
    int array02[x];
    int temp = 0;
    for (int i = 0; i < x; i++)
        temp = array[i];
    array02[2] = temp;

    printf("%d", array02);
}
}