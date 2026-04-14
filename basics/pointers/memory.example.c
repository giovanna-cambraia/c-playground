#include <stdio.h>

int main() {
    int age = 20;

    printf("Value: %d\n", age);
    printf("Adress: %p\n", &age);

    return 0;
}

// Every variable lives somewhere in memory.
// %p prints memory address.