#include <stdio.h>

// Constantes para o número de movimentos de cada peça
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8

int main() {
    // Simulação do movimento da Torre (usando for)
    printf("\n---------- Movimento da Torre ----------n");
    for (int i = 0; i <= MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo (usando while)
    printf("\n---------- Movimento do Bispo ----------n");
    int movimentos_bispo = 0;
    while (movimentos_bispo <= MOVIMENTOS_BISPO) {
        printf("Cima, Direita\n");
        movimentos_bispo++;
    }

    // Simulação do movimento da Rainha (usando do-while)
    // apesar de no xadrez ser impossível movimentar-se 8 vezes para qualquer direção visto que 
    // o tabuleiro é 8x8.
    printf("\n---------- Movimento da Rainha ----------n");
    int movimentos_rainha = 0;
    do {
        printf("Esquerda\n");
        movimentos_rainha++;
    } while (movimentos_rainha <= MOVIMENTOS_RAINHA);

    return 0;
}