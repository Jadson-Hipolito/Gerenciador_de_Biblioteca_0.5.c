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

    return encontrado; // Retorna 1 se encontrado, 0 se não encontrado
}
}