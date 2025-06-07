#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Carta 1
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf(" %3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf(" %3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibe os dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);

    return 0;
}
