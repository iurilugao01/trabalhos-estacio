#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_HABILIDADE 5

// Função para iniciar o tabuleiro com água 
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // 0 = água
        }
    }
}

// Função para posicionar um navio na horizontal
int posicionarNavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    if (coluna + TAMANHO_HABILIDADE > TAMANHO_TABULEIRO) {
        return 0; 
    }
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        if (tabuleiro[linha][coluna + i] != 0) {
            return 0; 
        }
    }
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        tabuleiro[linha][coluna + i] = 3; // 3 representa parte do navio
    }
    return 1; 
}

// Função para criar a matriz de habilidade em forma de cone
void criarMatrizCone(int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            if (j >= (TAMANHO_HABILIDADE / 2) - i && j <= (TAMANHO_HABILIDADE / 2) + i) {
                matriz[i][j] = 1; // Área afetada
            } else {
                matriz[i][j] = 0; // Área não afetada
            }
        }
    }
}

// Função para criar a matriz de habilidade em forma de cruz
void criarMatrizCruz(int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            if (i == TAMANHO_HABILIDADE / 2 || j == TAMANHO_HABILIDADE / 2) {
                matriz[i][j] = 1; // Área afetada
            } else {
                matriz[i][j] = 0; // Área não afetada
            }
        }
    }
}

// Função para criar a matriz de habilidade em forma de octaedro
void criarMatrizOctaedro(int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            if (i + j >= TAMANHO_HABILIDADE / 2 && i - j <= TAMANHO_HABILIDADE / 2 && j - i <= TAMANHO_HABILIDADE / 2) {
                matriz[i][j] = 1; // Área afetada
            } else {
                matriz[i][j] = 0; // Área não afetada
            }
        }
    }
}

// Função para sobrepor a matriz de habilidade ao tabuleiro
void aplicarHabilidade(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE], int linhaOrigem, int colunaOrigem) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            int linhaTabuleiro = linhaOrigem + i;
            int colunaTabuleiro = colunaOrigem + j;
            // Verifica se está dentro dos limites do tabuleiro
            if (linhaTabuleiro < TAMANHO_TABULEIRO && colunaTabuleiro < TAMANHO_TABULEIRO && matriz[i][j] == 1) {
                tabuleiro[linhaTabuleiro][colunaTabuleiro] = 5; // 5 = área afetada pela habilidade
            }
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%2d ", tabuleiro[i][j]); 
        }
        printf("\n"); 
    }
}

int main() {
    // Declaração do tabuleiro
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int matrizCone[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
    int matrizCruz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
    int matrizOctaedro[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];

    // Inicializa o tabuleiro
    inicializarTabuleiro(tabuleiro);

    // Posiciona navios no tabuleiro
    posicionarNavioHorizontal(tabuleiro, 2, 1);
    posicionarNavioHorizontal(tabuleiro, 5, 3);

    // Cria as matrizes de habilidade
    criarMatrizCone(matrizCone);
    criarMatrizCruz(matrizCruz);
    criarMatrizOctaedro(matrizOctaedro);

    // Aplica as habilidades no tabuleiro
    aplicarHabilidade(tabuleiro, matrizCone, 0, 2); // Cone na posição (0, 2)
    aplicarHabilidade(tabuleiro, matrizCruz, 3, 2); // Cruz na posição (3, 2)
    aplicarHabilidade(tabuleiro, matrizOctaedro, 4, 2); // Octaedro na posição (4, 2)

    printf("Tabuleiro do Batalha Naval com Habilidades:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
