#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int i = 0;
    
    // Movimentação da Torre: 5 casas para a direita
    printf("=== Movimentacao da Torre ===\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }
    
    // Movimentação do Bispo: 5 casas na diagonal (cima e direita)
    printf("\n=== Movimentacao do Bispo ===\n");
    i = 0; // Reinicia o contador
    while (i < 5) {
        printf("Cima Direita\n"); // Imprime movimento diagonal
        i++; // Incrementa o contador
    }
    
    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\n=== Movimentacao da Rainha ===\n");
    i = 0; // Reinicia o contador
    do {
        printf("Esquerda\n"); // Imprime a direção do movimento
        i++; // Incrementa o contador
    } while (i < 8);
    
    return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

