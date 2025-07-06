#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define NAVIO 3
#define AGUA 0

// Função para verificar se as posições estão livres
int pode_posicionar(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int dx, int dy) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int l = linha + i * dx;
        int c = coluna + i * dy;
        if (l < 0 || l >= TAMANHO_TABULEIRO || c < 0 || c >= TAMANHO_TABULEIRO)
            return 0; // fora do tabuleiro
        if (tabuleiro[l][c] == NAVIO)
            return 0; // já ocupado
    }
    return 1;
}

// Função para posicionar navio dado direção dx/dy
void posicionar_navio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int dx, int dy) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int l = linha + i * dx;
        int c = coluna + i * dy;
        tabuleiro[l][c] = NAVIO;
    }
}

int main() {
    // Inicializa o tabuleiro com água (0)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // --- NAVIO 1: Horizontal (linha 1, coluna 2 até 4) ---
    int l1 = 1, c1 = 2;
    if (pode_posicionar(tabuleiro, l1, c1, 0, 1))
        posicionar_navio(tabuleiro, l1, c1, 0, 1);
    else {
        printf("Erro ao posicionar navio 1\n");
        return 1;
    }

    // --- NAVIO 2: Vertical (linha 6 a 8, coluna 5) ---
    int l2 = 6, c2 = 5;
    if (pode_posicionar(tabuleiro, l2, c2, 1, 0))
        posicionar_navio(tabuleiro, l2, c2, 1, 0);
    else {
        printf("Erro ao posicionar navio 2\n");
        return 1;
    }

    // --- NAVIO 3: Diagonal ↘ (linha 0, coluna 0 até [2][2]) ---
    int l3 = 0, c3 = 0;
    if (pode_posicionar(tabuleiro, l3, c3, 1, 1))
        posicionar_navio(tabuleiro, l3, c3, 1, 1);
    else {
        printf("Erro ao posicionar navio 3\n");
        return 1;
    }

    // --- NAVIO 4: Diagonal ↙ (linha 2, coluna 7 até [4][5]) ---
    int l4 = 2, c4 = 7;
    if (pode_posicionar(tabuleiro, l4, c4, 1, -1))
        posicionar_navio(tabuleiro, l4, c4, 1, -1);
    else {
        printf("Erro ao posicionar navio 4\n");
        return 1;
    }

    // --- Exibe o tabuleiro ---
    printf("Tabuleiro (0 = água, 3 = navio):\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
