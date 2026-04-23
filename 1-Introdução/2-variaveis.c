#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "Portuguese_Brazil");

   /*
   -variáveis
   Para declarar uma varipavel é necessário declarar seu tipo

      *int     -> número inteiro
      *float   -> número flutuante
      *double  -> números flutuantes com mais casas decimais
      *char    -> caracteres
      *char [] -> strings, deve-se declarar a quantidade

   As variáveis são Case Sensitive, não se deve iniciar com números, caracteres especiais e nem usar nomes reservados.
   Para impressão é necessário especificar o formato do valor

      *%i ou %d -> Um número inteiro no formato decimal
      *%f -> Um número de ponto flutuante no formato padrão
      *%e -> Um número de ponto flutuante em notação científica
      *%c -> Um único caractere
      *%s -> Uma string
    
   */ 
   int idade = 25;
   int quantidade = 2;
   float altura = 1.65;
   char letra = "d";
   char nome[10] = "Igor";
   char sobrenome[15] = "Araújo";

   printf("Idade: %i\n", idade);
   printf("Quantidade: %i\n", quantidade);
   printf("Altura: %.2f\n", altura);
   printf("Letra: %c\n", letra);
   printf("Nome: %s\n", nome);
   printf("Sobrenome: %s\n", sobrenome);

   /*
   -scanf
      Abre o input para receber informações
      !É necessário incluir (&) para apontar o valor para a variável na memória, não é necessário usar para strings
      !A linguagem C entende o enter como um caractere de entrada, então para caracteres únicos deve-se no input deixar uma barra de espaço
   */ 
  
   printf("Atualize sua idade: ");
   scanf("%i", &idade);
   
   printf("Atualize seu nome: ");
   scanf("%s", &nome);
   
   printf("Atualize a letra: ");
   scanf(" %c", &letra);

   printf("Idade: %i\n", idade);
   printf("Nome: %s\n", nome);
   printf("Letra: %c\n", letra);

   return 0;
}
