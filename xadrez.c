#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Recursividade(movendo para direira)
void Torre(int casa){
    if (casa > 0){
        Torre(casa - 1);
        printf("Direita.\n");
    }
}

// Recursividade e Loop Aninhado com while externo(movendo para cima) e while interno(movendo para direita)
void Bispo(int casas){
    while (casas > 0){
        printf("Cima, ");
        while (casas > 0){
            printf("Direita.\n");
            break;
        }
        Bispo(casas - 1);
        break;
    }
        
}

// Recursividade(movendo para esquerda)
void Rainha(int casa){
    if (casa > 0){
        Rainha(casa - 1);
        printf("Esquerda.\n");
    }
}


void Cavalo(){
    for(int i = 1; i <= 1; i++){
        for(int k = 1; k <= 2; k++){
            printf("Cima.\n");
            continue;
        }
        printf("Direita.\n");
        break;
    }
}


int main() {
    
    // Implementação de Movimentação do Bispo com (Recursividade e Loop Aninhado) Movimenta 5 casas na diagonal.
    printf("Movimento Bispo:\n");
    Bispo(5);
    printf("\n\n");

    // Implementação de Movimentação da Torre com (Recursividade) Movimenta 5 casas para direita.
    printf("Movimento Torre:\n");
    Torre(5);
    printf("\n\n");

    // Implementação de Movimentação da Rainha com (Recursividade) Movimenta 5 casas para esquerda.
    printf("Movimento Rainha:\n");
    Rainha(8);
    printf("\n\n");
    
    // Implementação de Movimentação do Cavalo com (Loop Aninhado) Movimento em L 2 casas para cima e 1 casa para direita.
    printf("Movimento Cavalo:\n");
    Cavalo();
    printf("\n\n");

    return 0;
}
