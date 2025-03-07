#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo com (While)
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int bispo = 1;
    printf("Movimento Bispo:\n");
    while (bispo <= 5) {
        printf("Cima, ");
        printf("Direita.\n");
        bispo++;
    } 
    printf("\n\n");
    
    // Implementação de Movimentação da Torre com (Do-While)
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int torre = 1;
    printf("Movimento Torre:\n");
    do{
        printf("Direita.\n");
        torre++;
    } while(torre <= 5);
    printf("\n\n");

    // Implementação de Movimentação da Rainha com (For)
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimento Rainha:\n");
    for (int rainha = 1; rainha <= 8; rainha++){
        printf("Esquerda.\n");
    }
    printf("\n\n");
    

    // Nível Aventureiro - Movimentação do Cavalo com (For Aninhado)
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimento Torre:\n");
    int cavalo = 1;
    while (cavalo--){
        for (int i = 1; i <= 2; i++){
            printf("Baixo.\n");
        }
        printf("Esquerda.\n");
    }
    printf("\n\n");
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
