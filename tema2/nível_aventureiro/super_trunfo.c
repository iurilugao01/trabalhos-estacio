#include <stdio.h>

int main() {
    int opcao;
    char nomeCidade1[20], nomeCidade2[20], cod1[20] = "A01", cod2[20] = "B02", estado1[20], estado2[20]; 
    int pontosTuristicos1 = 12;
    float populacao1 = 1200.0, area1 = 2300.0, pib1 = 1500.0, densidade1, pibPerCapta1;
    int pontosTuristicos2 = 15;
    float populacao2 = 2000.0, area2 = 3200.0, pib2 = 2000.0, densidade2, pibPerCapta2;
    
    densidade1 = (float)populacao1 / area1; 
    densidade2 = (float)populacao2 / area2; 

    printf("Selecione o atributo a ser comparado\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%i", &opcao);
    
    switch (opcao)
    {
    case 1:
    printf("País 1: %s / País 2: %s\n", cod1, cod2);
    printf("População:\n");
    printf("Carta 1: %f / Carta 2: %f\n", populacao1, populacao2);
    if (populacao1 > populacao2) {
        printf("CARTA 1 VENCEU!!");
    }else{
        printf("CARTA 2 VENCEU!!");
    };
    if (populacao1 == populacao2) {
        printf("EMPATE");
    };
        break;
    
    case 2:
    printf("País 1: %s / País 2: %s\n", cod1, cod2);
    printf("Área:\n");
    printf("Carta 1: %f / Carta 2: %f\n", area1, area2);
    if (area1 > area2) {
        printf("CARTA 1 VENCEU!!");
    }else{
        printf("CARTA 2 VENCEU!!");
    };
    if (area1 == area2) {
        printf("EMPATE");
    };
        break;

    case 3:
    printf("País 1: %s / País 2: %s\n", cod1, cod2);
    printf("PIB:\n");
    printf("Carta 1: %f / Carta 2: %f\n", pib1, pib2);
    if (pib1 > pib2) {
        printf("CARTA 1 VENCEU!!");
    }else{
        printf("CARTA 2 VENCEU!!");
    };
    if (pib1 == pib2) {
        printf("EMPATE");
    };
        break;

    case 4:
    printf("País 1: %s / País 2: %s\n", cod1, cod2);
    printf("Pontos turisticos:\n");
    printf("Carta 1: %i / Carta 2: %i\n", pontosTuristicos1, pontosTuristicos2);
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("CARTA 1 VENCEU!!");
    }else{
        printf("CARTA 2 VENCEU!!");
    };
    if (pontosTuristicos1 == pontosTuristicos2) {
        printf("EMPATE");
    };
        break;

    case 5:
    printf("País 1: %s / País 2: %s\n", cod1, cod2);
    printf("Densidade:\n");
    printf("Carta 1: %f / Carta 2: %f\n", densidade1, densidade2);
    if (densidade1 < densidade2) {
        printf("CARTA 1 VENCEU!!");
    }else{
        printf("CARTA 2 VENCEU!!");
    };
    if (densidade1 == densidade2) {
        printf("EMPATE");
    };
        break;

    default:
    printf("Insira uma opção válida");     
        break;
    }

    return 0; 
} 
