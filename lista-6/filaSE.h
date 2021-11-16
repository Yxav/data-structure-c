#ifndef FilaSE_H
#define FilaSE_H

#define SUCESSO 0
#define FILA_VAZIA 1
#define FALTOU_MEMORIA 2

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
  Nodo *frente;
  Nodo *re;
} FilaSe;

void criaFila(FilaSe *f);
int insere (FilaSe *f, Dado d);
int retira(FilaSe *f, Dado *d);
int estaVazia(FilaSe f);
int quantidadeDeNodos(FilaSe f);
int consultaTopo(FilaSe f, Dado *d);

#endif
