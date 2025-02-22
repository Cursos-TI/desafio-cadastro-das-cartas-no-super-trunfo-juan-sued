#include <stdio.h>

int main(){
    // Variáveis para a carta 1
    char nameStateOne[50];
    char cartCodeOne[3];
    char nameCityOne[50];
    int populationOne;
    float areaInKmQuadOne;
    float pibOne;
    int amountPointsTuristicsOne;

    // Variáveis para a carta 2
    char nameStateTwo[50];
    char cartCodeTwo[3];
    char nameCityTwo[50];
    int populationTwo;
    float areaInKmQuadTwo;
    float pibTwo;
    int amountPointsTuristicsTwo;

    // Cadastro das Cartas
    // Captura de dados para a carta 1
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", nameCityOne);
    printf("Digite o nome do estado em que se encontra a cidade %s: ", nameCityOne);
    scanf(" %[^\n]", nameStateOne);
    printf("Digite o código da carta %s: ", nameCityOne);
    scanf(" %[^\n]", cartCodeOne);
    printf("Digite a população de %s: ", nameCityOne);
    scanf("%d", &populationOne);
    printf("Digite a área em km² de %s: ", nameCityOne);
    scanf("%f", &areaInKmQuadOne);
    printf("Digite o PIB de %s: ", nameCityOne);
    scanf("%f", &pibOne);
    printf("Digite a quantidade de pontos turísticos de %s: ", nameCityOne);
    scanf("%d", &amountPointsTuristicsOne);
    printf("=======================================\n");

    // Limpar o buffer do stdin
    while (getchar() != '\n');

    // Captura de dados para a carta 2
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]", nameCityTwo);
    printf("Digite o nome do estado em que se encontra a cidade %s: ", nameCityTwo);
    scanf(" %[^\n]", nameStateTwo);
    printf("Digite o código da carta %s: ", nameCityTwo);
    scanf(" %[^\n]", cartCodeTwo);
    printf("Digite a população de %s: ", nameCityTwo);
    scanf("%d", &populationTwo);
    printf("Digite a área em km² de %s: ", nameCityTwo);
    scanf("%f", &areaInKmQuadTwo);
    printf("Digite o PIB de %s: ", nameCityTwo);
    scanf("%f", &pibTwo);
    printf("Digite a quantidade de pontos turísticos de %s: ", nameCityTwo);
    scanf("%d", &amountPointsTuristicsTwo);
    printf("=======================================\n");

    // Exibição dos Dados das Cartas
    // Carta 1
    printf("Dados da primeira carta:\n");
    printf("Cidade: %s\n", nameCityOne);
    printf("Estado: %s\n", nameStateOne);
    printf("Código: %s\n", cartCodeOne);
    printf("População: %d\n", populationOne);
    printf("Área (km²): %.2f\n", areaInKmQuadOne);
    printf("PIB: %.2f\n", pibOne);
    printf("Pontos Turísticos: %d\n", amountPointsTuristicsOne);
    printf("=======================================\n");

    // Carta 2
    printf("Dados da segunda carta:\n");
    printf("Cidade: %s\n", nameCityTwo);
    printf("Estado: %s\n", nameStateTwo);
    printf("Código: %s\n", cartCodeTwo);
    printf("População: %d\n", populationTwo);
    printf("Área (km²): %.2f\n", areaInKmQuadTwo);
    printf("PIB: %.2f\n", pibTwo);
    printf("Pontos Turísticos: %d\n", amountPointsTuristicsTwo);
    printf("=======================================\n");

    return 0;
}
