#include <stdio.h>
// EXERCÍCIO 1 W3C SCHOOLS

void findIndices(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Indices of the two numbers whose sum equals to target value: %d\n", target);
                printf("%d %d\n", i, j);
                return;
            }
        }
    }
    printf("No two numbers found whose sum equals to target value: %d\n", target);
}

int main() {
    int arr[] = {4, 2, 1, 5};
    int target = 7;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nTarget Value: %d\n", target);

    findIndices(arr, size, target);

    return 0;
}