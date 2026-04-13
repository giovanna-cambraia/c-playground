#include <stdio.h>

int main() {
    int numbers[3] = {10, 20, 30};

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]); 
    printf("%d\n", numbers[2]);

    return 0;
}

// An array is a group of variables stored together. 
// Each variable in the array is called an element, and the elements of an array are accessed using an index.
// In C, arrays are zero-indexed, which means that the first element of the array is accessed with index 0, 
// the second element with index 1, and so on. In the example above, we declare an array of integers called numbers with 3 elements.