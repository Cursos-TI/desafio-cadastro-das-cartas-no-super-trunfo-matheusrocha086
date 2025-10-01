#include <stdio.h>

int main() {
    // Variáveis para o funcionamento do código
    char estado1[40], estado2[40];
    char codigocarta1[3], codigocarta2[3]; // 2 caracteres + '\0'
    char nomecidade1[40], nomecidade2[40];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontoturistico1, pontoturistico2;
    float densidade_populacional1, densidade_populacional2;
    float PIB_capita1, PIB_capita2;
    float superpoder1, superpoder2; // Super Poder de cada carta

    // Dados da carta 1
    printf("Digite o nome do 1° estado que deseja: ");
    scanf(" %[^\n]", estado1);

    printf("Digite o código da Carta 1 (ex: A1, B2): ");
    scanf("%s", codigocarta1);

    printf("Digite o nome da 1° Cidade: ");
    scanf(" %[^\n]", nomecidade1);

    printf("Digite população da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos da Carta 1: ");
    scanf("%d", &pontoturistico1);

    densidade_populacional1 = populacao1 / area1;
    PIB_capita1 = PIB1 / populacao1;

    superpoder1 = populacao1 + area1 + PIB1 + PIB_capita1 + (1.0 / densidade_populacional1) + pontoturistico1;

    // Dados da carta 2
    printf("\nDigite o nome do 2° estado que deseja: ");
    scanf(" %[^\n]", estado2);

    printf("Digite o código da Carta 2 (ex: A1, B2): ");
    scanf("%s", codigocarta2);

    printf("Digite o nome da 2° Cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite população da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos da Carta 2: ");
    scanf("%d", &pontoturistico2);

    densidade_populacional2 = populacao2 / area2;
    PIB_capita2 = PIB2 / populacao2;

    superpoder2 = populacao2 + area2 + PIB2 + PIB_capita2 + (1.0 / densidade_populacional2) + pontoturistico2;

    // Impressão das cartas 1 e 2
    printf("\n\n--- DADOS DAS CARTAS ---\n");

    printf("- Carta 1 -\nEstado: %s \nCódigo: %s \nCidade: %s \nPopulação: %d habitantes \nÁrea: %.2f m² \nPIB: R$%.2f \nPontos turísticos: %d \nDensidade Populacional: %.2f \nPIB per capita: %.2f \nSuper Poder: %.2f\n",
           estado1, codigocarta1, nomecidade1, populacao1, area1, PIB1, pontoturistico1, densidade_populacional1, PIB_capita1, superpoder1);

    printf("\n- Carta 2 -\nEstado: %s \nCódigo: %s \nCidade: %s \nPopulação: %d habitantes \nÁrea: %.2f m² \nPIB: R$%.2f \nPontos turísticos: %d \nDensidade Populacional: %.2f \nPIB per capita: %.2f \nSuper Poder: %.2f\n",
           estado2, codigocarta2, nomecidade2, populacao2, area2, PIB2, pontoturistico2, densidade_populacional2, PIB_capita2, superpoder2);

    // Comparação dos superpoderes
    printf("\n--- RESULTADO DA DISPUTA ---\n");
    if (superpoder1 > superpoder2) {
        printf("A Carta 1 venceu com Super Poder de %.2f contra %.2f!\n", superpoder1, superpoder2);
    } else if (superpoder2 > superpoder1) {
        printf("A Carta 2 venceu com Super Poder de %.2f contra %.2f!\n", superpoder2, superpoder1);
    } else {
        printf("Empate! Ambas as cartas têm Super Poder de %.2f\n", superpoder1);
    }

    return 0;
}
