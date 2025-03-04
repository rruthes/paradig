// === La Banque Clément====
// =========================
#include <stdio.h>

// Function prototypes
int findConta(int *conta, int cc[1000], int n);
void openConta(int conta, float *saldo, int cc[1000], int *n);
void fazerDeposito(float saldo[1000], int i);
void fazerSaque(float saldo[1000], int i);
void fazerPix(float saldo[1000], int i);
float tomaValor(void);
void menu(int *p);

int main(void) {
    int cc[1000], n = 0, i, op, conta;
    float saldo[1000], valor;

    // Initialize account numbers and balances
    for (i = 0; i < 1000; i++) {
        cc[i] = 0;
        saldo[i] = 0;
    }

    // Main loop to display menu and handle user choices
    do {
        menu(&op);
        if (op == 1) {
            i = findConta(&conta, cc, n);
            if (i != n) 
                printf("esta conta-corrente ja existe\n");
            else 
                openConta(conta, saldo, cc, &n);
        }
        if (op == 2) {
            i = findConta(&conta, cc, n);
            if (i == n) 
                printf("numero de conta-corrente invalido\n");
            else 
                printf("saldo: %.2f\n", saldo[i]);
        }
        if (op == 3) {
            i = findConta(&conta, cc, n);
            if (i == n) 
                printf("numero de conta-corrente invalido\n");
            else 
                fazerDeposito(saldo, i);
        }
        if (op == 4) {
            i = findConta(&conta, cc, n);
            if (i == n)
                printf("numero de conta-corrente invalido\n");
            else
                fazerSaque(saldo, i);
        }
        if (op == 5) {
            i = findConta(&conta, cc, n);
            if (i == n)
                printf("numero de conta-corrente invalido\n");
            else
                fazerPix(saldo, i);
        }
    } while (op != 6);

    return 0;
}

// Function to display the menu and get user choice
void menu(int *p) {
    printf("1) Abrir conta\n");
    printf("2) Verificar saldo\n");
    printf("3) Fazer Deposito\n");
    printf("4) Fazer Saque\n");
    printf("5) Fazer PIX\n");
    printf("6) Sair do sistema\n");
    scanf("%d", p);
}

// Function to find an account by its number
int findConta(int *conta, int cc[1000], int n) {
    int j;
    printf("numero da conta: ");
    scanf("%d", conta);
    for (j = 0; j < n && *conta != cc[j]; j++);
    return j;
}

// Function to open a new account
void openConta(int conta, float *saldo, int cc[1000], int *n) {
    float valor;
    printf("valor do deposito inicial: ");
    valor = tomaValor();
    cc[*n] = conta;
    saldo[*n] = valor;
    (*n)++;
    printf("operacao realizada com sucesso\n");
}

// Function to make a deposit
void fazerDeposito(float saldo[1000], int i) {
    float valor;
    printf("valor do deposito: ");
    valor = tomaValor();
    saldo[i] = saldo[i] + valor;
    printf("operacao realizada com sucesso\n");
}

// Function to make a withdrawal
void fazerSaque(float saldo[1000], int i) {
    float valor;
    printf("valor do saque: ");
    valor = tomaValor();
    if (valor > saldo[i]) {
        printf("saldo insuficiente\n");
    } else {
        saldo[i] = saldo[i] - valor;
        printf("operacao realizada com sucesso\n");
    }
}

// Function to make a PIX transfer
void fazerPix(float saldo[1000], int i) {
    float valor;
    printf("valor do PIX: ");
    valor = tomaValor();
    if (valor > saldo[i]) {
        printf("saldo insuficiente\n");
    } else {
        saldo[i] = saldo[i] - valor;
        printf("PIX realizado com sucesso\n");
    }
}

// Function to input a positive value
float tomaValor(void) {
    float valor;
    scanf("%f", &valor);
    while (valor <= 0) {
        printf("o valor deve ser positivo.\n");
        printf("valor: ");
        scanf("%f", &valor);
    }
    return valor;
}