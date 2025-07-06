#include <stdio.h>
#include <string.h>

int main() {
    /*
    Essa função lê os dados de duas cartas do jogo Super Trunfo e imprime na tela.

    Retorna: 0
    */

    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];

    unsigned long int pop1, pop2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    printf("Digite o estado da carta 1: ");
    scanf("%s", estado1);

    printf("Digite o código da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade 1: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a população da cidade 1: ");
    scanf("%lu", &pop1);

    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontos1);

    printf("\n");

    printf("Digite o estado da carta 2: ");
    scanf("%s", estado2);

    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população da cidade 2: ");
    scanf("%lu", &pop2);

    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontos2);

    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;

    float pib_per_capita1 = (pib1 * 1e9) / pop1;
    float pib_per_capita2 = (pib2 * 1e9) / pop2;

    float super_poder1 = (float)pop1 + area1 + (pib1 * 1e9) + pontos1 + pib_per_capita1 + (1.0 / dens1);
    float super_poder2 = (float)pop2 + area2 + (pib2 * 1e9) + pontos2 + pib_per_capita2 + (1.0 / dens2);

    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\n--- COMPARAÇÃO ---\n");
    printf("População: Carta %d venceu (%d)\n", pop1 > pop2 ? 1 : 2, pop1 > pop2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos1 > pontos2 ? 1 : 2, pontos1 > pontos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", dens1 < dens2 ? 1 : 2, dens1 < dens2 ? 1 : 0); // menor vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", pib_per_capita1 > pib_per_capita2 ? 1 : 2, pib_per_capita1 > pib_per_capita2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", super_poder1 > super_poder2 ? 1 : 2, super_poder1 > super_poder2 ? 1 : 0);

    return 0;
}
