#include <stdio.h>

int main() {
    // Definindo o número de casas a serem movidas
    const int casasTorre = 3;
    const int casasBispo = 2;
    const int casasRainha = 5;

    // Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Bispo: 5 casas na diagonal (cima e direita)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);

    return 0;
}
