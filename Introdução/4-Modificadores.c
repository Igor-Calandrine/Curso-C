/*
-Modificadores de tipos de dados
   São usados para alterar as propriedades dos tipos de dados primitivos, permitindo uma manipulação mais precisa e eficiente das variáveis.
   
   Os modificadores de tipos de dados permitem que você controle melhor como os dados são armazenados e manipulados no programa. Em C, os modificadores mais comuns são unsigned e long.

   Veja a diferença a seguir:

   -unsigend
      É usado para números sem sinais, ou seja, positivos

      *int             ->    -2,147,483,648 a 2,147,483,647
      *unsigned int    ->    0 a 4,294,967,295 
      *char            ->    -128 a 127
      *unsigned char   ->    0 a 255

   O especificador de formato %u é usado para exibir valores unsigned int.

   -long 
      É usado para aumentar a capacidade de armazenamento dos tipos de dados primitivos. Ele pode ser aplicado a int e double, permitindo armazenar valores maiores e com maior precisão.

      *long int        ->   -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807
      *long double     ->   ±3.4E-4932 a ±1.1E+4932

   O especificador de formato ddeve incluir l antes da letra é usado para especificar os valores.

      %ld, %li, %Lf
*/ 

#include <stdio.h>

int main () {

   unsigned int ExemploUnsigned = 2000;

   int ExemploInt = 3000;
   float ExemploFloat = 5.555;
   double ExemploDouble = 6.666;
   
   long int ExemploLongInt = 4000;
   long double ExemploLongDouble = 7.777777;

   printf("ExemploUnsigned: %u", ExemploUnsigned);
   
   printf("\nExemploInt: %i", ExemploInt); 
   printf("\nExemploFloat: %f", ExemploFloat);
   printf("\nExemploDouble: %f", ExemploDouble);

   printf("\nExemploLongInt: %li", ExemploLongInt);
   printf("\nExemploLongDouble: %.6Lf", ExemploLongDouble);

   return 0;
}