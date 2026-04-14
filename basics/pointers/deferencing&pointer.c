#include <stdio.h>

int main() {
    int age = 20;
    int *p = &age; // pointer inicialization

    *p = 30;

    printf("Age: %d\n", age);

    return 0;
}

// Output 30

// We create a variable 'age' with value 20, then we create a pointer 'p' that stores the address of 'age'.
// When we do *p = 30, we are going to that memory address and changing the value stored there,
// since 'p' points to 'age', we are effectively changing 'age' itself.
// A pointer doesn't copy the value - it gives you direct access to the original variable

// Think it like this

// age = box with 20

// p = arrow → points to that box

// *p = open the box and change what's inside