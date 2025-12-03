#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    // 1. MOVIMENTO DA TORRE — uso estrutura FOR
    // A torre se move 5 casas para a direita.

    int movimentoTorre = 5; //Número de casas
    printf("° Movimento da Torre! °\n");

    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n"); //Exibe até a condição se tornar falsa, (i chegar a 5). 
    }

    // 2. MOVIMENTO DO BISPO — uso estrutura WHILE
    // O bispo se move 5 casas na diagonal para cima e direita.

    int movimentoBispo = 5; //Número de casas
    int contadorBispo = 0;

    printf("\n° Movimento do Bispo! °\n");

    while (contadorBispo < movimentoBispo) {
        printf("Cima Direita\n"); //Exibe até a condição se tornar falsa, (contadorBispo chegar a 5).
        contadorBispo++;
    }

    // 3. MOVIMENTO DA RAINHA — uso estrutura DO-WHILE
    // A rainha se move 8 casas para a esquerda.

    int movimentoRainha = 8; //Número de casas
    int contadorRainha = 0; //Exibe até a condição se tornar falsa, (contadorRainha chegar a 8).

    printf("\n° Movimento da Rainha! °\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentoRainha);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // 4. MOVIMENTO DO CAVALO — usa loops aninhados (FOR e WHILE)
    
    int movimentoCavaloBaixo = 2; // duas casas para baixo
    int movimentoCavaloEsquerda = 1; // uma casa para esquerda
    int i, j;

    printf("\n° Movimento do Cavalo! °\n");

    // Loop externo: FOR para o movimento para baixo
    for (i = 0; i < movimentoCavaloBaixo; i++) {
        printf("Baixo\n"); //Exibe até a condição se tornar falsa, (movimentoCavaloBaixo chegar a 2).

        // Loop interno: WHILE para cada casa de esquerda (neste caso só 1)
        j = 0;
        while (j < movimentoCavaloEsquerda) {
            if (i == movimentoCavaloBaixo - 1) // só na última iteração para completar o "L"
            { 
                printf("Esquerda\n"); //Exibe somente depois de terminar o movimento para baixo.).
            }
            j++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
