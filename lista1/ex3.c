#include <stdio.h>

#define SIZE 10

// Function to sort an array in descending order
void sortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int values[SIZE];

    // Input 10 values from the user
    printf("Enter 10 values:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    // Sort the values in descending order
    sortDescending(values, SIZE);

    // Print the sorted values
    printf("Values in descending order:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    return 0;
}