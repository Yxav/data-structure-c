#ifndef Listase_H
#define Listase_H

#define SUCESSO 0
#define LISTA_VAZIA 1
#define FALTOU_MEMORIA 2
#define CODIGO_INEXISTENTE 3

typedef struct {
        int num;
        char nome[10];
} Contato;
        
typedef struct nodo Nodo;

struct nodo {
       Contato info;
       Nodo *prox;
};

typedef struct {
        Nodo *inicio;
} ListaSE;

void criaLista(ListaSE *lt);
void exibeLista(ListaSE lt);
int incluiAntes(ListaSE *lt, Contato d);
int incluiDepois(ListaSE lt);
int consultaContato(ListaSE lt);
int excluiContato(ListaSE lt);

#endif
