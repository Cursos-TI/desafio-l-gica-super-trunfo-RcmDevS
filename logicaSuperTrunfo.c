#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados de duas cartas, representando cidades
    char estado1[3] = "SP"; // Usando string para armazenar o estado
    char estado2[3] = "BA";
    char codigo1[4] = "A01"; // Código da carta
    char codigo2[4] = "B02";
    char nomeCidade1[50] = "São Paulo"; // Nome da cidade
    char nomeCidade2[50] = "Salvador";
    unsigned long int populacao1 = 12300000; // População da cidade
    unsigned long int populacao2 = 14985284;
    float area1 = 1521.11; // Área em km²
    float area2 = 706.8;
    float pib1 = 653.3; // PIB em bilhões de reais
    float pib2 = 629.5;
    int pontosTuristicos1 = 13; // Número de pontos turísticos
    int pontosTuristicos2 = 20;

    // Calcula a densidade populacional e o PIB per capita para a Carta 1
    float densidade1 = (float)populacao1 / area1; // Densidade populacional = População / Área
    float pibPerCapita1 = pib1 / populacao1; // PIB per capita = PIB / População

    // Calcula a densidade populacional e o PIB per capita para a Carta 2
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibe os dados e cálculos da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibe os dados e cálculos da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparação das Cartas usando o atributo "População"
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);

    // Determina a carta vencedora com base na população
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao1 < populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;

}