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