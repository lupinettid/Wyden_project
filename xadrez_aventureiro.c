#include <stdio.h>

int main() {
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // ========================

    printf("Movimentação da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ========================

    printf("Movimentação do Bispo:\n");
    int contador_bispo = 0;
    while (contador_bispo < casas_bispo) {
        printf("Cima Direita\n");
        contador_bispo++;
    }
    printf("\n");

    // ========================

    printf("Movimentação da Rainha:\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < casas_rainha);
    printf("\n");

    // ======================== 

    printf("Movimentação do Cavalo:\n");

    int movimentos_cavalo = 1;

    for (int i = 0; i < movimentos_cavalo; i++) {
        int j = 0;
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");
    }

    return 0;
}
