#include <stdio.h>

int main() {
    int age = 20;
    int *p = &age;

    printf("Value using pointer: %d\n", *p)
}

// *p means "go to the address and get the value"