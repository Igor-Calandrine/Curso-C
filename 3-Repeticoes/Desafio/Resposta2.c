#include <stdio.h>

int main () {

   int iTorre = 1;
   int iBispo = 1;

   printf("\n\nTorre");
   while (iTorre <= 5) {
      printf("\nDireita: %i", iTorre);
      iTorre++;
   }

   printf("\n\nBispo");
   do {
      printf("\nCima, Direita: %i", iBispo);
      iBispo++;
   } while (iBispo <= 5);

   printf("\n\nRainha");
   for (int i = 1; i <= 8; i++) {
      printf("\nEsquerda:%i", i);
   }

   printf("\n\nCavalo");
   int movMaior = 1, movMenor = 1;

   for(movMaior = 1; movMaior <= 2; movMaior++) {
      
      while (movMenor <= 1) {
         printf("\nBaixo: %i", movMenor);
         movMenor++;
      }
      
      printf("\nEsquerda:%i", movMaior);
   }
      
   return 0;
}