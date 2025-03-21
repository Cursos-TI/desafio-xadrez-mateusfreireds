#include <stdio.h>

// Constantes para o número de movimentos de cada peça
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8
#define MOVIMENTOS_CAVALO_BAIXO 2
#define MOVIMENTOS_CAVALO_ESQUERDA 1


int main() {
    // Simulação do movimento da Torre 
    printf("\n---------- Movimento da Torre ----------n");
    for (int i = 0; i <= MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo 
    printf("\n---------- Movimento do Bispo ----------n");
    int movimentos_bispo = 0;
    while (movimentos_bispo <= MOVIMENTOS_BISPO) {
        printf("Cima, Direita\n");
        movimentos_bispo++;
    }

    // Simulação do movimento da Rainha
    // apesar de no xadrez ser impossível movimentar-se 8 vezes para qualquer direção visto que 
    // o tabuleiro é 8x8.
    printf("\n---------- Movimento da Rainha ----------n");
    int movimentos_rainha = 0;
    do {
        printf("Esquerda\n");
        movimentos_rainha++;
    } while (movimentos_rainha <= MOVIMENTOS_RAINHA);

    // Simulação do movimento do Cavalo
    printf("\n---------- Movimento do Cavalo ----------\n");
    // Loop externo para movimento para baixo
    for (int vertical = 0; vertical < MOVIMENTOS_CAVALO_BAIXO; vertical++) {
        printf("Baixo\n");
    
        // Loop interno para movimento para esquerda
        int horizontal = 0;
        while (horizontal < MOVIMENTOS_CAVALO_ESQUERDA && vertical == 1) {
            printf("Esquerda\n");
            horizontal++;
    }}

    return 0;
}
