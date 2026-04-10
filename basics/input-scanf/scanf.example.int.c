#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("You are %d years old.\n", age);

    return 0;
}


// scanf is input

// basic form => scanf("format", &variable);
// example => scanf("%d", &age);

// What is &?
// & is the address-of operator, which gives the memory address of a variable.
// It means that scanf will store the input value at the memory location of the variable provided.
// Quite like => age = box, &age = location of the box

// Why do we need to use & with scanf?
// Scanf needs to know where to store the input value. By using &, we provide the memory address of the variable
// where the input should be stored.