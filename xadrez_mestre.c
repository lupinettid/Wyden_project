#include <stdio.h>

void moverTorre(int casas_restantes) {
    if (casas_restantes == 0) return;
    printf("Direita\n");
    moverTorre(casas_restantes - 1);
}

void moverRainha(int casas_restantes) {
    if (casas_restantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casas_restantes - 1);
}

void moverBispo(int casas) {
    if (casas == 0) return;

    printf("Cima Direita\n");

    for (int i = 0; i < 1; i++) {  
        for (int j = 0; j < 1; j++) {  
            printf("Movimento Aninhado: Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

void moverCavalo() {
    printf("Movimentação do Cavalo:\n");

    int movimentos = 1;  
    int i, j;

    for (i = 0; i < movimentos; i++) {
        for (j = 0; j < 3; j++) {
            if (j == 0 || j == 1) {
                printf("Cima\n"); 
                continue;
            }

            if (j == 2) {
                printf("Direita\n"); 
                break;
            }
        }
    }
}

int main() {
    int casas_torre = 5;
    int casas_bispo = 3;
    int casas_rainha = 4;

    // ========================
    printf("Movimentação da Torre:\n");
    moverTorre(casas_torre);
    printf("\n");

    // ========================
    printf("Movimentação do Bispo:\n");
    moverBispo(casas_bispo);
    printf("\n");

    // ========================
    printf("Movimentação da Rainha:\n");
    moverRainha(casas_rainha);
    printf("\n");

    // ========================
    moverCavalo();

    return 0;
}
