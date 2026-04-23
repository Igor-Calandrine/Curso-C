#include <stdio.h>
#include <locale.h>

int main () {
   setlocale(LC_ALL, "Portuguese_Brazil");

   int populacao1, populacao2;
   int num_turistico1, num_turistico2;
   char estado1[3], estado2[3];
   char usuario[15];
   int codigo1, codigo2;
   char cidade1[15], cidade2[15];
   float area1, area2;
   float pib1, pib2;
   //Densidade Populacional
   float dens_popul1, dens_popul2;
   //PIB Percapita
   float pibPerca1, pibPerca2;
   int escolha_menu1, escolha_menu2, escolha_diferente;

   printf("Usuário, digite o seu nome: ");
   scanf("%s", usuario);

   printf("\nBem vindo %s!\n", usuario);
   printf("Digite as informações de suas cartas\n");

   //Carta 1 --------
   printf("\nCarta 1:");
   printf("\nEstado: ");
   scanf("%s", estado1);

   printf("Código: %s", estado1);
   scanf("%i", &codigo1);

   printf("Nome da cidade: ");
   scanf("%s", cidade1);

   printf("População: ");
   scanf("%i", &populacao1);

   printf("Àrea(km²): ");
   scanf("%f", &area1);

   printf("PIB: ");
   scanf("%f", &pib1);

   printf("Número de Pontos Turísticos: ");
   scanf("%i", &num_turistico1);

   //Carta 2 -------
   printf("\nCarta 2:");
   printf("\nEstado: ");
   scanf("%s", estado2);

   printf("Código: %s", estado2);
   scanf("%i", &codigo2);

   printf("Nome da cidade: ");
   scanf("%s", cidade2);

   printf("População: ");
   scanf("%i", &populacao2);

   printf("Área(km²): ");
   scanf("%f", &area2);

   printf("PIB: ");
   scanf("%f", &pib2);

   printf("Número de Pontos Turísticos: ");
   scanf("%i", &num_turistico2);

   //Densidade Populacional
   dens_popul1 = (float) populacao1 / area1;
   dens_popul2 = (float) populacao2 / area2;

   //PIB Percapital
   pibPerca1 = pib1 * 1000000000 / populacao1;
   pibPerca2 = pib2 * 1000000000/ populacao2;

   printf("\n\n-----------Cartas-----------");

   printf("\n\n\tCarta 1");
   printf("\nEstado: %s", estado1);
   printf("\nCódigo: %s%i", estado1, codigo1);
   printf("\nNome da cidade: %s", cidade1);
   printf("\nPopulação: %i", populacao1);
   printf("\nÁrea(km²): %.2f km²", area1);
   printf("\nPIB: %.2f bilhões de reais", pib1);
   printf("\nPontos Turisticos: %i", num_turistico1);
   printf("\nDensidade Populacional: %.2f hab/km²", dens_popul1);
   printf("\nPIB per Capita: %.2f reais", pibPerca1);

   printf("\n\nCarta 2");
   printf("\nEstado: %s", estado2);
   printf("\nCódigo: %s%i", estado2, codigo2);
   printf("\nNome da cidade: %s", cidade2);
   printf("\nPopulação: %i", populacao2);
   printf("\nÁrea(km²): %.2f km²", area2);
   printf("\nPIB: %.2f bilhões de reais", pib2);
   printf("\nPontos Turisticos: %i", num_turistico2);
   printf("\nDensidade Populacional: %.2f  hab/km²", dens_popul2);
   printf("\nPIB per Capita: %.2f reais", pibPerca2);

   //Comparação de Cartas
   printf("\n\n---Menu Comparacao de cartas---\n");
   printf("\n1.População");
   printf("\n2.Area");
   printf("\n3.PIB");
   printf("\n4.Pontos Turísticos");
   printf("\n5.Densidade Populacional");
   printf("\n\nEscolha no menu acima 2 característica diferentes você deseja fazer a comparação entre as cartas.");
   printf("\nCaracterísitca 1: ");
   scanf("%i", &escolha_menu1);
   printf("\nCaracterísitca 2: ");
   scanf("%i", &escolha_menu2);

   switch (escolha_menu1)
   {
   case 1:
      printf("\n\nAtributo: Populacao----");
      printf("\nCarta1 - %s (%s): %i", cidade1, estado1, populacao1);
      printf("\nCarta2 - %s (%s): %i", cidade2, estado2, populacao2);
      if (populacao1 > populacao2) {
         printf("\nResultado: Carta 1 (%s) venceu!", cidade1);
      }
      else if (populacao1 == populacao2) {
         printf("\nResultado: Empate!");
      }
      else {
         printf("\nResultado: Carta 2 (%s) venceu!", cidade2);
      }
      break;
   case 2:
      printf("\n\nAtributo: Area----");
      printf("\nCarta1 - %s (%s): %.2f km²", cidade1, estado1, area1);
      printf("\nCarta2 - %s (%s): %.2f km²", cidade2, estado2, area2);
      if (area1 > area2) {
         printf("\nResultado: Carta 1 (%s) venceu!", cidade1);
      }
      else if (area1 == area2) {
         printf("\nResultado: Empate!");
      } 
      else {
         printf("\nResultado: Carta 2 (%s) venceu!", cidade2);
      }
      break;
   case 3:
      printf("\n\nAtributo: PIB----");
      printf("\nCarta1 - %s (%s): %.2f bilhões de reais", cidade1, estado1, pib1);
      printf("\nCarta2 - %s (%s): %.2f bilhões de reais", cidade2, estado2, pib2);
      if (pib1 > pib2) {
         printf("\nResultado: Carta 1 (%s) venceu!", cidade1);
      }
      else if (pib1 == pib2) {
         printf("\nResultado: Empate!");
      } 
      else {
         printf("\nResultado: Carta 2 (%s) venceu!", cidade2);
      }
      break;
   case 4:
      printf("\n\nAtributo: Pontos Turísticos----");
      printf("\nCarta1 - %s (%s): %.i", cidade1, estado1, num_turistico1);
      printf("\nCarta2 - %s (%s): %.i", cidade2, estado2, num_turistico2);
      if (num_turistico1 > num_turistico2) {
         printf("\nResultado: Carta 1 (%s) venceu!", cidade1);
      }
      else if (num_turistico1 == num_turistico2) {
         printf("\nResultado: Empate!");
      } 
      else {
         printf("\nResultado: Carta 2 (%s) venceu!", cidade2);
      }
      break;
   case 5:
      printf("\n\nAtributo: Densidade Demográfica----");
      printf("\nCarta1 - %s (%s): %.2f hab/km²", cidade1, estado1, dens_popul1);
      printf("\nCarta2 - %s (%s): %.2f hab/km²", cidade2, estado2, dens_popul2);
      if (dens_popul1 < dens_popul2) {
         printf("\nResultado: Carta 1 (%s) venceu!", cidade1);
      }
      else if (dens_popul1 == dens_popul2) {
         printf("\nResultado: Empate!");
      } 
      else {
         printf("\nResultado: Carta 2 (%s) venceu!", cidade2);
      }
      break;        
   default:
      printf("Nenhuma das opcoes sao validas");
      break;
   }

   escolha_diferente = escolha_menu2 != escolha_menu1 ? 1 : 0;

   if (escolha_diferente) {
      switch (escolha_menu2)
      {
      case 1:
         printf("\n\nAtributo: Populacao----");
         printf("\nCarta1 - %s (%s): %i", cidade1, estado1, populacao1);
         printf("\nCarta2 - %s (%s): %i", cidade2, estado2, populacao2);
         if (populacao1 > populacao2) {
            printf("\nResultado: Carta 1 (%s) venceu!", cidade1);
         }
         else if (populacao1 == populacao2) {
            printf("\nResultado: Empate!");
         }
         else {
            printf("\nResultado: Carta 2 (%s) venceu!", cidade2);
         }
         break;
      case 2:
         printf("\n\nAtributo: Area----");
         printf("\nCarta1 - %s (%s): %.2f km²", cidade1, estado1, area1);
         printf("\nCarta2 - %s (%s): %.2f km²", cidade2, estado2, area2);
         if (area1 > area2) {
            printf("\nResultado: Carta 1 (%s) venceu!", cidade1);
         }
         else if (area1 == area2) {
            printf("\nResultado: Empate!");
         } 
         else {
            printf("\nResultado: Carta 2 (%s) venceu!", cidade2);
         }
         break;
      case 3:
         printf("\n\nAtributo: PIB----");
         printf("\nCarta1 - %s (%s): %.2f bilhões de reais", cidade1, estado1, pib1);
         printf("\nCarta2 - %s (%s): %.2f bilhões de reais", cidade2, estado2, pib2);
         if (pib1 > pib2) {
            printf("\nResultado: Carta 1 (%s) venceu!", cidade1);
         }
         else if (pib1 == pib2) {
            printf("\nResultado: Empate!");
         } 
         else {
            printf("\nResultado: Carta 2 (%s) venceu!", cidade2);
         }
         break;
      case 4:
         printf("\n\nAtributo: Pontos Turísticos----");
         printf("\nCarta1 - %s (%s): %.i", cidade1, estado1, num_turistico1);
         printf("\nCarta2 - %s (%s): %.i", cidade2, estado2, num_turistico2);
         if (num_turistico1 > num_turistico2) {
            printf("\nResultado: Carta 1 (%s) venceu!", cidade1);
         }
         else if (num_turistico1 == num_turistico2) {
            printf("\nResultado: Empate!");
         } 
         else {
            printf("\nResultado: Carta 2 (%s) venceu!", cidade2);
         }
         break;
      case 5:
         printf("\n\nAtributo: Densidade Demográfica----");
         printf("\nCarta1 - %s (%s): %.2f hab/km²", cidade1, estado1, dens_popul1);
         printf("\nCarta2 - %s (%s): %.2f hab/km²", cidade2, estado2, dens_popul2);
         if (dens_popul1 < dens_popul2) {
            printf("\nResultado: Carta 1 (%s) venceu!", cidade1);
         }
         else if (dens_popul1 == dens_popul2) {
            printf("\nResultado: Empate!");
         } 
         else {
            printf("\nResultado: Carta 2 (%s) venceu!", cidade2);
         }
         break;        
      default:
         printf("\nNenhuma das opcoes sao validas");
         break;
      }
   }
   else {
      printf("\nFoi escolhido o mesmo atributo");
   } 

   return 0;
}