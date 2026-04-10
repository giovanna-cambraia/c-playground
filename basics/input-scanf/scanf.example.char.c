#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    printf("Your grade is: %c\n", grade);
    // Space before %c is very important, because char input can break due 
    // to newline character left in the input buffer from previous input.

    return 0;
}