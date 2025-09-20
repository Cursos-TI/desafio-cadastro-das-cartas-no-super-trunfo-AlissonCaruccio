#include <stdio.h>

int main() {
    int populacao1;
    int populacao2; 
    int pontosturisticos1; 
    int pontosturisticos2;
    float area1; 
    float area2; 
    float pib1; 
    float pib2;
    char cidade1[30];
    char cidade2[30];
    char estado1; 
    char estado2; 
    char codigo1[4];
    char codigo2[4];

    // primeira carta
    printf("Digite a letra do primeiro estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espaco ex: Bahia): ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    
    // segunda carta
    printf("\nDigite a letra do segundo estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaco ex: Fortaleza): ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);    
    
    
    // cálculos
    float densidade1 = (float) populacao1 / (float) area1;
    float densidade2 = (float) populacao2 / (float) area2;

    float pibpercapita1 = (float) pib1 / (float) populacao1;
    float pibpercapita2 = (float) pib2 / (float) populacao2;

     
    
    printf("\nCarta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f bilhões de reais\n", pibpercapita1);

    printf("\n\nCarta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f bilhões de reais\n", pibpercapita2);

    return 0;
}