#include <stdio.h>
#include <locale.h>

int main () {
   setlocale(LC_ALL, "Portuguese_Brazil");

   long unsigned int populacao1, populacao2;
   unsigned int p_turistic1, p_turistic2;
   char estado1, estado2;
   char usuario[15];
   char codigo1[3], codigo2[3];
   char cidade1[15], cidade2[15];
   float area1, area2;
   float pib1, pib2;
   //Densidade Populacional
   float dens_popul1, dens_popul2;
   //PIB Percapita
   float pibPerca1, pibPerca2;
   //Super Poder
   float super_poder1, super_poder2;

   printf("Usuário, digite o seu nome: ");
   scanf("%s", usuario);

   printf("\nBem vindo %s!\n", usuario);
   printf("Digite as informações de suas cartas\n");

   //Carta 1 --------
   printf("\nCarta 1:");
   printf("\nEstado: ");
   scanf(" %c", &estado1);

   printf("Código: %c", estado1);
   scanf("%s", codigo1);

   printf("Nome da cidade: ");
   scanf("%s", cidade1);

   printf("População: ");
   scanf("%lu", &populacao1);

   printf("Àrea(km²): ");
   scanf("%f", &area1);

   printf("PIB: ");
   scanf("%f", &pib1);

   printf("Número de Pontos Turísticos: ");
   scanf("%u", &p_turistic1);

   //Carta 2 -------
   printf("\nCarta 2:");
   printf("\nEstado: ");
   scanf(" %c", &estado2);

   printf("Código: %c", estado2);
   scanf("%s", codigo2);

   printf("Nome da cidade: ");
   scanf("%s", cidade2);

   printf("População: ");
   scanf("%lu", &populacao2);

   printf("Área(km²): ");
   scanf("%f", &area2);

   printf("PIB: ");
   scanf("%f", &pib2);

   printf("Número de Pontos Turísticos: ");
   scanf("%u", &p_turistic2);

   //Densidade Populacional
   dens_popul1 = (float) populacao1 / area1;
   dens_popul2 = (float) populacao2 / area2;

   //PIB Percapital
   pibPerca1 = pib1 / populacao1;
   pibPerca2 = pib2 / populacao2;

   //Super Poder
   super_poder1 = populacao1 + p_turistic1 + area1 + pib1 + pibPerca1 + (1/dens_popul1);
   super_poder2 = populacao2 + p_turistic2 + area2 + pib2 + pibPerca2 + (1/dens_popul2);

   printf("\n\n-----------Cartas-----------");

   printf("\n\n\tCarta 1");
   printf("\nEstado: %c", estado1);
   printf("\nCódigo: %c%s", estado1, codigo1);
   printf("\nNome da cidade: %s", cidade1);
   printf("\nPopulação: %lu habitantes", populacao1);
   printf("\nÁrea(km²): %.2f km²", area1);
   printf("\nPIB: %.2f bilhões de reais", pib1);
   printf("\nPontos Turísticos: %u", p_turistic1);
   printf("\nDensidade Populacional: %.2f hab/km²", dens_popul1);
   printf("\nPIB per Capita: %.2f reais", pibPerca1);
   printf("\nSuper poder: %.4f pontos", super_poder1);

   printf("\n\nCarta 2");
   printf("\nEstado: %c", estado2);
   printf("\nCódigo: %c%s", estado2, codigo2);
   printf("\nNome da cidade: %s", cidade2);
   printf("\nPopulação: %lu habitantes", populacao2);
   printf("\nÁrea(km²): %.2f km²", area2);
   printf("\nPIB: %.2f bilhões de reais", pib2);
   printf("\nPontos Turísticos: %u", p_turistic2);
   printf("\nDensidade Populacional: %.2f  hab/km²", dens_popul2);
   printf("\nPIB per Capita: %.2f reais", pibPerca2);
   printf("\nSuper poder: %.4f pontos", super_poder2);

   printf("\n\n-----------Resultado-----------");

   printf("\n\nCompração de Cartas");
   printf("\nPopulação: %i", populacao1>populacao2);
   printf("\nÁrea: %i", area1>area2);
   printf("\nPIB: %i", pib1>pib2);
   printf("\nPontos Turísticos: %i", p_turistic1>p_turistic2);
   printf("\nDesnsidade Populacional: %i", (1/dens_popul1)>(1/dens_popul2));
   printf("\nPIB perCapita: %i", pibPerca1>pibPerca2);
   printf("\nSuper Poder: %i", super_poder1>super_poder2);

   return 0;
}