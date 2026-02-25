#include <stdio.h>
#include <locale.h>

int main () {
   setlocale(LC_ALL, "Portuguese_Brazil");

   int carta1, carta2;
   int populacao1, populacao2;
   int num_turistico1, num_turistico2;
   char estado1, estado2;
   char usuario[10];
   char codigo1[2], codigo2[2];
   char cidade1[15], cidade2[15];
   float area1, area2;
   float pib1, pib2;



   printf("Usuário, digite o seu nome: ");
   scanf("%s", &usuario);

   printf("\nBem vindo %s ao jogo!\n", usuario);
   printf("Digite as informações de suas cartas\n");

   printf("Carta 1:\n");
   printf("Estado:");
   scanf(" %c", &estado1);

   printf("Código: %c", estado1);
   scanf("%s", codigo1);

   printf("Código: %c", estado1);
   
   
   printf("Carta 1\n");
   printf("Estado: %c\n", estado1);
   printf("Código: %c%s", estado1, codigo1);



   



   return 0;
}