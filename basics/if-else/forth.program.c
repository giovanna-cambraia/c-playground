#include <stdio.h>

/* int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }
    return 0;
} */

/* int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if ( number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
} */

#include <stdio.h>

int main()
{
    int grade;

    if (grade >= 90)
    {
        printf("You got an A.\n");
    }
    else if (grade >= 70)
    {
        printf("You got a B.\n");
    }
    else if (grade >= 50)
    {
        printf("You got a C.\n");
    }
    else
    {
        printf("You got an F.\n");
    }
    return 0;
}