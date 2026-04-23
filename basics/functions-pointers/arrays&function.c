#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i ++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int nums[3] = {1, 2, 3};

    printArray(nums, 3);

    return 0;
} 

// Insight: int arr[] === int *arr