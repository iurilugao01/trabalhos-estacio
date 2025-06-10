#include <stdio.h>

int main() {
    char nomeCidade[50]; //Váriavel de caracteres com limite de 50
    int populacao, area, pib, pontosTuristicos; //Váriaveis de números inteiros
    float densidade, pibPerCapta; //Váriaveis de ponto flutuante

    printf("SUPER TRUNFO\n"); //Mostra no términal o inicio do programa
    printf("Nome da Cidade:\n"); //Indica no terminal que o usuário tem que inserir o Nome da Cidade
    fgets(nomeCidade, sizeof(nomeCidade), stdin); //fgets lê o input do usuário no términal e armazena na váriavel, sizeof indica a quantidade de armazenamento necessária para armazenar um objeto do tipo do operando, stdin é o dispositivo de entrada padão

    printf("População:\n"); //Indica no terminal que o usuário tem que inserir a População
    scanf("%i", &populacao); //Input que vai armazenar um valor na váriavel populacao

    printf("Área:\n"); //Indica no terminal que o usuário tem que inserir a Área
    scanf("%i", &area); //Input que vai armazenar um valor na váriavel area

    printf("PIB:\n"); //Indica no terminal que o usuário tem que inserir o PIB
    scanf("%i", &pib); //Input que vai armazenar um valor na váriavel pib

    printf("Quantidade de Pontos Turisticos:\n"); //Indica no terminal que o usuário tem que inserir a Quantidade de Pontos Turisticos
    scanf("%i", &pontosTuristicos); //Input que vai armazenar um valor na váriavel pontosTuristicos
    
    densidade = (float)populacao / area; //Calculo da densidade
    pibPerCapta = (float)pib / populacao; //Calculo da PIB per capta

    printf("SUA CARTA:\n"); //
    printf("Nome: %s\n", nomeCidade); //Mostra para o usuário as informações que foram armazenadas em nomeCidade
    printf("População: %i\n", populacao); //Mostra para o usuário as informações que foram armazenadas em populacao
    printf("Área: %i\n", area); //Mostra para o usuário as informações que foram armazenadas em area
    printf("PIB: %i\n", pib); //Mostra para o usuário as informações que foram armazenadas em pib
    printf("Pontos Turisticos: %i\n", pontosTuristicos); //Mostra para o usuário as informações que foram armazenadas em pontosTuristicos
    printf("Densidade Populacional: %f\n", densidade); //Mostra a densidade populacional
    printf("PIB per Capta: %f\n", pibPerCapta); //Mostra o PIB per Capta

    return 0; //Demonstra que a operação foi finalizada corretamente
} //Fim da operação
