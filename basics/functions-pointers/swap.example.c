#include <stdio.h>

/* void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
 */

// This is wrong. It has no pointers and it will not work.

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    swap(&x, &y);

    printf("x = %d, y = %d\n", x, y);

    return 0;
}

// Outup → x = 10, y = 5