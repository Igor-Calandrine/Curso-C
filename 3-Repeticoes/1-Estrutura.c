#include <stdio.h>
#include <locale.h>

/*
-while()
   A estrutura é a mesma do JavaScript

-do while
   A estrutura garante que ocorra pelo menos uma vez, utilizado para entrada de usuários que é necessário pelo menos uma vez ocorra

-for 
   A estrutura é a mesma do JavaScript. A variável deve ser declara detro do for, sendo assim uma variável local

-loops aninhados
   A mesma estrutura do JavaScript. Recomendado apenas fazer até no máximo 3 níveis, e lembrar de deixar o constante de contagem do lado de fora para ela ser reiniciada na vez seguinte.
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

   //Loops Aninhados
   printf("\n\nLoops Aninhados\n");
   int a, b, resultado;

   a = 1;
   while (a <= 3) {
      b = 1;
     
      while (b <= 3) {
         resultado = a * b;
         printf("%i x %i = %i\n", a, b, resultado);
         b++;
      }
      printf("\n");
      a++;
   }


   return 0;
}