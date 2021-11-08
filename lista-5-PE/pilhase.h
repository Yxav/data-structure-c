#ifndef PilhaSE_H
#define PilhaSE_H

#define SUCESSO 0
#define PILHA_VAZIA 1
#define FALTOU_MEMORIA 2
#define CODIGO_INEXISTENTE 3

typedef struct {
  int cod;
  float peso;
} Dado;
        
typedef struct nodo Nodo;

struct nodo {
  Dado info;
  Nodo *prox;
};

typedef struct {
  Nodo *topo;
} PilhaSe;

void criaPilha(PilhaSe *p);
int empilha (PilhaSe *p, Dado d);
int desempilha(PilhaSe *p, Dado *d);
int estaCheia(PilhaSe p);
int estaVazia(PilhaSe p);
int quantidadeDeNodos(PilhaSe tp);
int consultaTopo(PilhaSe tp, Dado *d);

#endif
