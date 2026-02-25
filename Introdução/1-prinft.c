#include <stdio.h>
#include <locale.h>

/*
-Introdução
   Para enviar mensagens na tela temos chamar o include e a biblioteca <stdio.h>, depois escrever a estrutura abaixo.
   Importate:

   *Fechar com (;) os comandos 
   *Terminar com return 0, isso indica que o programa fechou com sucesso

   Para não ter problemas com aceteação e caracteres, escolha para ISO 8859-1
*/ 

int main() {
   setlocale(LC_ALL, "Portuguese_Brazil");
   printf("Olá! mundo!\n");
   return 0;
};