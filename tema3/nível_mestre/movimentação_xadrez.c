#include <stdio.h>

// Movimento da Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); 
    }
}

// Movimento do Bispo
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais > 0) {
        for (int i = 0; i < casasHorizontais; i++) {
            printf("Direita\n");
        }
        printf("Cima\n");
        moverBispo(casasVerticais - 1, casasHorizontais);
    }
}

// Movimento da Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); 
    }
}

// Movimento do Cavalo
void moverCavalo() {
    for (int i = 0; i < 2; i++) { // Movimento vertical (2 casas para cima)
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) { // Movimento horizontal (1 casa para a direita)
        printf("Direita\n");
    }
}

int main() {
    // Número de casas a serem movidas
    const int casasTorre = 3;   
    const int casasBispo = 2;    
    const int casasRainha = 5;   

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo); // O Bispo se move 2 casas na diagonal
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
