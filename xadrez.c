#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo com (While)
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int bispo = 0;
    printf("Movimento Bispo:\n");
    while (bispo <= 5) {
        printf("Cima, ");
        printf("Direita.\n");
        bispo++;
    } 
    
    // Implementação de Movimentação da Torre com (Do-While)
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int torre;
    printf("\nMovimento Torre:\n");
    do{
        printf("Esquerda.\n");
        torre++;
    } while(torre <= 5);

    // Implementação de Movimentação da Rainha com (For)
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nMovimento Rainha:\n");
    for (int rainha = 0; rainha < 8; rainha++){
        printf("Cima.\n");
    }
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
