#include <stdio.h>
#include <locale.h>

/*
-while()
   A estrutura é a mesma do JavaScript

-do while
   A estrutura garante que ocorra pelo menos uma vez, utilizado para entrada de usuários que é necessário pelo menos uma vez ocorra

-for 
   A estrutura é a mesma do JavaScript. A variável deve ser declara detro do for, sendo assim uma variável local
*/ 


int main () {
   int i = 0;
   int i2 = 0;

   printf("\nwhile -------");

   while (i <= 5) {
      printf("\nvalor = %i", i);
      i++;
   } 

   printf("\n\ndo-while -------");

   do {
      printf("\ndo-while ->: %i", i2);
      i2++;
   } while (i2 == 5); //Verificou na segunda vez a condicao nao ser verdadeira e parou


   printf("\n\nfor -------");
   for (int i=0; i <= 3; i++) {
      printf("\nfor -> valor = %i", i);
   }


   return 0;
}