#include <stdio.h>

int main() {
    int numbers[3] = {10, 20, 30};
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += numbers[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}