#include <stdio.h>

int main(){

 // 1ª carta
    char codigo1[4], estado1[30];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
// 2ª carta
    char codigo2[4], estado2[30];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
// 1ª carta printf e scanf
    printf("Cadastro da primeira carta:\n");
      printf("Digite o código da carta (ex: A01): ");
      scanf("%s", codigo1);
      printf("Digite o nome do estado: ");
      scanf("%s", estado1); 
      printf("Digite a população: ");
      scanf("%d", &populacao1);
      printf("Digite a área (em km²): ");
      scanf("%f", &area1);
      printf("Digite o PIB (em bilhões): ");
      scanf("%f", &pib1);
      printf("Digite o número de pontos turísticos: ");
      scanf("%d", &pontosTuristicos1);
 // 2ª carta printf e scanf
    printf("\nCadastro da segunda carta:\n");
      printf("Digite o código da carta (ex: B02): ");
      scanf("%s", codigo2);
      printf("Digite o nome do estado: ");
      scanf("%s", estado2);
      printf("Digite a população: ");
      scanf("%d", &populacao2);
      printf("Digite a área (em km²): ");
      scanf("%f", &area2);
      printf("Digite o PIB (em bilhões): ");
      scanf("%f", &pib2);
      printf("Digite o número de pontos turísticos: ");
      scanf("%d", &pontosTuristicos2);
 // 1ª carta e seus dados
    printf("\nDados da Primeira Carta\n");
      printf("Código: %s\n", codigo1);
      printf("Estado: %s\n", estado1);
      printf("População: %d\n", populacao1);
      printf("Área: %.2f km²\n", area1);
      printf("PIB: %.2f bilhões\n", pib1);
      printf("Pontos Turísticos: %d\n", pontosTuristicos1);
 // 2ª carta e seus dados
    printf("\nDados da Segunda Carta\n");
      printf("Código: %s\n", codigo2);
      printf("Estado: %s\n", estado2);
      printf("População: %d\n", populacao2);
      printf("Área: %.2f km²\n", area2);
      printf("PIB: %.2f bilhões\n", pib2);
      printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}  