#include <stdio.h>
#include <locale.h>

int main()
{
   /*
   -Estrutura de Condicoes
      Para escrever estrutura de repeticoes basta utilizar a mesma estrutura que no JavaScript
         *if, else
         *condicao entre parenteses
         *chaves para separar os blocos
   */

   int numero1 = 30;
   int numero2 = 20;

   if (numero1 > numero2) {
      printf("O numero 1 he maior que numero 2\n (%i > %i)", numero1, numero2);
   }
   else if (numero1 < numero2) {
      printf("O numero 2 he maior que o numero 1 (%i < %i)", numero1, numero2);
   }
   else {
      printf("Os numeros sao iguais (%i = %i)", numero1, numero2);
   }

   return 0;
}