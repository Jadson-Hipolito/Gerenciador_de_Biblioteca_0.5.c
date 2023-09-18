#ifndef MODULO_LIVRO_H
#define MODULO_LIVRO_H

struct livro {
    char titulo[300];
    char autor[150];
    int quant;
    int local;
};

extern struct livro biblioteca[5000];
extern int numLivros;

void editor_livro(char *titulo);
int buscar_livro_por_titulo(char *termo);
void registrar_livro();
int menu_livro();

#endif