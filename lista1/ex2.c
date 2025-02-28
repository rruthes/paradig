#include <stdio.h>

#define SIZE 3

// Function to input values into a matrix
void inputMatrix(int matrix[SIZE][SIZE], char name) {
    printf("Enter the values for matrix %c:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c[%d][%d]: ", name, i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[SIZE][SIZE], char name) {
    printf("Matrix %c:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to subtract matrix B from matrix A
void subtractMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Function to add two matrices
void addMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int matrix[SIZE][SIZE], int transposed[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE], T[SIZE][SIZE];
    int choice;

    // Input values for matrices A and B
    inputMatrix(A, 'A');
    inputMatrix(B, 'B');

    // Menu loop to perform matrix operations
    do {
        printf("\nMenu:\n");
        printf("1. C = A * B\n");
        printf("2. C = A - B\n");
        printf("3. C = A + B\n");
        printf("4. Transpose of C (where C = A * B)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                multiplyMatrices(A, B, C);
                printMatrix(C, 'C');
                break;
            case 2:
                subtractMatrices(A, B, C);
                printMatrix(C, 'C');
                break;
            case 3:
                addMatrices(A, B, C);
                printMatrix(C, 'C');
                break;
            case 4:
                multiplyMatrices(A, B, C);
                transposeMatrix(C, T);
                printMatrix(T, 'T');
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}