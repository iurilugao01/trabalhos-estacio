#include <stdio.h>

int main() {
    int opcao1, opcao2;
    char nomeCidade1[20] = "Cidade A", nomeCidade2[20] = "Cidade B";
    char cod1[20] = "A01", cod2[20] = "B02";
    int pontosTuristicos1 = 12, pontosTuristicos2 = 15;
    float populacao1 = 1200.0, area1 = 2300.0, pib1 = 1500.0;
    float populacao2 = 2000.0, area2 = 3200.0, pib2 = 2000.0;
    float densidade1 = populacao1 / area1, densidade2 = populacao2 / area2;

    // Exibe o menu para escolher o primeiro atributo

    printf("Selecione o primeiro atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("----------------------------\n");
    scanf("%i", &opcao1);
    
    while (opcao1 < 1 || opcao1 > 5) {
        printf("Opção inválida! Por favor, escolha um atributo válido (1-5):\n");
        scanf("%i", &opcao1);
    }

    // Exibe o menu para escolher o segundo atributo, excluindo o primeiro

    printf("Selecione o segundo atributo a ser comparado (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i){
                case 1: printf("1. População\n"); break;
                case 2: printf("2. Área\n"); break;
                case 3: printf("3. PIB\n"); break;
                case 4: printf("4. Número de pontos turísticos\n"); break;
                case 5: printf("5. Densidade demográfica\n"); break;
            }
        }
    }
    printf("----------------------------\n");
    scanf("%i", &opcao2);
    
    while (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1) {
        printf("Opção inválida! Por favor, escolha um atributo válido diferente do primeiro:\n");
        scanf("%i", &opcao2);
    }

    // Variáveis para armazenar valores dos atributos escolhidos

    float attr1_val1, attr1_val2, attr2_val1, attr2_val2;
    float soma1, soma2;
    int attr1_vencedor = 0; // 0: empate, 1: carta1 vence, 2: carta2 vence
    int attr2_vencedor = 0;

    // Função para obter e mostrar valores do atributo 1

    printf("\nComparando %s (%s) e %s (%s)\n", nomeCidade1, cod1, nomeCidade2, cod2);

    switch (opcao1) {
        case 1:
            attr1_val1 = populacao1;
            attr1_val2 = populacao2;
            printf("Atributo 1: População - %s: %.2f / %s: %.2f\n", cod1, attr1_val1, cod2, attr1_val2);
            break;
        case 2:
            attr1_val1 = area1;
            attr1_val2 = area2;
            printf("Atributo 1: Área - %s: %.2f / %s: %.2f\n", cod1, attr1_val1, cod2, attr1_val2);
            break;
        case 3:
            attr1_val1 = pib1;
            attr1_val2 = pib2;
            printf("Atributo 1: PIB - %s: %.2f / %s: %.2f\n", cod1, attr1_val1, cod2, attr1_val2);
            break;
        case 4:
            attr1_val1 = (float)pontosTuristicos1;
            attr1_val2 = (float)pontosTuristicos2;
            printf("Atributo 1: Pontos Turísticos - %s: %d / %s: %d\n", cod1, pontosTuristicos1, cod2, pontosTuristicos2);
            break;
        case 5:
            attr1_val1 = densidade1;
            attr1_val2 = densidade2;
            printf("Atributo 1: Densidade Demográfica - %s: %.4f / %s: %.4f\n", cod1, attr1_val1, cod2, attr1_val2);
            break;
        default:
            printf("Erro inesperado no primeiro atributo.\n");
            return 1;
    }

    // Função para obter e mostrar valores do atributo 2

    switch (opcao2) {
        case 1:
            attr2_val1 = populacao1;
            attr2_val2 = populacao2;
            printf("Atributo 2: População - %s: %.2f / %s: %.2f\n", cod1, attr2_val1, cod2, attr2_val2);
            break;
        case 2:
            attr2_val1 = area1;
            attr2_val2 = area2;
            printf("Atributo 2: Área - %s: %.2f / %s: %.2f\n", cod1, attr2_val1, cod2, attr2_val2);
            break;
        case 3:
            attr2_val1 = pib1;
            attr2_val2 = pib2;
            printf("Atributo 2: PIB - %s: %.2f / %s: %.2f\n", cod1, attr2_val1, cod2, attr2_val2);
            break;
        case 4:
            attr2_val1 = (float)pontosTuristicos1;
            attr2_val2 = (float)pontosTuristicos2;
            printf("Atributo 2: Pontos Turísticos - %s: %d / %s: %d\n", cod1, pontosTuristicos1, cod2, pontosTuristicos2);
            break;
        case 5:
            attr2_val1 = densidade1;
            attr2_val2 = densidade2;
            printf("Atributo 2: Densidade Demográfica - %s: %.4f / %s: %.4f\n", cod1, attr2_val1, cod2, attr2_val2);
            break;
        default:
            printf("Erro inesperado no segundo atributo.\n");
            return 1;
    }

    // Função para determinar vencedor do atributo 1

    if (opcao1 == 5) { // Densidade demográfica - vence menor valor
        if (attr1_val1 < attr1_val2)
            attr1_vencedor = 1;
        else if (attr1_val2 < attr1_val1)
            attr1_vencedor = 2;
        else
            attr1_vencedor = 0;
    } else { // Outros atributos - vence maior valor
        if (attr1_val1 > attr1_val2)
            attr1_vencedor = 1;
        else if (attr1_val2 > attr1_val1)
            attr1_vencedor = 2;
        else
            attr1_vencedor = 0;
    }

    // Função para determinar vencedor do atributo 2

    if (opcao2 == 5) { // Densidade demográfica - vence menor valor
        if (attr2_val1 < attr2_val2)
            attr2_vencedor = 1;
        else if (attr2_val2 < attr2_val1)
            attr2_vencedor = 2;
        else
            attr2_vencedor = 0;
    } else { // Outros atributos - vence maior valor
        if (attr2_val1 > attr2_val2)
            attr2_vencedor = 1;
        else if (attr2_val2 > attr2_val1)
            attr2_vencedor = 2;
        else
            attr2_vencedor = 0;
    }

    // Soma dos atributos para cada carta

    soma1 = attr1_val1 + attr2_val1;
    soma2 = attr1_val2 + attr2_val2;

    // Exibe resultados da comparação dos atributos individualmente
    
    printf("\nResultado da comparação dos atributos individuais:\n");
    printf("Atributo 1 - Vencedor: ");
    if (attr1_vencedor == 1)
        printf("Carta 1 (%s)\n", cod1);
    else if (attr1_vencedor == 2)
        printf("Carta 2 (%s)\n", cod2);
    else
        printf("Empate\n");

    printf("Atributo 2 - Vencedor: ");
    if (attr2_vencedor == 1)
        printf("Carta 1 (%s)\n", cod1);
    else if (attr2_vencedor == 2)
        printf("Carta 2 (%s)\n", cod2);
    else
        printf("Empate\n");

    // Exibe soma dos valores
    printf("\nSoma dos atributos:\n");
    printf("Carta 1 (%s): %.4f\n", cod1, soma1);
    printf("Carta 2 (%s): %.4f\n", cod2, soma2);

    // Determina vencedor da rodada pela soma
    printf("\nResultado final:\n");
    if (soma1 > soma2)
        printf("Carta 1 (%s) venceu a rodada!\n", cod1);
    else if (soma2 > soma1)
        printf("Carta 2 (%s) venceu a rodada!\n", cod2);
    else
        printf("Empate!\n");

    return 0;
}

