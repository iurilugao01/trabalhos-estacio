#include <stdio.h>

int main() {
    char nomeCidade1[20], nomeCidade2[20], cod[20], cod2[20], estado[20], estado2[20]; 
    int pontosTuristicos1;
    float populacao1, area1, pib1, densidade1, pibPerCapta1;
    int pontosTuristicos2;
    float populacao2, area2, pib2, densidade2, pibPerCapta2;

    printf("Carta 1\n");

    printf("\nEstado: ");
    scanf("%s", &estado);

    printf("\nCódigo: "); 
    scanf("%s", &cod);

    printf("\nNome da Cidade: "); 
    scanf("%s", &nomeCidade1); 

    printf("\nPopulação: "); 
    scanf("%f", &populacao1); 

    printf("\nÁrea: "); 
    scanf("%f", &area1); 

    printf("\nPIB: "); 
    scanf("%f", &pib1); 

    printf("\nQuantidade de Pontos Turisticos: "); 
    scanf("%i", &pontosTuristicos1); 
    
    densidade1 = (float)populacao1 / area1; 
    pibPerCapta1 = (float)pib1 / populacao1; 

    printf("\n\nCarta 2]n");

    printf("\nEstado: ");
    scanf("%s", &estado2);

    printf("\nCódigo: ");
    scanf("%s", &cod2);

    printf("\nNome da Cidade: "); 
    scanf("%s", &nomeCidade2); 

    printf("\nPopulação: "); 
    scanf("%f", &populacao2); 

    printf("\nÁrea: "); 
    scanf("%f", &area2); 

    printf("\nPIB: " ); 
    scanf("%f", &pib2); 

    printf("\nQuantidade de Pontos Turisticos: "); 
    scanf("%i", &pontosTuristicos2); 
    
    densidade2 = (float)populacao2 / area2; 
    pibPerCapta2 = (float)pib2 / populacao2; 
    
    printf("\n\nCOMPARAÇÃO: Densidade Populacional\n");

    printf("\nDensidade Populacional 1: %f", densidade1);
    printf("\nDensidade Populacional 2: %f", densidade2);
    if (densidade1 < densidade2) {
        printf("\nVencedor: CARTA 1 - %s\n", nomeCidade1);
    } else {
        printf("\nVencedor: CARTA 2 - %s\n", nomeCidade2);
    };

    return 0; 
} 
