#include <stdio.h>

int main() {
    char carta[10];
    char estado[50];
    char cidade[50];
    int pontos_turisticos;
    int populacao;
    float area_km2;
    float PIB;

    printf("Digite o Carta: \n");
    scanf(" %s", carta);

    printf("Digite o Código da Estado: \n");
    scanf(" %s", estado);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", cidade);

    printf("Digite o Número da População: \n");
    scanf("%d", &populacao);

    printf("Digite a Área em km²: \n");
    scanf("%f", &area_km2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Estado: %s - Carta: %s - Cidade: %s\n", estado, carta, cidade);
    printf("População: %d - Área: %.2f km²\n", populacao, area_km2);
    printf("PIB: %.2f - Pontos Turísticos: %d\n", PIB, pontos_turisticos);

    return 0;
}
