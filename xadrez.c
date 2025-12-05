#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.



    void movimentoTorre(int casas) {
        if(casas > 0) {
            printf("Direita\n");
            movimentoTorre(casas - 1);
        }
    }

    void movimentoRainha(int casas) {
        if(casas > 0) {
            printf("Esquerda\n");
            movimentoRainha(casas - 1);
        }
    }



int main() {

    // 1. MOVIMENTO DA TORRE — usa estrutura Recursão
    // A torre se move 5 casas para a direita.


    int casasTorre = 5; //Número de casas
    printf("° Movimento da Torre! °\n");
    movimentoTorre(casasTorre);
    



    // 2. MOVIMENTO DO BISPO — usa estrutura loops alinhados
    // O bispo se move 5 casas na diagonal para cima e direita.


    int movimentoBispoVertical = 5;
    int movimentoBispoHorizontal = 5;

    printf("\n° Movimento do Bispo (loops aninhados)! °\n");

    for (int i = 0; i < movimentoBispoVertical; i++) {
    printf("Cima\n"); // loop externo controla a vertical

    for (int j = 0; j < movimentoBispoHorizontal; j++) {
        printf("Direita\n"); // loop interno controla a horizontal
        break; // imprime só uma vez por linha, simulando diagonal
    }
}




    // 3. MOVIMENTO DA RAINHA — usa estrutura Recursão
    // A rainha se move 8 casas para a esquerda.


    int casasRainha = 8; // número de casas

    printf("\n° Movimento da Rainha! °\n");
    movimentoRainha(casasRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    


    
    // 4. MOVIMENTO DO CAVALO — usa loops aninhados (FOR e WHILE)
    
    
    printf("\n° Movimento do Cavalo! °\n");

    int movimentoCima = 2;
    int movimentoDireita = 1;

    for(int i = 0; i < movimentoCima; i++){

        //Exibe movimento para cima...
        printf("Cima\n");

        //Se ainda não estamos na última subida, pula para a próxima iteração~
        if (i < movimentoCima - 1){
        continue;
    
    }

    //Quando chegar na última subida, entra no loop da direita...

    int j = 0;
    while (j < movimentoDireita){
        //Exibe movimento para direita...
        printf("Direita\n");
    break;
    }
}
    
return 0;
}



    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    // Subistitui porque achei que fosse assim para ser feito, caso não seja fico feliz em concerta-ló caso for nescessário.