#include <stdio.h>
#define SIZE 10

void ordenarDecrescente(int arr[], int n) {
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
    int valores[SIZE];

    printf("digite 10 valores:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    ordenarDecrescente(valores, SIZE);

    printf("valores em ordem decrescente:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}