#include <stdio.h>

int main() {
    // Variáveis principais
    unsigned long populacao1, populacao2;               // Só valores positivos e grandes
    unsigned int pontosturisticos1, pontosturisticos2;  // Só valores positivos
    float area1, area2;                                 // Valores decimais
    double pib1, pib2;                                  // Em bilhões 
    char cidade1[30], cidade2[30];
    char estado1, estado2; 
    char codigo1[4], codigo2[4];

    // Entrada da primeira carta
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espaco): ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%lf", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%u", &pontosturisticos1);

    // Entrada da segunda carta
    printf("\nDigite a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaco): ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%lf", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%u", &pontosturisticos2);    

    // Cálculos 
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;

    float pibpercapita1 = (float)((pib1 * 1e9) / populacao1);
    float pibpercapita2 = (float)((pib2 * 1e9) / populacao2);

    // Cálculo do Super Poder
    float superpoder1 = (float) populacao1 + area1 + (float) pib1 + pontosturisticos1 
                      + pibpercapita1 + (1.0f / densidade1);
    float superpoder2 = (float) populacao2 + area2 + (float) pib2 + pontosturisticos2 
                      + pibpercapita2 + (1.0f / densidade2);

    // Saída das cartas 
    printf("\nCarta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %u\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n\nCarta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %u\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações
    printf("\n\nComparação de Cartas:\n\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); 
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}