#include <stdio.h>
#include <stdlib.h>
#include "pilhase.h"

void criaPilha(PilhaSe *p){
  p->topo = NULL;
}

int empilha (PilhaSe *p, Dado d){
    Nodo *pNodo;
    pNodo = (Nodo *) malloc (sizeof (Nodo));
  if (pNodo == NULL)
      return(FALTOU_MEMORIA);
  else {
      pNodo->info = d;
      pNodo->prox = p->topo;
      p->topo = pNodo;
      return(SUCESSO);
  }
}

int desempilha(PilhaSe *p, Dado *d){
    Nodo *pTemp;
    if (p->topo==NULL)
      return(PILHA_VAZIA);
    else {
      *d = p->topo->info;
      pTemp = p->topo;
      p->topo = p->topo->prox;
      free(pTemp);
      return SUCESSO;
      
    }
}

int quantidadeDeNodos(PilhaSe p){
  int count=0;
  Nodo *pAux;
  
  pAux = p.topo;
  while (pAux != NULL) {
    count++;
    pAux = pAux->prox;
  }
  return(count);
}

void exibe(PilhaSe p){
    Nodo *pAux;
    pAux = p.topo;
    printf("\nInicio: %p \n", p.topo);
    printf("Exibindo a Lista\n");
    printf("[EndNodo] [cd] [peso] [EndProx]\n");
    while (pAux != NULL) {
      printf("%p - %3d %.2f - %p\n", pAux, pAux->info.cod, pAux->info.peso, pAux->prox);
      pAux = pAux->prox;
    }
}

int consultaTopo(PilhaSe p, Dado *d){
    Nodo *pAux;
    if (p.topo==NULL)
      return(PILHA_VAZIA);
    pAux = p.topo;
    *d = pAux->info;
    return SUCESSO;
}


int estaVazia(PilhaSe p){
  if (p.topo==NULL)
    return(PILHA_VAZIA);
  else
    return(0);     
}

