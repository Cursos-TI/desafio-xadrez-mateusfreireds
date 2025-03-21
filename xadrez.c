#include <stdio.h>

// Constantes para o número de movimentos de cada peça
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8
#define MOVIMENTOS_CAVALO_VERTICAL 2
#define MOVIMENTOS_CAVALO_HORIZONTAL 1

// Funções recursivas para movimento das peças
void movimentoTorre(int movimentos) {
    // Caso base: quando não há mais movimentos
    if (movimentos <= 0) return;
    
    printf("Direita\n");
    // Chamada recursiva com decremento
    movimentoTorre(movimentos - 1);
}

void movimentoBispo(int vertical, int horizontal, int limite) {
    // Caso base: quando atingir o limite de movimentos
    if (vertical >= limite) return;
    
    printf("Cima, Direita\n");
    // Chamada recursiva incrementando a posição
    movimentoBispo(vertical + 1, horizontal + 1, limite);
}

void movimentoRainha(int movimentos) {
    // Caso base: quando não há mais movimentos
    if (movimentos <= 0) return;
    
    printf("Esquerda\n");
    // Chamada recursiva com decremento
    movimentoRainha(movimentos - 1);
}

void movimentoCavalo(int maxVertical, int maxHorizontal) {
    // Loop externo para movimento vertical
    for (int vertical = 0; vertical < maxVertical; vertical++) {
        // Movimento para cima
        printf("Cima\n");
        
        // Loop interno para movimento horizontal quando atingir a altura desejada
        if (vertical == maxVertical - 1) {
            for (int horizontal = 0; horizontal < maxHorizontal; horizontal++) {
                printf("Direita\n");
            }
        }
    }
}

int main() {
    // Simulação do movimento da Torre (recursivo)
    printf("\n---------- Movimento da Torre ----------\n");
    movimentoTorre(MOVIMENTOS_TORRE);

    // Simulação do movimento do Bispo (recursivo com dois parâmetros)
    printf("\n---------- Movimento do Bispo ----------\n");
    movimentoBispo(0, 0, MOVIMENTOS_BISPO);

    // Simulação do movimento da Rainha (recursivo)
    printf("\n---------- Movimento da Rainha ----------\n");
    movimentoRainha(MOVIMENTOS_RAINHA);

    // Simulação do movimento do Cavalo (loops aninhados)
    printf("\n---------- Movimento do Cavalo ----------\n");
    movimentoCavalo(MOVIMENTOS_CAVALO_VERTICAL, MOVIMENTOS_CAVALO_HORIZONTAL);

    return 0;
}