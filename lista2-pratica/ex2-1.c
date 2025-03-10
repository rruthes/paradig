#include <stdio.h>
// EXERCÍCIO 1 W3C SCHOOLS

void findIndices(int arr[], int tamanho, int valorDesejado) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (arr[i] + arr[j] == valorDesejado) {
                printf("dois numeros cuja soma se iguala ao valor desejado: %d\n", valorDesejado);
                printf("%d %d\n", i, j);
                return;
            }
        }
    }
    printf("par de números cuja soma seja igual ao valor desejado não foi encontrado: %d\n", valorDesejado);
}

int main() {
    int arr[] = {4, 2, 1, 5};
    int valorDesejado = 7;
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("array original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nvalor desejado: %d\n", valorDesejado);

    findIndices(arr, tamanho, valorDesejado);

    return 0;
}