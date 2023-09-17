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
    break
    
   default:
    printf("Opção inválida. Tente novamente.\n");
  }
}