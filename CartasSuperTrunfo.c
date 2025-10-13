#include <stdio.h>
#include <stdlib.h> // Para a função system("cls") ou system("clear")

// Função para limpar o buffer de entrada, resolvendo problemas com 'scanf'
void limpar_entrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Variáveis (mantenho 'float' para a maioria, mas 'double' é ideal para precisão)
    char estado1[40], estado2[40];
    char codigocarta1[3], codigocarta2[3]; 
    char nomecidade1[40], nomecidade2[40];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontoturistico1, pontoturistico2;
    float densidade_populacional1, densidade_populacional2;
    float PIB_capita1, PIB_capita2;
    float superpoder1, superpoder2;
    
    int opcao_comparacao;
    
    // ===================================================
    // 1. ENTRADA DE DADOS (Mantida do seu código original)
    // ===================================================
    
    printf("--- INSERÇÃO DE DADOS DA CARTA 1 ---\n");
    printf("Digite o nome do 1° estado: ");
    scanf(" %[^\n]", estado1); limpar_entrada();
    
    printf("Digite o código da Carta 1 (ex: A1, B2): ");
    scanf("%s", codigocarta1); limpar_entrada();
    
    printf("Digite o nome da 1° Cidade: ");
    scanf(" %[^\n]", nomecidade1); limpar_entrada();
    
    printf("Digite população da Carta 1: ");
    scanf("%d", &populacao1); limpar_entrada();
    
    printf("Digite a área da Carta 1: ");
    scanf("%f", &area1); limpar_entrada();
    
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &PIB1); limpar_entrada();
    
    printf("Digite a quantidade de pontos turísticos da Carta 1: ");
    scanf("%d", &pontoturistico1); limpar_entrada();

    // Cálculo dos atributos
    densidade_populacional1 = (area1 > 0) ? populacao1 / area1 : 0;
    PIB_capita1 = (populacao1 > 0) ? PIB1 / populacao1 : 0;
    superpoder1 = populacao1 + area1 + PIB1 + PIB_capita1 + (densidade_populacional1 > 0 ? (1.0 / densidade_populacional1) : 0) + pontoturistico1;
    
    printf("\n--- INSERÇÃO DE DADOS DA CARTA 2 ---\n");
    printf("Digite o nome do 2° estado: ");
    scanf(" %[^\n]", estado2); limpar_entrada();
    
    printf("Digite o código da Carta 2 (ex: A1, B2): ");
    scanf("%s", codigocarta2); limpar_entrada();
    
    printf("Digite o nome da 2° Cidade: ");
    scanf(" %[^\n]", nomecidade2); limpar_entrada();
    
    printf("Digite população da Carta 2: ");
    scanf("%d", &populacao2); limpar_entrada();
    
    printf("Digite a área da Carta 2: ");
    scanf("%f", &area2); limpar_entrada();
    
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &PIB2); limpar_entrada();
    
    printf("Digite a quantidade de pontos turísticos da Carta 2: ");
    scanf("%d", &pontoturistico2); limpar_entrada();

    // Cálculo dos atributos
    densidade_populacional2 = (area2 > 0) ? populacao2 / area2 : 0;
    PIB_capita2 = (populacao2 > 0) ? PIB2 / populacao2 : 0;
    superpoder2 = populacao2 + area2 + PIB2 + PIB_capita2 + (densidade_populacional2 > 0 ? (1.0 / densidade_populacional2) : 0) + pontoturistico2;

    // ===================================================
    // 2. MENU INTERATIVO PARA DISPUTA
    // ===================================================
    
    printf("\n\n*** CARTAS PREPARADAS! HORA DA DISPUTA! ***\n");

    // Loop do jogo
    while (1) { // Loop infinito, sai apenas com a opção 8
        printf("\n==============================================\n");
        printf("       ESCOLHA O ATRIBUTO DE COMPARAÇÃO\n");
        printf("==============================================\n");
        printf("1. População (Maior vence)\n");
        printf("2. Área (Maior vence)\n");
        printf("3. PIB (Maior vence)\n");
        printf("4. Pontos Turísticos (Maior vence)\n");
        printf("5. Densidade Populacional (Maior vence)\n");
        printf("6. PIB per Capita (Maior vence)\n");
        printf("7. Super Poder (Maior vence)\n");
        printf("8. SAIR DO JOGO\n");
        printf("Escolha sua opção: ");

        if (scanf("%d", &opcao_comparacao) != 1) {
            printf("\nOpção inválida. Digite apenas números.\n");
            limpar_entrada();
            continue;
        }
        limpar_entrada();
        
        printf("----------------------------------------------\n");
        
        // Se o jogador escolher SAIR
        if (opcao_comparacao == 8) {
            printf("Fim do jogo. Até a próxima!\n");
            break;
        }
        
        // Variáveis temporárias para a comparação
        float valor_c1 = 0.0, valor_c2 = 0.0;
        char *nome_atributo = "";

        // Lógica de comparação com base na escolha
        switch (opcao_comparacao) {
            case 1:
                nome_atributo = "População";
                valor_c1 = (float)populacao1; // Conversão para float para comparação
                valor_c2 = (float)populacao2;
                break;
            case 2:
                nome_atributo = "Área";
                valor_c1 = area1;
                valor_c2 = area2;
                break;
            case 3:
                nome_atributo = "PIB";
                valor_c1 = PIB1;
                valor_c2 = PIB2;
                break;
            case 4:
                nome_atributo = "Pontos Turísticos";
                valor_c1 = (float)pontoturistico1;
                valor_c2 = (float)pontoturistico2;
                break;
            case 5:
                nome_atributo = "Densidade Populacional";
                valor_c1 = densidade_populacional1;
                valor_c2 = densidade_populacional2;
                break;
            case 6:
                nome_atributo = "PIB per Capita";
                valor_c1 = PIB_capita1;
                valor_c2 = PIB_capita2;
                break;
            case 7:
                nome_atributo = "Super Poder";
                valor_c1 = superpoder1;
                valor_c2 = superpoder2;
                break;
            default:
                printf("Opção inválida. Por favor, escolha um número de 1 a 8.\n");
                continue; // Volta ao início do loop
        }
        
        // Resultado da Disputa
        printf("DISPUTA: %s\n", nome_atributo);
        printf("%s (Carta 1): %.2f\n", nome_atributo, valor_c1);
        printf("%s (Carta 2): %.2f\n", nome_atributo, valor_c2);
        
        if (valor_c1 > valor_c2) {
            printf("\n>>> VITÓRIA DA CARTA 1! O %s é maior. <<<\n", nome_atributo);
        } else if (valor_c2 > valor_c1) {
            printf("\n>>> VITÓRIA DA CARTA 2! O %s é maior. <<<\n", nome_atributo);
        } else {
            printf("\n>>> EMPATE! O %s é o mesmo nas duas cartas. <<<\n", nome_atributo);
        }
        
        // Opcional: Pausar e limpar a tela para a próxima rodada
        printf("\nPressione ENTER para continuar...\n");
        getchar(); // Pausa
        // system("cls"); // Use para Windows
        // system("clear"); // Use para Linux/macOS
    }
    
    return 0;
}