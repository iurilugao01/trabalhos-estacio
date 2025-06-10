#include <stdio.h>

int main() {
    // Definindo o número de casas a serem movidas
    const int casasTorre = 3;   // Movimento da Torre
    const int casasBispo = 2;    // Movimento do Bispo
    const int casasRainha = 5;   // Movimento da Rainha

    // Torre: 3 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Bispo: 2 casas na diagonal (cima e direita)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // Rainha: 5 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);

    printf("\nMovimento do Cavalo:\n");
    
    const int movimentosCavalo = 1; 
    
    for (int i = 0; i < movimentosCavalo; i++) {
        
        for (int m = 0; m < 2; m++) { // O Cavalo se move 2 casas para baixo e 1 casa para a esquerda
            printf("Baixo\n"); 
        }
        printf("Esquerda\n"); 
    }

    return 0;
}
