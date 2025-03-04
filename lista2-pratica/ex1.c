#include <stdio.h>
#include <stdlib.h>

#define ORDEM 3

int main(int argc, char *argv[]) {
    // declaração de variáveis ponteiro para ponteiro
    int **mat, **matrixB, **matrixC;
    // alocando os vetores de ponteiros
    mat = (int**)malloc(ORDEM * sizeof(int*));
    matrixB = (int**)malloc(ORDEM * sizeof(int*));
    matrixC = (int**)malloc(ORDEM * sizeof(int*));
    // alocando cada uma das linhas das matrizes
    int i, j;
    for (i = 0; i < ORDEM; i++) {
        mat[i] = (int*)malloc(ORDEM * sizeof(int));
        matrixB[i] = (int*)malloc(ORDEM * sizeof(int));
        matrixC[i] = (int*)malloc(ORDEM * sizeof(int));
    }
    
    // preenchendo as matrizes mat e matrixB
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            mat[i][j] = i + j;
            matrixB[i][j] = i - j;
        }
    }
    
    // somando as matrizes mat e matrixB e armazenando o resultado em matrixC
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++) {
            matrixC[i][j] = mat[i][j] + matrixB[i][j];
        }
    }
    
    // mostrando os elementos da matriz matrixC
    for (i = 0; i < ORDEM; i++) {
        for (j = 0; j < ORDEM; j++)
            printf("%d\t", matrixC[i][j]);
        printf("\n");
    }
    
    // liberando o espaço de memória
    for (i = 0; i < ORDEM; i++) {
        free(mat[i]);
        free(matrixB[i]);
        free(matrixC[i]);
    }
    free(mat);
    free(matrixB);
    free(matrixC);
    
    return 0;
}