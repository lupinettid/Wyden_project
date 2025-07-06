#include <stdio.h>

int main() {
    /*
    Essa função lê os dados de duas cartas do jogo Super Trunfo e imprime na tela.

    Retorna: 0
    
    */
    char codigo_carta1[4], codigo_carta2[4];
    char estado1[2], estado2[2];
    char nome_cidade1[20], nome_cidade2[20];
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area_km1, pib1, area_km2, pib2;

    printf("Digite o estado da carta 1: ");
    scanf("%s", estado1);

    printf("Digite o estado da carta 2: ");
    scanf("%s", estado2);

    printf("Digite o código da carta 1: ");
    scanf("%s", codigo_carta1);

    printf("Digite o código da carta 2: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", nome_cidade1);

    printf("Digite o nome da cidade 2: ");
    scanf("%s", nome_cidade2);

    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 1: ");
    scanf("%f", &area_km1);

    printf("Digite a área da cidade 2: ");
    scanf("%f", &area_km2);

    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade 1: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a quantidade de pontos turísticos da cidade 2: ");
    scanf("%d", &pontos_turisticos2);

    /*
    Impressão dos dados das cartas como pedido no enunciado do desafio.
    */

    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area_km1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    
    return 0;
}