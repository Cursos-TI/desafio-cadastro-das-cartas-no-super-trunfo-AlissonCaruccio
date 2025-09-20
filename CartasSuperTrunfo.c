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
    char codigo1;
    char codigo2;
        
    // prieimra carta
    printf("Digite o nome da primeira cidade (sem espaco): \n");
    scanf("%s", cidade1);

    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (número): \n");
    scanf(" %c", &codigo1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    
    //Segunda carta

    printf("Digite o nome da segunda cidade (sem espaço): \n");
    scanf("%s", cidade2);

    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (número): \n");
    scanf(" %c", &codigo2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);    
    
    
     // mostra os dados
    printf("\nPRIMEIRA CARTA:\n");
    printf("Nome da cidade: %s \n", cidade1);
    printf("Estado: %c \n", estado1);
    printf("Codigo da carta: %c \n", codigo1);
    printf("Populacao: %d \n", populacao1);
    printf("Area em Km: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos turisticos: %d \n", pontosturisticos1);

    printf("\nSEGUNDA CARTA:\n");
    printf("Nome da cidade: %s \n", cidade2);
    printf("Estado: %c \n", estado2);
    printf("Codigo da carta: %c \n", codigo2);
    printf("Populacao: %d \n", populacao2);
    printf("Area em Km: %.2f \n", area2);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos turisticos: %d \n", pontosturisticos2);



 return 0;
}