#include <stdio.h>

/* int main() {
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    return 0;
} */

/* int main() {
    for (int i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }
    return 0;
} */

#include <stdio.h>

int main()
{
    int num;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}