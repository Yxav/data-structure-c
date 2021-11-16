#include <stdio.h>
#include <stdlib.h>
#include "filaSE.h"


void criaFila(FilaSe *f){
  f->frente = NULL;
  f->re = NULL;
}

int insere (FilaSe *f, Dado d){
    Nodo *pNodo, *fAux;
    pNodo = (Nodo *) malloc (sizeof (Nodo));
 	if (f->frente == NULL){
			  pNodo->info = d;
        pNodo->prox = NULL;
        f->frente = pNodo;
        return SUCESSO;
		}

    else {
      fAux = f->frente;
      while (fAux->prox != NULL) {
        fAux = fAux->prox;
      }

      pNodo->info = d;
      pNodo->prox = NULL;
      f->re = fAux->prox;     
      fAux->prox = pNodo;
			f->re = pNodo;
      
      return(SUCESSO);
    }
}

int retira(FilaSe *f, Dado *d){
    Nodo *pTemp;
    if (f->frente==NULL)
      return(FILA_VAZIA);
    else {
      *d = f->frente->info;
      pTemp = f->frente;
      f->frente = f->frente->prox;
      free(pTemp);
      return SUCESSO;
      
    }
}

int quantidadeDeNodos(FilaSe f){
  int count=0;
  Nodo *pAux;
  
  pAux = f.frente;
  while (pAux != NULL) {
    count++;
    pAux = pAux->prox;
  }
  return(count);
}

void exibe(FilaSe f){
    Nodo *fAux;
    fAux = f.frente;
    printf("\nInicio: %p \n", f.frente);
    printf("Exibindo a Lista\n");
    printf("[EndNodo] [cd] [peso] [EndProx]\n");
    while (fAux != NULL) {
      printf("%p - %3d %.2f - %p\n", fAux, fAux->info.cod, fAux->info.peso, fAux->prox);
      fAux = fAux->prox;
    }
}

int consultaTopo(FilaSe f, Dado *d){
    Nodo *pAux;
    if (f.frente==NULL)
      return(FILA_VAZIA);
    pAux = f.frente;
    *d = pAux->info;
    return SUCESSO;
}


int estaVazia(FilaSe f){
  if (f.frente==NULL)
    return(FILA_VAZIA);
  else
    return(0);     
}

