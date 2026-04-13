#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

// While loop → While the condition set is not met, continue. As it does, the loop will stop. So,
// you may read this example as: while i (which holds the value of one) doesn't get to 5, print
// i's value as it incriments (i++)

// i = 1 → starting point
// i <= 5 → condition to continue
// i++ → increase by 1 each loop

// If you forget i++, the loop never stops. It is called infinite loop.