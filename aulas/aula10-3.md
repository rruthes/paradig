## Aula teórica do dia 10/03
### Palavras especiais
Palavras especiais são usadas para tornar os programas mais legíveis. Exemplos: while, do, repeat, if, else.

### Palavras Chave
Palavras que são especiais em apenas certos contextos. Exemplo: INTEGER, REAL
````
INTEGER REAL // variável chamada REAL com o tipo INTEGER
REAL INTEGER // variável chamada INTEGER com o tipo REAL
````
### Palavra reservada
Palavras que NUNCA podem ser redefinidas no código.

### Nomes em C++
Em C++, muitos nomes são definidos por biblitoecas usadas por programas do usuário.

O Acesso dos nomes definidos em bibliotecas é feito por meio da importação dos arquivos de cabeçalho (arquivos *.h*)
````
#include <stdio.h>

int main() {
    printf("Teste") // A variável "printf" só pode ser utilizada pq foi importada da biblioteca "stdio"
    return 0;
}
````
O que é definir uma variável? é utilizar um nome de fácil legibilidade para representar um endereço de memória.

O que é tipo em C++? O tipo, além de definir de maneira estática qual é a "*função*" daquele objeto, ela aloca na memória o valor necessário para armazená-lo.

### Tamanho dos tipos em C++

| Tipo | Tamanho na memória |
|----------|----------|
| boolean  | 1 byte  |
| char  | 1 byte  |
| int | 2 or 4 bytes |
| float | 4 bytes |
| double | 8 bytes |

### Checagem de tipos
É  atividade de assegurar que os operandos de um dado operador tenham tipos compatíveis. Erros de tipo é a aplicação de um operador sobre um ou mais operandos cujos tipos são impróprios.

### Coerção
É a conversão **automática** de um tipo para outro pelo compilador.

### Tempo de vida
Tempo durante o qual a memória permance alocada para a variável.

### Escopo:
Parte específica do programa onde a variável é acessível.
- Variável global: o programa inteiro.
- Variável local: o bloco onde foi declarada.

````
#include <stdio.h>

int a = 1 // Variável global

int main() {
    int b = 0; // Variável local
    imprime();
    return 0;
};

void imprime90 {
    printf("%d", a); // Imprime o "1" no console
    printf("%d", b); // Não imprime nada
}
````

### Vinculação
Associação entre um atributo e uma entidade, ou entre uma operação e um símbolo. 
- Vinculação estática: ocorre antes do tempo de execução do programa.
- Ocorre durante o tempo de execução do programa.

### Linguagem de tipagem dinâmica
O tipoé inferido somente em tempo de execução.
````
def soma(a,b):
    return a+b
````

### Declaração explícita
É uma sentença declarativa que define o tipo de variável. Exemplo: "**int** x".

### Declaração implícita
É um mecanismo padrão para especificar o tipo da variável.

### O monte (Heap)
É um conjunto de células alocadas na memória para a execução do programa.

### Variável estática
É definida antes do programa ser executado e se mantém até o final dele, sem poder ser alterada de qualquer forma. O *garbage collector* não à remove mesmo não sendo utilizada.