#include <stdio.h>

int main() {
    // Variáveis para o funcionamento do código
    char estado1[40], estado2[40];
    char codigocarta1[2], codigocarta2[2];
    char nomecidade1[40], nomecidade2[40];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontoturistico1, pontoturistico2;

    printf("    Carta 1    \n");

    printf("Digite o nome do 1° estado que deseja: ");
    scanf("%s", &estado1);

    printf("Digite o código da Carta 1 (ex: A1, B2): ");
    scanf("%s", &codigocarta1);

    printf("Digite o nome da 1° Cidade: ");
    scanf("%s", &nomecidade1);

    printf("Digite população da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1:");
    scanf("%f", &PIB1);

    printf("Digite um ponto turistico da Carta 1: ");
    scanf("%d", &pontoturistico1);

    printf("\n   Preenchendo a Carta 2   \n");

    printf("Digite o nome do 2° estado que deseja: ");
    scanf("%s", &estado2);

    printf("Digite o código da Carta 2 (ex: A1, B2): ");
    scanf("%s", &codigocarta2);

    printf("Digite o nome da 2° Cidade: ");
    scanf("%s", &nomecidade2);

    printf("Digite população da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2:");
    scanf("%f", &PIB2);

    printf("Digite um ponto turistico da Carta 2: ");
    scanf("%d", &pontoturistico2);






    return 0;
}
