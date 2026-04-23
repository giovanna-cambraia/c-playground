#include <stdio.h>

void change(int x) {
    x = 100;
}

int main() {
    int num = 10;

    change(num);

    printf("%d\n", num);
    return 0;
}

// What prints? 10. Why? Num → copied into x. Function gets a copy, not the original.

void change(int *x) {
    *x = 100;
}

int main() {
    int num = 10;

    change(&num);

    printf("%d\n", num);
    return 0;
}

// To change the original → use pointer. The output will be 100 in here.