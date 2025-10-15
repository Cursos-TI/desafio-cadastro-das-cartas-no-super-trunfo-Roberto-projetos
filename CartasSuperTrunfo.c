#include <stdio.h>

int main(){

 // 1ª cartadensidade1, pibpercapta1;
    char codigo1[4], cidade1[30], estado1[30];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapta1;
// 2ª carta
    char codigo2[4], cidade2[30], estado2[30];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapta2;
// 1ª carta p"rintf e scanf
    printf("Cadastro da primeira carta:\n");
      printf("Digite o código da carta (ex: A01): ");
      scanf("%s", codigo1);
      printf("Digite o nome da Cidade: ");
      scanf("%s", cidade1);
      printf("Digite o nome do Estado: ");
      scanf("%s", estado1); 
      printf("Digite a população: ");
      scanf("%d", &populacao1);
      printf("Digite a área (em km²): ");
      scanf("%f", &area1);
      printf("Digite o PIB (em bilhões): ");
      scanf("%f", &pib1);
      printf("Digite o número de pontos turísticos: ");
      scanf("%d", &pontosTuristicos1);

      // Calcula densidade populacional e PIB per capita da 1ª carta
      densidade1 = (area1 > 0) ? (populacao1 / area1) : 0;
      pibPerCapta1 = (populacao1 > 0) ? ((pib1 * 1000000000) / populacao1) : 0;

 // 2ª carta printf e scanf
    printf("Cadastro da segunda carta:\n");
      printf("Digite o código da carta (ex: B02): ");
      scanf("%s", codigo2);
      printf("Digite o nome da Cidade: ");
      scanf("%s", cidade2);
      printf("Digite o nome do Estado: ");
      scanf("%s", estado2);
      printf("Digite a população: ");
      scanf("%d", &populacao2);
      printf("Digite a área (em km²): ");
      scanf("%f", &area2);
      printf("Digite o PIB (em bilhões): ");
      scanf("%f", &pib2);
      printf("Digite o número de pontos turísticos: ");
      scanf("%d", &pontosTuristicos2); 

      // Calcula densidade populacional e PIB per capita da 2ª carta
      densidade2 = (area2 > 0) ? (populacao2 / area2) : 0;
      pibPerCapta2 = (populacao2 > 0) ? ((pib2 * 1000000000) / populacao2) : 0;
 
 // 1ª carta e seus dados
    printf("Dados da Primeira Carta\n");
      printf("Código: %s\n", codigo1);
      printf("Cidade: %s\n", cidade1);
      printf("Estado: %s\n", estado1);
      printf("População: %d\n", populacao1);
      printf("Área: %.2f km²\n", area1);
      printf("PIB: %.2f bilhões\n", pib1);
      printf("Pontos Turísticos: %d\n", pontosTuristicos1);
      printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
      printf("PIB per capita: %.2f\n", pibPerCapta1);
 
 // 2ª carta e seus dados
    printf("Dados da Segunda Carta\n");
      printf("Código: %s\n", codigo2);
      printf("Cidade: %s\n", cidade2);
      printf("Estado: %s\n", estado2);
      printf("População: %d\n", populacao2);
      printf("Área: %.2f km²\n", area2);
      printf("PIB: %.2f bilhões\n", pib2);
      printf("Pontos Turísticos: %d\n", pontosTuristicos2);
      printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
      printf("PIB per capita: %.2f\n", pibPerCapta2);

      if( populacao1 > populacao2){
       printf(" População da 1ª carta é maior.\n");
    } else {
      printf("População da 2ª carta é maior.\n");
    }
  
    return 0;
}  