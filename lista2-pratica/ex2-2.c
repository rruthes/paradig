#include <stdio.h>
#include <string.h>

// EXERCICIO 2 W3C SCHOOLS

int maiorSubstringUnica(char *str) {
    int n = strlen(str);
    int maxLength = 0;
    int start = 0;
    int visited[256];

    for (int i = 0; i < 256; i++) {
        visited[i] = -1;
    }

    for (int end = 0; end < n; end++) {
        if (visited[(int)str[end]] >= start) {
            start = visited[(int)str[end]] + 1;
        }
        visited[(int)str[end]] = end;
        maxLength = (end - start + 1) > maxLength ? (end - start + 1) : maxLength;
    }

    return maxLength;
}

int main() {
    char str[] = "xyzxyzyy";
    printf("string original: %s\n", str);
    printf("comprimento da maior substring sem crateres repetidos: %d\n", maiorSubstringUnica(str));
    return 0;
}