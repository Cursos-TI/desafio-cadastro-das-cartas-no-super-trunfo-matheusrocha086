#include <stdio.h>
#include <stdlib.h>

// Função para limpar o buffer de entrada
void limpar_entrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Variáveis
    char pais1[40], pais2[40];
    char codigocarta1[3], codigocarta2[3];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontoturistico1, pontoturistico2;
    float densidade1, densidade2;
    float PIBcapita1, PIBcapita2;
    float superpoder1, superpoder2;

    int opcao1, opcao2; // para as duas escolhas do jogador

    // ============================
    // 1. Entrada de dados das cartas
    // ============================

    printf("--- INSERÇÃO DE DADOS DA CARTA 1 ---\n");
    printf("Digite o nome do 1° país: ");
    scanf(" %[^\n]", pais1); limpar_entrada();

    printf("Digite o código da Carta 1 (ex: A1, B2): ");
    scanf("%s", codigocarta1); limpar_entrada();

    printf("Digite a população do país 1: ");
    scanf("%d", &populacao1); limpar_entrada();

    printf("Digite a área do país 1 (em km²): ");
    scanf("%f", &area1); limpar_entrada();

    printf("Digite o PIB do país 1 (em bilhões): ");
    scanf("%f", &PIB1); limpar_entrada();

    printf("Digite a quantidade de pontos turísticos do país 1: ");
    scanf("%d", &pontoturistico1); limpar_entrada();

    // Cálculos automáticos
    densidade1 = (area1 > 0) ? populacao1 / area1 : 0;
    PIBcapita1 = (populacao1 > 0) ? PIB1 / populacao1 : 0;
    superpoder1 = populacao1 + area1 + PIB1 + PIBcapita1 + (densidade1 > 0 ? 1.0 / densidade1 : 0) + pontoturistico1;

    printf("\n--- INSERÇÃO DE DADOS DA CARTA 2 ---\n");
    printf("Digite o nome do 2° país: ");
    scanf(" %[^\n]", pais2); limpar_entrada();

    printf("Digite o código da Carta 2 (ex: A1, B2): ");
    scanf("%s", codigocarta2); limpar_entrada();

    printf("Digite a população do país 2: ");
    scanf("%d", &populacao2); limpar_entrada();

    printf("Digite a área do país 2 (em km²): ");
    scanf("%f", &area2); limpar_entrada();

    printf("Digite o PIB do país 2 (em bilhões): ");
    scanf("%f", &PIB2); limpar_entrada();

    printf("Digite a quantidade de pontos turísticos do país 2: ");
    scanf("%d", &pontoturistico2); limpar_entrada();

    // Cálculos automáticos
    densidade2 = (area2 > 0) ? populacao2 / area2 : 0;
    PIBcapita2 = (populacao2 > 0) ? PIB2 / populacao2 : 0;
    superpoder2 = populacao2 + area2 + PIB2 + PIBcapita2 + (densidade2 > 0 ? 1.0 / densidade2 : 0) + pontoturistico2;

    // ============================
    // 2. Menu interativo
    // ============================

    printf("\n\n*** CARTAS PREPARADAS! HORA DA DISPUTA ENTRE %s E %s! ***\n", pais1, pais2);

    // Escolha do primeiro atributo
    printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional (MENOR vence)\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);
    limpar_entrada();

    // Menu dinâmico (remove o atributo já escolhido)
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 7; i++) {
        if (i == opcao1) continue; // não mostrar o mesmo atributo
        switch (i) {
            case 1: printf("1. População\n"); break;
            case 2: printf("2. Área\n"); break;
            case 3: printf("3. PIB\n"); break;
            case 4: printf("4. Pontos Turísticos\n"); break;
            case 5: printf("5. Densidade Populacional (MENOR vence)\n"); break;
            case 6: printf("6. PIB per Capita\n"); break;
            case 7: printf("7. Super Poder\n"); break;
        }
    }
    printf("Escolha: ");
    scanf("%d", &opcao2);
    limpar_entrada();

    // ============================
    // 3. Comparação dos atributos
    // ============================

    float v1a1 = 0, v1a2 = 0; // valores carta 1
    float v2a1 = 0, v2a2 = 0; // valores carta 2
    char nome1[40], nome2[40];

    // Função de atribuição dos valores (switch duplo)
    for (int j = 1; j <= 2; j++) {
        int escolha = (j == 1) ? opcao1 : opcao2;
        char *nome = (j == 1) ? nome1 : nome2;
        switch (escolha) {
            case 1: sprintf(nome, "População");
                    if (j == 1) { v1a1 = populacao1; v2a1 = populacao2; }
                    else { v1a2 = populacao1; v2a2 = populacao2; }
                    break;
            case 2: sprintf(nome, "Área");
                    if (j == 1) { v1a1 = area1; v2a1 = area2; }
                    else { v1a2 = area1; v2a2 = area2; }
                    break;
            case 3: sprintf(nome, "PIB");
                    if (j == 1) { v1a1 = PIB1; v2a1 = PIB2; }
                    else { v1a2 = PIB1; v2a2 = PIB2; }
                    break;
            case 4: sprintf(nome, "Pontos Turísticos");
                    if (j == 1) { v1a1 = pontoturistico1; v2a1 = pontoturistico2; }
                    else { v1a2 = pontoturistico1; v2a2 = pontoturistico2; }
                    break;
            case 5: sprintf(nome, "Densidade Populacional");
                    if (j == 1) { v1a1 = densidade1; v2a1 = densidade2; }
                    else { v1a2 = densidade1; v2a2 = densidade2; }
                    break;
            case 6: sprintf(nome, "PIB per Capita");
                    if (j == 1) { v1a1 = PIBcapita1; v2a1 = PIBcapita2; }
                    else { v1a2 = PIBcapita1; v2a2 = PIBcapita2; }
                    break;
            case 7: sprintf(nome, "Super Poder");
                    if (j == 1) { v1a1 = superpoder1; v2a1 = superpoder2; }
                    else { v1a2 = superpoder1; v2a2 = superpoder2; }
                    break;
        }
    }

    // ============================
    // 4. Exibição dos resultados
    // ============================

    printf("\n=========== RESULTADO DA DISPUTA ===========\n");
    printf("País 1: %s\n", pais1);
    printf("País 2: %s\n\n", pais2);

    printf("Atributo 1: %s\n", nome1);
    printf("  %s: %.2f\n", pais1, v1a1);
    printf("  %s: %.2f\n\n", pais2, v2a1);

    printf("Atributo 2: %s\n", nome2);
    printf("  %s: %.2f\n", pais1, v1a2);
    printf("  %s: %.2f\n\n", pais2, v2a2);

    // Regras: Densidade → menor vence; demais → maior vence
    float soma1 = 0, soma2 = 0;

    // Atributo 1
    if (opcao1 == 5) { // Densidade
        soma1 += (v1a1 < v2a1) ? 1 : 0;
        soma2 += (v2a1 < v1a1) ? 1 : 0;
    } else {
        soma1 += (v1a1 > v2a1) ? 1 : 0;
        soma2 += (v2a1 > v1a1) ? 1 : 0;
    }

    // Atributo 2
    if (opcao2 == 5) { // Densidade
        soma1 += (v1a2 < v2a2) ? 1 : 0;
        soma2 += (v2a2 < v1a2) ? 1 : 0;
    } else {
        soma1 += (v1a2 > v2a2) ? 1 : 0;
        soma2 += (v2a2 > v1a2) ? 1 : 0;
    }

    printf("--------------------------------------------\n");
    printf("Resultado final:\n");
    printf("  Pontos de %s: %.0f\n", pais1, soma1);
    printf("  Pontos de %s: %.0f\n", pais2, soma2);
    printf("--------------------------------------------\n");

    if (soma1 > soma2) {
        printf("🏆 VITÓRIA DO PAÍS 1: %s!\n", pais1);
    } else if (soma2 > soma1) {
        printf("🏆 VITÓRIA DO PAÍS 2: %s!\n", pais2);
    } else {
        printf("🤝 EMPATE!\n");
    }

    printf("============================================\n");

    return 0;
}
