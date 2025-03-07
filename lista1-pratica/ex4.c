#include <stdio.h>
#include <string.h>

#define MAX_PROJETOS 100

typedef struct {
    char nome[50];
    char area[20];
    float valor_total;
    char data_inicio[11];
    int duracao_meses;
} Projeto;

void cadastrar_projeto(Projeto projetos[], int *contagem) {
    if (*contagem >= MAX_PROJETOS) {
        printf("número máximo de projetos atingido.\n");
        return;
    }

    printf("digite o nome do projeto: ");
    scanf(" %[^\n]", projetos[*contagem].nome);
    printf("digite a área do projeto (marketing, operacional, inovação): ");
    scanf(" %[^\n]", projetos[*contagem].area);
    printf("digite o valor total: ");
    scanf("%f", &projetos[*contagem].valor_total);
    printf("digite a data de início (AAAA-MM-DD): ");
    scanf(" %[^\n]", projetos[*contagem].data_inicio);
    printf("digite a duração em meses: ");
    scanf("%d", &projetos[*contagem].duracao_meses);

    (*contagem)++;
}

void consultar_projetos(Projeto projetos[], int contagem) {
    for (int i = 0; i < contagem; i++) {
        printf("projeto %d:\n", i + 1);
        printf("nome: %s\n", projetos[i].nome);
        printf("área: %s\n", projetos[i].area);
        printf("valor total: %.2f\n", projetos[i].valor_total);
        printf("data de início: %s\n", projetos[i].data_inicio);
        printf("duração: %d meses\n", projetos[i].duracao_meses);
        printf("\n");
    }
}

int main() {
    Projeto projetos[MAX_PROJETOS];
    int contagem = 0;
    int escolha;

    while (1) {
        printf("1. cadastrar projeto\n");
        printf("2. consultar projetos\n");
        printf("3. sair\n");
        printf("digite sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                cadastrar_projeto(projetos, &contagem);
                break;
            case 2:
                consultar_projetos(projetos, contagem);
                break;
            case 3:
                return 0;
            default:
                printf("escolha inválida. tente novamente.\n");
        }
    }

    return 0;
}