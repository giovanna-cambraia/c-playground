#include <stdio.h>

int main() {
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade >= 90) {
        printf("You got an A.\n");
    } else if (grade >= 80) {
        printf("You got a B.\n");
    } else if (grade >= 70) {
        printf("You got a C.\n");
    } else if (grade >= 60) {
        printf("You got a D.\n");
    } else {
        printf("You got an F.\n");
    }
    return 0;
}

// Else-if statements allow you to check multiple conditions in sequence.
// In this example, we check the value of 'grade' against multiple thresholds to determine the letter grade.
// The conditions are evaluated in order, and the first condition that evaluates to true will execute its

// Also, don't forget. This = assignment operator, == is the equality operator used for comparison in conditions.