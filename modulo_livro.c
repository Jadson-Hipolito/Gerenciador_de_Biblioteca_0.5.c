#include <stdio.h>
#include "modulo_livro.h"
#include <string.h>

struct livro biblioteca[5000];
int numLivros = 0;

int buscar_livro_por_titulo(char *termo) {
 int encontrado = 0;
 for (int i = 0; i < numLivros; i++) {
  if (strcasecmp(biblioteca[i].titulo, termo) == 0) {
   printf("Livro encontrado:\n");
   printf("Título: %s\n", biblioteca[i].titulo);
   printf("Autor: %s\n", biblioteca[i].autor);
   printf("Quantidade de cópias: %d\n", biblioteca[i].quant);
   printf("Número do local: %d\n", biblioteca[i].local);
   encontrado = 1;
   return 1;
   break;
  }

    if (!encontrado) {
     return 0;
    }

    return encontrado;
}
}


void editor_livro(char *titulo){
  int mudar;
  int novo_local;
  printf("\n████████████████████████████████████████████████████████████████████████████\n");
  printf("████████████████████████████████████████████████████████████████████████████\n");
  printf("█████████████████████████████<Editor de livros>█████████████████████████████\n");
  printf("████████████████████████████████████████████████████████████████████████████\n");
  printf("████████████████████████████████████████████████████████████████████████████\n\n");
  printf("               ██████████████████████████████████████████████\n");
  printf("              ████████████████████████████████████████████████\n");
  printf("             █████ 1-Mudar Local do livro                  █████\n");
  printf("            █████  2-Mudar quantidade de unidades          █████\n");
  printf("            █████  3-Deletar Registro de livro             █████\n");
  printf("             █████ 0-Retornar para o menu principal       █████\n");
  printf("              ████████████████████████████████████████████████\n");
  printf("               ██████████████████████████████████████████████\n\n");
  scanf("%d", &mudar);
  switch (mudar) {

   case 1:
    printf("Novo local do livro:");
    scanf("%d", &novo_local);
    for (int i = 0; i < numLivros; i++) {
     if (strcasecmp(biblioteca[i].titulo, titulo) == 0) {
      biblioteca[i].local = novo_local;
     }
    }
    break;

   case 2:
    printf("Nome do livro:");
    scanf("%s", &titulo);
    break;

   case 0:
    printf("Programa finalizado.\n");
    break;
    
   default:
    printf("Opção inválida. Tente novamente.\n");
  }
}


int menu_livro(){
 int redr=50;
 char titulo[300]="name";
 while (1==1){
  printf("\n████████████████████████████████████████████████████████████████████████████\n");
  printf("████████████████████████████████████████████████████████████████████████████\n");
  printf("████████████████████████████<Registro de livros>████████████████████████████\n");
  printf("████████████████████████████████████████████████████████████████████████████\n");
  printf("████████████████████████████████████████████████████████████████████████████\n\n");
  printf("               ██████████████████████████████████████████████\n");
  printf("              ████████████████████████████████████████████████\n");
  printf("             █████ 1-Resistrar Livros novos               █████\n");
  printf("            █████  2-Editar Registro de livro              █████\n");
  printf("             █████ 0-Retornar para o menu principal       █████\n");
  printf("              ████████████████████████████████████████████████\n");
  printf("               ██████████████████████████████████████████████\n\n");
  scanf("%d", &redr);
  switch (redr) {
   case 1:
    registrar_livro();
    break;
   case 2:
    printf("Nome do livro:");
    scanf("%s", &titulo);
    if (buscar_livro_por_titulo(titulo)) {
     editor_livro(titulo);
    }
    break;
   case 0:
    printf("Programa finalizado.\n");
    return 0;
   default:
    printf("Opção inválida. Tente novamente.\n");
    break;
  }
 }
}


void registrar_livro() {
 if (numLivros < 5000) {
  printf("\n ██ Nome do livro:");
  scanf("%s", biblioteca[numLivros].titulo);
  printf(" ██ Autor do livro:");
  scanf("%s", biblioteca[numLivros].autor);
  printf(" ██ Quantidade de cópias do livro:");
  scanf("%d", &biblioteca[numLivros].quant);
  printf(" ██ Localização do livro(número de quatro digitos):");
  scanf("%d", &biblioteca[numLivros].local);
  numLivros++;
 }
 else {
  printf("A biblioteca está cheia. Não é possível adicionar mais livros.\n");
 }
}