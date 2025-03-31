#include <stdio.h>

int main() {
    char carta1[10];
    char estado1[50];
    char cidade1[50];
    int pontos_turisticos1;
    int populacao1;
    float area_km2_1;
    float PIB1;

    char carta2[10];
    char estado2[50];
    char cidade2[50];
    int pontos_turisticos2;
    int populacao2;
    float area_km2_2;
    float PIB2;

    printf("Digite o Codigo da Carta: \n");
    scanf(" %s", carta1);

    printf("Digite o Estado: \n");
    scanf(" %s", estado1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", cidade1);

    printf("Digite o Número da População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área em km²: \n");
    scanf("%f", &area_km2_1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos1);


    printf("Digite o Codigo da Carta: \n");
    scanf(" %s", carta2);

    printf("Digite o Estado: \n");
    scanf(" %s", estado2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite o Número da População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área em km²: \n");
    scanf("%f", &area_km2_2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Estado: %s - Carta: %s - Cidade: %s\n", estado1, carta1, cidade1);
    printf("População: %d - Área: %.2f km²\n", populacao1, area_km2_1);
    printf("PIB: %.2f - Pontos Turísticos: %d\n", PIB1, pontos_turisticos1);

    printf("Estado: %s - Carta: %s - Cidade: %s\n", estado2, carta2, cidade2);
    printf("População: %d - Área: %.2f km²\n", populacao2, area_km2_2);
    printf("PIB: %.2f - Pontos Turísticos: %d\n", PIB2, pontos_turisticos2);

    return 0;
}