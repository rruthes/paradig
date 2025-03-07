#include <stdio.h>

#define SIZE 3

void entradaMatriz(int matrix[SIZE][SIZE], char name) {
    printf("digite os valores para a matriz %c:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c[%d][%d]: ", name, i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void imprimeMatriz(int matrix[SIZE][SIZE], char name) {
    printf("matriz %c:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplicaMatrizes(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void subtraiMatrizes(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void adicionaMatrizes(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void transpoeMatriz(int matrix[SIZE][SIZE], int transposed[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE], T[SIZE][SIZE];
    int choice;

    entradaMatriz(A, 'A');
    entradaMatriz(B, 'B');

    do {
        printf("\nMenu:\n");
        printf("1. C = A * B\n");
        printf("2. C = A - B\n");
        printf("3. C = A + B\n");
        printf("4. Transposta de C (onde C = A * B)\n");
        printf("5. Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                multiplicaMatrizes(A, B, C);
                imprimeMatriz(C, 'C');
                break;
            case 2:
                subtraiMatrizes(A, B, C);
                imprimeMatriz(C, 'C');
                break;
            case 3:
                adicionaMatrizes(A, B, C);
                imprimeMatriz(C, 'C');
                break;
            case 4:
                multiplicaMatrizes(A, B, C);
                transpoeMatriz(C, T);
                imprimeMatriz(T, 'T');
                break;
            case 5:
                printf("saindo do programa.\n");
                break;
            default:
                printf("escolha inválida. Por favor, tente novamente.\n");
        }
    } while (choice != 5);

    return 0;
}