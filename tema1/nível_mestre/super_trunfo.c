#include <stdio.h>

int main() {
    char nomeCidade1[20], nomeCidade2[20], cod[20], cod2[20], estado[20], estado2[20]; 
    int pontosTuristicos1;
    float populacao1, area1, pib1, densidade1, pibPerCapta1;
    int pontosTuristicos2;
    float populacao2, area2, pib2, densidade2, pibPerCapta2;
    double superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapta1 + densidade1; 
    double superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapta2 + densidade2;

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

    printf("\n\nCarta 2");

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
    
    printf("\n\nCARTA 1:\n"); 
    printf("\nNome: %s", nomeCidade1);
    printf("\nPopulação: %f", populacao1); 
    printf("\nÁrea: %f km²", area1); 
    printf("\nPIB: R$ %f", pib1); 
    printf("\nPontos Turisticos: %i", pontosTuristicos1); 
    printf("\nDensidade Populacional: %f", densidade1); 
    printf("\nPIB per Capta: %f", pibPerCapta1); 
    printf("\nSuper Poder (soma de todos os atributos): %lf", superPoder1);

    printf("\n\nCARTA 2:\n"); 
    printf("\nNome: %s", nomeCidade2); 
    printf("\nPopulação: %f", populacao2); 
    printf("\nÁrea: %f km²", area2); 
    printf("\nPIB: R$ %f", pib2); 
    printf("\nPontos Turisticos: %i", pontosTuristicos2); 
    printf("\nDensidade Populacional: %f", densidade2); 
    printf("\nPIB per Capta: %f", pibPerCapta2); 
    printf("\nSuper Poder (soma de todos os atributos): %lf", superPoder2);

    printf("\n\nCOMPARAÇÃO:\n");
    
    printf("\nPopulação 1: %f", populacao1);
    printf("\nPopulação 2: %f", populacao2);
    if (populacao1 > populacao2) {
        printf("\nVencedor: CARTA 1\n");
    } else {
        printf("\nVencendor: Carta 2\n");
    };
    
    printf("\nArea 1: %f km²", area1);
    printf("\nArea 2: %f km²", area2);
    if (area1 > area2) {
        printf("\nVencedor: CARTA 1\n");
    } else {
        printf("\nVencedor: CARTA 2\n");
    };

    printf("\nPIB 1: R$ %f", pib1);
    printf("\nPIB 2: R$ %f", pib2);
    if (pib1 > pib2) {
        printf("\nVencedor: CARTA 1\n");
    } else {
        printf("\nVencedor: CARTA 2\n");
    };

    printf("\nPontos Turisticos 1: %i", pontosTuristicos1);
    printf("\nPontos Turisticos 2: %i", pontosTuristicos2);
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("\nVencedor: CARTA 1\n");
    } else {
        printf("\nVencedor: CARTA 2\n");
    };

    printf("\nDensidade Populacional 1: %f", densidade1);
    printf("\nDensidade Populacional 2: %f", densidade2);
    if (densidade1 < densidade2) {
        printf("\nVencedor: CARTA 1\n");
    } else {
        printf("\nVencedor: CARTA 2\n");
    };

    printf("\nPIB per Capta 1: %f", pibPerCapta1);
    printf("\nPIB per Capta 2: %f", pibPerCapta2);
    if (pibPerCapta1 > pibPerCapta2) {
        printf("\nCARTA 1\n");
    } else {
        printf("\nCarta 2\n");
    };

    printf("\nSuper Poder 1: %lf", superPoder1);
    printf("\nSuper Poder 2: %lf", superPoder2);
    if (superPoder1 > superPoder2) {
        printf("\nCARTA 1\n");
    } else {
        printf("\nCarta 2\n");
    };

    return 0; 
} 
