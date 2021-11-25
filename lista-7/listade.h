#ifndef listade_H
#define listade_H

#define SUCESSO 0
#define LISTA_VAZIA 1
#define FALTOU_MEMORIA 2
#define CODIGO_INEXISTENTE 3

typedef struct {
  int cod;
  float peso;
} Dado;
        
typedef struct nodo Nodo;

struct nodo {
  Dado info;
  Nodo *ant;
  Nodo *prox;
};

typedef struct {
  Nodo *inicio;
  Nodo *fim;
  int n;
} ListaDE;

void criaLista(ListaDE *lt);
int incluiNoInicio(ListaDE *lt, Dado d);
void exibe(ListaDE lt);
int quantidadeDeNodos(ListaDE lt);
int estaVazia(ListaDE lt);
int excluiDoInicio(ListaDE *lt, Dado *d);
int incluiNoFim(ListaDE *lt, Dado d);
int excluiDoFim(ListaDE *lt, Dado *d);




#endif
