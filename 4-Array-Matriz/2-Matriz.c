#include <stdio.h>
#include <locale.h>

/*
-Introducao
   Da mesmo forma que se cria um Arrau, deve-se criar uma Matriz mas com 2 dimiensoes
*/ 

int main() {
   int matriz[2][2];
   char *matrizP [3][2] = {
      {"Igor", "sexo: masculino"},
      {"Bianca", "sexo: feminino"},
      {"Yuri", "sexo: masculino"}
   };
   

   matriz[0][0] = 0;
   matriz[0][1] = 1;
   matriz[1][0] = 2;
   matriz[1][1] = 3;

   printf("Exemplo 1");
   printf("\nElemento posicao [1][0]: %i", matriz[1][0]);

   printf("\n\nExemplo 2");
   printf("\nNome: %s  ||  %s", matrizP[1][0], matrizP[1][1]);
   

   return 0;
}