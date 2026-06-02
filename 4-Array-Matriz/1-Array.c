#include <stdio.h>
#include <locale.h>

/*
-Introducao
   Para declarar um Array deve-se fazer como uma variável, declarando o seu tipo e incluindo o seu tamanha, detalhe que será utilizado chaves({}) no C.
   O índice inicia do 0
   Para criar uma Array de strings é necessário utilizar um ponteiro, ele será o "*" antes da variável, e no caso não foi determianado a quantidade de elementos, então ele será então inicializado com 3 nomes, automanticamente com tamanho 3
*/ 

int main() {
   int numero1[5] = {0, 1, 2, 3, 4};
   float numero2[3] = {90.4, 20.5, 15.2};
   char letras1[4] = {'A', 'B', 'C', 'D'};
   char *palavras[] = {"Igor", "Bianca", "Yuri"};
   int i = 0;

   printf("Exemplo 1");
   for (i=0; i < 5; i++) {
      printf("\nNumeros da lista: %i", numero1[i]);
   };

   printf("\n\nExemplo 2");

   for (i=0; i < 3; i++) {
      printf("\nNumeros da lista: %f", numero2[i]);
   };

   printf("\n\nExemplo 3");

   for (i=0; i < 4; i++) {
      printf("\nNumeros da lista: %c", letras1[i]);
   };

   printf("\n\nExemplo 4");

   for (i=0; i < 3; i++) {
      printf("\nNumeros da lista: %s", palavras[i]);
   };

   return 0;
}
