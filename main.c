#include <stdio.h>
#include "modulo_livro.h"

int main() {
 int menu=0;
 printf("\n████████████████████████████████████████████████████████████████████████████\n");
 printf("████████████████████████████████████████████████████████████████████████████\n");
 printf("████████████████████████████████<Biblioteca>████████████████████████████████\n");
 printf("████████████████████████████████████████████████████████████████████████████\n");
 printf("████████████████████████████████████████████████████████████████████████████\n\n");
 printf("               ██████████████████████████████████████████████\n");
 printf("              ████████████████████████████████████████████████\n");
 printf("             █████ 1-Livros Resistrados                   █████\n");
 printf("            █████  2-Livros Emprestados                    █████\n");
 printf("            █████  3-Funcionarios                          █████\n");
 printf("             █████ 0-Finalizar Programa                   █████\n");
 printf("              ████████████████████████████████████████████████\n");
 printf("               ██████████████████████████████████████████████\n\n");
 scanf("%d", &menu);
 //No switch abaixo foi usado a ajuda do chat gpt para correção de um erro.
 switch (menu) {
  case 1:
   menu_livro();
   break;
  case 0:
   printf("Programa finalizado.\n");
   return 0;
  default:
   printf("Opção inválida. Tente novamente.\n");
   break;
 }
   return 0;
}