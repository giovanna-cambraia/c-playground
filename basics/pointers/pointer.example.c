#include <stdio.h>

int main () {
    int age = 20;

    int *p = &age;

    printf("Address of age: %p\n", &age);
    printf("Pointer value: %p\n", p);

    return 0;
}

// What is a pointer? A pointer is a variable that stores an adress.
// int *p; => p will store the address of an int