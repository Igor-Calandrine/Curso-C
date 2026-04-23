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

   -Operadores Lógicos
      *and   -> &&
      *or    -> ||
      *negar -> !
   */

   int numero1 = 30;
   int numero2 = 20;
   int variavel;
   int idade;

   if (numero1 > numero2) {
      printf("O numero 1 he maior que numero 2\n (%i > %i)", numero1, numero2);
   }
   else if (numero1 < numero2) {
      printf("O numero 2 he maior que o numero 1 (%i < %i)", numero1, numero2);
   }
   else {
      printf("Os numeros sao iguais (%i = %i)", numero1, numero2);
   }

   /*
   -Switch
      Observe a estrutura abaixo em que se pode escolhar a condicao utilizando um valor de entrada de uma forma simplificada. 
      !Pode-se utilizar tb variaveis do tipo char mas o seu valor deve estar em aspas simples
      O breack em cada case evita que o programa continue a executar os cases seguintes.
      Bem comum de se usar para criar um menu de opções.
   */ 

   printf("\nDigite um valor abaixo (1), (2), ()");
   scanf("%i", &variavel);

   switch (variavel)
   {
   case 1:
      printf("\nFoi feita a escolha 1");
      break;
   case 2:
      printf("\nFoi feita a escolha 2");
      break;
   default:
      printf("\nNão Foi feita a escolha 1 ou 2");
      break;
   }

   /*
   -Operador ternário
      Feito como no JavaScript, observe a estrutura abaixo
   */ 
   idade = 20;

   idade >= 18 ? printf("Maior de idade") : printf("Menor de idade");

   return 0;
}