#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_TABULEIRO 10
#define NAVIO 3
#define AGUA 0
#define HABILIDADE 5

// Função para imprimir o tabuleiro
void imprimir_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para aplicar uma matriz de habilidade ao tabuleiro
void aplicar_habilidade(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
                        int habilidade[7][7], int origem_linha, int origem_coluna) {
    int tam = 7;
    int offset = tam / 2;

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (habilidade[i][j] == 1) {
                int l = origem_linha - offset + i;
                int c = origem_coluna - offset + j;
                if (l >= 0 && l < TAMANHO_TABULEIRO && c >= 0 && c < TAMANHO_TABULEIRO) {
                    if (tabuleiro[l][c] != NAVIO)
                        tabuleiro[l][c] = HABILIDADE;
                }
            }
        }
    }
}

// Gera matriz cone (ponta para baixo)
void gerar_matriz_cone(int matriz[7][7]) {
    for (int i = 0; i < 7; i++) {
        int inicio = 3 - i < 0 ? 0 : 3 - i;
        int fim = 3 + i > 6 ? 6 : 3 + i;
        for (int j = inicio; j <= fim; j++) {
            matriz[i][j] = 1;
        }
    }
}

// Gera matriz cruz (linha + coluna)
void gerar_matriz_cruz(int matriz[7][7]) {
    for (int i = 0; i < 7; i++) {
        matriz[i][3] = 1; // coluna central
        matriz[3][i] = 1; // linha central
    }
}

// Gera matriz octaedro (losango)
void gerar_matriz_octaedro(int matriz[7][7]) {
    for (int i = 0; i < 7; i++) {
        int meio = 3;
        int delta = abs(meio - i);
        for (int j = delta; j < 7 - delta; j++) {
            matriz[i][j] = 1;
        }
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Posicionando um navio horizontalmente como exemplo
    tabuleiro[2][2] = NAVIO;
    tabuleiro[2][3] = NAVIO;
    tabuleiro[2][4] = NAVIO;

    // Matriz de habilidade 7x7 (inicializa com 0)
    int cone[7][7] = {0};
    int cruz[7][7] = {0};
    int octaedro[7][7] = {0};

    // Gerando as formas
    gerar_matriz_cone(cone);
    gerar_matriz_cruz(cruz);
    gerar_matriz_octaedro(octaedro);

    // Aplicando as habilidades ao tabuleiro com origens diferentes
    aplicar_habilidade(tabuleiro, cone, 3, 3);        // Cone em (3,3)
    aplicar_habilidade(tabuleiro, cruz, 6, 6);        // Cruz em (6,6)
    aplicar_habilidade(tabuleiro, octaedro, 5, 1);    // Octaedro em (5,1)

    // Exibe o resultado
    imprimir_tabuleiro(tabuleiro);

    return 0;
}
