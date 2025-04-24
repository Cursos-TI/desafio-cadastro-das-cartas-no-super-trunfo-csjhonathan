#include <stdio.h>

int main() {
    char estado1, codigo1[5], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    char estado2, codigo2[5], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    printf("Digite os dados da primeira carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = pib1 * 1000000000 / populacao1; 
    float pib_per_capita2 = pib2 * 1000000000 / populacao2;

    printf("\nCarta 1: %s (%c)\n", cidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    printf("\nCarta 2: %s (%c)\n", cidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
