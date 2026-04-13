#include <stdio.h>

/* int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);
    printf("%d\n", numbers[4]);

    return 0;
} */

/* int main() {
    int numbers[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter number: ", i);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("You entered: %d\n", numbers[i]);
    }

    return 0;
} */

int main()
{
    int numbers[5];

    // Fill array
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &numbers[i]);
    }

    int max = numbers[0];

    // Find max
    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}