#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Função para iniciar o tabuleiro com água 
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // 0 = agua
        }
    }
}

// Função para posicionar um navio na horizontal
int posicionarNavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    // Verifica se o navio cabe no tabuleiro
    if (coluna + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        return 0; 
    }
    // Verifica se já existe um navio na posição
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha][coluna + i] != 0) {
            return 0; // Sobreposição
        }
    }
    // Posiciona o navio
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha][coluna + i] = 3; // 3 representa parte do navio
    }
    return 1; 
}

// Função para posicionar um navio na vertical
int posicionarNavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    // Verifica se o navio cabe no tabuleiro
    if (linha + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        return 0; 
    }
    // Verifica se já existe um navio na posição
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha + i][coluna] != 0) {
            return 0; 
        }
    }
    // Posiciona o navio
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha + i][coluna] = 3; 
    }
    return 1; 
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime cada elemento do tabuleiro
        }
        printf("\n"); 
    }
}

int main() {
    
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    
    inicializarTabuleiro(tabuleiro);

    int linhaNavioHorizontal = 2; 
    int colunaNavioHorizontal = 1; 
    int linhaNavioVertical = 5; 
    int colunaNavioVertical = 3; 

    if (!posicionarNavioHorizontal(tabuleiro, linhaNavioHorizontal, colunaNavioHorizontal)) {
        printf("Erro ao posicionar o navio horizontal.\n");
    }
    if (!posicionarNavioVertical(tabuleiro, linhaNavioVertical, colunaNavioVertical)) {
        printf("Erro ao posicionar o navio vertical.\n");
    }

    printf("Tabuleiro do Batalha Naval:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
