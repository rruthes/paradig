## Lista 9 - Exercício 1
### Conceito de Exceção
- Uma exceção é um evento incomum, errôneo ou não, detectado por hardware ou software que precisa de processamento especial
- Tipos de erros detectáveis: divisão por zero, falha de dispositivo de entrada/saída, índice de arranjo fora do intervalo, final de arquivo
- Permite que o programa reaja ao erro e possivelmente continue sua execução
- Uma exceção é "lançada" (thrown, raised) quando seu evento associado ocorre
### Mecanismos de Tratamento de Exceção
- O processamento especial necessário quando uma exceção é detectada é chamado de "tratamento de exceção"
- Este processamento é feito por uma unidade de código chamada "tratador de exceção"
- Vantagens dos mecanismos integrados à linguagem:
- Geração automática de código para checagem e geração de exceção
- Propagação de exceção entre diferentes níveis de chamada
- Encorajamento do programador a considerar possíveis erros
- Reuso de código de tratamento de exceção
Questões de Projeto
- Como e onde os tratadores são especificados e qual seu escopo
- Como a ocorrência de uma exceção é vinculada ao tratador
- Se informações sobre as exceções podem ser passadas para o tratador
- Onde a execução continua após o tratador completar sua execução
- Se alguma forma de finalização é fornecida
- Como exceções definidas pelo usuário são especificadas
Implementação em Linguagens
- Ada: tratadores agrupados em cláusula "exception" no final do bloco ou unidade
- Propagação de exceções não tratadas para o chamador
- Exceções pré-definidas e definidas pelo usuário
- C++: usa blocos try-catch
- Cada cláusula "catch" define um tratador
- Permite passar informações para o tratador
- Suporte a exceções em programação orientada a objetos
## Lista 9 - Exercício 2
### Conceito de Abstração
- Uma abstração é uma visão ou representação de uma entidade que inclui apenas os atributos mais significativos
- Propósito: simplificar a programação e combater a complexidade
- Ferramenta poderosa para gerenciar sistemas complexos
- Exemplo: em um procedimento de ordenação, o algoritmo usado fica oculto
### Tipos Abstratos de Dados (TAD)
- Um tipo abstrato de dado satisfaz duas condições essenciais:
- A representação dos objetos do tipo é ocultada da unidade de programa que usa o tipo
- A declaração do tipo e dos protocolos das operações (interface) estão contidas em uma única unidade sintática
- Vantagens: confiabilidade, flexibilidade e possibilidade de compilação separada
- Exemplos: tipos como pilha (stack), fila, lista, etc.
### Construções de Encapsulamento
- Mecanismos que permitem agrupar dados e operações relacionadas
- Diferentes linguagens implementam de formas distintas:
- Ada: usa pacotes (especificação e corpo)
- C++: usa classes e estruturas com membros públicos e privados
- Controle de acesso: private, public, protected
- Permite ocultar detalhes de implementação dos usuários
### Implementação em Linguagens
- Ada: pacotes de especificação (interface) e pacotes de corpo (implementação)
- C++: classes com dados membros e funções membros
- Construtores e destrutores para inicialização e liberação de recursos
- Instâncias podem ser estáticas ou dinâmicas
- Mecanismos de parametrização de tipos (genéricos)

## Lista 10 - Exercício 1
### Paradigma Funcional
- Baseado no conceito matemático de função como mapeamento de valores
- Programas são compostos por funções que transformam dados sem efeitos colaterais
- Ênfase na avaliação de expressões em vez de execução de comandos
- Exemplos de linguagens: Scheme, Haskell, ML, Lisp
### Características Fundamentais
- Funções como cidadãos de primeira classe (podem ser passadas como argumentos)
- Funções de ordem superior (aceitam outras funções como parâmetros)
- Recursão como principal mecanismo de iteração
- Ausência de variáveis de estado e atribuições (imutabilidade)
### Avaliação de Expressões
- Avaliação rápida (eager evaluation): argumentos são avaliados antes da chamada da função
- Avaliação preguiçosa (lazy evaluation): argumentos só são avaliados quando necessários
- Estratégias de redução: aplicativa vs. normal
- Transparência referencial: mesma expressão sempre produz o mesmo resultado
### Implementação em Linguagens
- Scheme: dialeto de Lisp, tipagem dinâmica, avaliação rápida
- Haskell: tipagem estática forte, avaliação preguiçosa por padrão
- Expressões lambda como base para definição de funções anônimas
- Casamento de padrões (pattern matching) para decomposição de estruturas

## Lista 10 - Exercício 2
### Avaliação Rápida (Eager Evaluation)
- A avaliação rápida é uma estratégia onde os argumentos de uma função são completamente avaliados antes da chamada da função. Esta é a estratégia padrão em linguagens como Scheme e a maioria das linguagens imperativas. Na avaliação rápida, as expressões são calculadas assim que aparecem, independentemente de serem necessárias posteriormente.
### Avaliação Lenta ou Preguiçosa (Lazy Evaluation)
- A avaliação lenta é uma estratégia onde a avaliação de expressões é adiada até que seu valor seja realmente necessário. Em Haskell, que usa avaliação preguiçosa por padrão, os argumentos de uma função só são avaliados quando (e se) forem utilizados dentro da função. Isso permite trabalhar com estruturas de dados potencialmente infinitas e evita cálculos desnecessários.
### Principais Diferenças
- Eficiência: A avaliação lenta pode evitar cálculos desnecessários quando os resultados não são utilizados
- Estruturas infinitas: A avaliação lenta permite definir e manipular estruturas de dados conceitualmente infinitas
- Ordem de avaliação: Na avaliação rápida, a ordem é previsível; na lenta, depende do uso dos valores
- Comportamento com erros: Na avaliação rápida, erros em argumentos são detectados imediatamente; na lenta, apenas se o argumento for usado

## Lista 11 - Exercício 1