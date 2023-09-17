void menu_livro(){
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