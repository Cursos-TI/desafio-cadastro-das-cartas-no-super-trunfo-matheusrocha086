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
    float densidade_populacional1, densidade_populacional2;
    float PIB_capita1, PIB_capita2;

    // Dados da carta 1

    printf("    Carta 1    \n");

    printf("Digite o nome do 1° estado que deseja: "); // Variavel " %[^\n]" para usar espaçamentos em nomes compostos
    scanf(" %[^\n]", &estado1);

    printf("Digite o código da Carta 1 (ex: A1, B2): ");
    scanf("%s", &codigocarta1);

    printf("Digite o nome da 1° Cidade: ");
    scanf(" %[^\n]", &nomecidade1);

    printf("Digite população da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1:");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turisticos da Carta 1: ");
    scanf("%d", &pontoturistico1);

    densidade_populacional1 = populacao1 / area1;

    PIB_capita1 = PIB1 / populacao1;

    // Dados da carta 2

    printf("\n   Carta 2   \n");

    printf("Digite o nome do 2° estado que deseja: "); // Variavel " %[^\n]" para usar espaçamentos em nomes compostos
    scanf(" %[^\n]", &estado2);

    printf("Digite o código da Carta 2 (ex: A1, B2): ");
    scanf("%s", &codigocarta2);

    printf("Digite o nome da 2° Cidade: ");
    scanf(" %[^\n]", &nomecidade2);

    printf("Digite população da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2:");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos da Carta 2: ");
    scanf("%d", &pontoturistico2);

    densidade_populacional2 = populacao2 / area2;

    PIB_capita2 = PIB2 / populacao2;

    // Impressão das cartas 1 e 2

    printf("\n\n--- DADOS DAS CARTAS ---\n");
    printf("- Carta 1 -\n Seu Estado é: %s \n Seu código é: %s \n O nome da cidade é: %s \n A população é de: %d Habitantes \n A área é de: %.2f m² \n O PIB é de: R$%.2f \n Número de pontos turísticos é de: %d \n A Densidade Populacional é de: %f \n O PIB per capita é de: %f\n", estado1, codigocarta1, nomecidade1, populacao1, area1, PIB1, pontoturistico1, densidade_populacional1, PIB_capita1); // Retorna a mensagem confirmando os dados da 1º carta
    printf("\n- Carta 2 -\n Seu Estado é: %s \n Seu código é: %s \n O nome da cidade é: %s \n A população é de: %d Habitantes \n A área é de: %.2f m² \n O PIB é de: R$%.2f \n Número de pontos turísticos é de: %d \n A Densidade Populacional é de: %f \n O PIB per capita é de: %f\n", estado2, codigocarta2, nomecidade2, populacao2, area2, PIB2, pontoturistico2, densidade_populacional2, PIB_capita2); // Retorna a mensagem confirmando os dados da 2º carta



    return 0;
}
