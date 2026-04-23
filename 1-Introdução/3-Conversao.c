#include <stdio.h>
#include <locale.h>
/*
-Conversão Explícita
   Para fazer uma concersão explícita basta colocar o seu tipo antes do número
   *(int) 3.4444
   *(float) 5
*/ 

int main () {
   // setlocale(LC_ALL, "Portuguese_Brazil");

   int numero1 = 10;
   int numero2 = 3;
   float resultado1 = numero1 / numero2;
   float resultado2 = (float) numero1 / numero2;

   //O resultado será 3.00, o que seria um erro apesar de a variável ser float
   printf("Resultado 1: %.2f", resultado1);

   //Para resolver esse problemas devemos explicitar que a variável é do tipo float a convertendo
   printf("\nResultado 2: %.2f", resultado2);

   

   return 0;

};