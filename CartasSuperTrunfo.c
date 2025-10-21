#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
 Super Trunfo - Nível Aventureiro (interativo)
 - Usa duas cartas já cadastradas (entrada pelo usuário)
 - Menu interativo com switch para escolher o atributo  
 - Comparação com regra especial: para densidade, vence o menor valor
 - Exibe nomes, valores e resultado da comparação
*/

int main(void) {
    char codigo1[4], nome1[64], estado1[64];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapta1;

    char codigo2[4], nome2[64], estado2[64];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapta2;

    printf("Cadastro da primeira carta:\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Digite o nome do país/cidade: ");
    scanf("%63s", nome1);
    printf("Digite o nome do estado: ");
    scanf("%63s", estado1);
    printf("Digite a população: ");
    if (scanf("%d", &populacao1) != 1) { fprintf(stderr, "Entrada inválida para população.\n"); return 1; }
    printf("Digite a área (em km²): ");
    if (scanf("%f", &area1) != 1) { fprintf(stderr, "Entrada inválida para área.\n"); return 1; }
    printf("Digite o PIB (em bilhões): ");
    if (scanf("%f", &pib1) != 1) { fprintf(stderr, "Entrada inválida para PIB.\n"); return 1; }
    printf("Digite o número de pontos turísticos: ");
    if (scanf("%d", &pontosTuristicos1) != 1) { fprintf(stderr, "Entrada inválida para pontos turísticos.\n"); return 1; }

    densidade1 = (area1 > 0.0f) ? ((float)populacao1 / area1) : 0.0f;
    pibPerCapta1 = (populacao1 > 0) ? ((pib1 * 1000000000.0f) / populacao1) : 0.0f;

    printf("\nCadastro da segunda carta:\n");
    printf("Digite o código da carta (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Digite o nome do país/cidade: ");
    scanf("%63s", nome2);
    printf("Digite o nome do estado: ");
    scanf("%63s", estado2);
    printf("Digite a população: ");
    if (scanf("%d", &populacao2) != 1) { fprintf(stderr, "Entrada inválida para população.\n"); return 1; }
    printf("Digite a área (em km²): ");
    if (scanf("%f", &area2) != 1) { fprintf(stderr, "Entrada inválida para área.\n"); return 1; }
    printf("Digite o PIB (em bilhões): ");
    if (scanf("%f", &pib2) != 1) { fprintf(stderr, "Entrada inválida para PIB.\n"); return 1; }
    printf("Digite o número de pontos turísticos: ");
    if (scanf("%d", &pontosTuristicos2) != 1) { fprintf(stderr, "Entrada inválida para pontos turísticos.\n"); return 1; }

    densidade2 = (area2 > 0.0f) ? ((float)populacao2 / area2) : 0.0f;
    pibPerCapta2 = (populacao2 > 0) ? ((pib2 * 1000000000.0f) / populacao2) : 0.0f;

    printf("\n--- Dados da 1ª carta ---\n");
    printf("%s (%s) - Codigo: %s\n", nome1, estado1, codigo1);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f\n",
           populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapta1);

    printf("\n--- Dados da 2ª carta ---\n");
    printf("%s (%s) - Codigo: %s\n", nome2, estado2, codigo2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f\n",
           populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapta2);

    /* Menu interativo para escolher atributo */
    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica (vence o menor)\n");
    printf("6 - Mostrar apenas os nomes\n");
    printf("Opção: ");

    int opcao = 0;
    if (scanf("%d", &opcao) != 1) {
        fprintf(stderr, "Entrada inválida. Encerrando.\n");
        return 1;
    }

    printf("\n-- Resultado da comparação --\n");
    printf("Carta 1: %s\nCarta 2: %s\n", nome1, nome2);

    switch (opcao) {
        case 1: { // População (maior vence)
            printf("Atributo: População\n");
            printf("Valor 1: %d\nValor 2: %d\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: Carta 1 (%s)\n", nome1);
            } else if (populacao1 < populacao2) {
                printf("Vencedor: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;
        }
        case 2: { // Área (maior vence)
            printf("Atributo: Área (km²)\n");
            printf("Valor 1: %.2f\nValor 2: %.2f\n", area1, area2);
            if (area1 > area2) {
                printf("Vencedor: Carta 1 (%s)\n", nome1);
            } else if (area1 < area2) {
                printf("Vencedor: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;
        }
        case 3: { // PIB (maior vence) - usamos PIB em bilhões
            printf("Atributo: PIB (bilhões)\n");
            printf("Valor 1: %.2f\nValor 2: %.2f\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: Carta 1 (%s)\n", nome1);
            } else if (pib1 < pib2) {
                printf("Vencedor: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;
        }
        case 4: { // Pontos turísticos (maior vence)
            printf("Atributo: Pontos turísticos\n");
            printf("Valor 1: %d\nValor 2: %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: Carta 1 (%s)\n", nome1);
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf("Vencedor: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;
        }
        case 5: { // Densidade demográfica (menor vence) — regra invertida
            printf("Atributo: Densidade demográfica (hab/km²) — menor vence\n");
            printf("Valor 1: %.2f\nValor 2: %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: Carta 1 (%s)\n", nome1);
            } else if (densidade1 > densidade2) {
                printf("Vencedor: Carta 2 (%s)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;
        }
        case 6: {
            printf("Atributo: Nomes\n");
            printf("Carta 1: %s\nCarta 2: %s\n", nome1, nome2);
            printf("(Nenhuma comparação numérica foi feita.)\n");
            break;
        }
        default:
            printf("Opção inválida. Use um número entre 1 e 6.\n");
            break;
    }

    printf("\nFim do jogo (comparação única).\n");
    return 0;
}
