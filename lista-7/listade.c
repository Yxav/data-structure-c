#include <stdio.h>
#include <stdlib.h>
#include "listade.h"

void criaLista(ListaDE *lt){
  lt->inicio = NULL;
  lt->fim = NULL;
  lt->n = 0;
}

int incluiNoInicio(ListaDE *lt, Dado d){
  Nodo *pNodo;
  pNodo = (Nodo *) malloc (sizeof (Nodo));
  if (pNodo == NULL)
    return(FALTOU_MEMORIA);
  else {
      pNodo->info = d;
      pNodo->prox = lt->inicio;
      pNodo->ant = NULL;
      
      if (lt->n == 0)
        lt->fim = pNodo;
      else
        lt->inicio->ant = pNodo;  

      lt->inicio = pNodo;
      lt->n++;
      return(SUCESSO);
    }
}

void exibe(ListaDE lt){
    Nodo *pAux;
    pAux = lt.inicio;
    printf("\nExibindo a Lista\n");
    printf("Inicio: %p \n", lt.inicio);
    printf("[End Ant] [cd] [End Nodo] [peso] [End Prox]\n");
    while (pAux != NULL) {
          printf("%p - %3d %p %.2f - %p\n", pAux->ant, pAux->info.cod, pAux, pAux->info.peso, pAux->prox);
          pAux = pAux->prox;
    }
    printf("Fim: %p - N= %d\n", lt.fim, lt.n);
}


int quantidadeDeNodos(ListaDE lt){
  return lt.n;
}

int estaVazia(ListaDE lt){
  return lt.n == 0 ?  LISTA_VAZIA : 0;
}
