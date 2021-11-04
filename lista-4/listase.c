#include <stdio.h>
#include <stdlib.h>
#include "listase.h"

void criaLista(ListaSE *lt){
  lt->inicio = NULL;
}

int incluiNoInicio(ListaSE *lt, Dado d){
    Nodo *pNodo;
    pNodo = (Nodo *) malloc (sizeof (Nodo));
    if (pNodo == NULL)
      return(FALTOU_MEMORIA);
    else {
      pNodo->info = d;
      pNodo->prox = lt->inicio;
      lt->inicio = pNodo;
      return(SUCESSO);
    }
}

void exibe(ListaSE lt){
    Nodo *pAux;
    pAux = lt.inicio;
    printf("\nInicio: %p \n", lt.inicio);
    printf("Exibindo a Lista\n");
    printf("[EndNodo] [cd] [peso] [EndProx]\n");
    while (pAux != NULL) {
      printf("%p - %3d %.2f - %p\n", pAux, pAux->info.cod, pAux->info.peso, pAux->prox);
      pAux = pAux->prox;
    }
}

int quantidadeDeNodos(ListaSE lt){
  int conta=0;
  Nodo *pAux;
  
  pAux = lt.inicio;
  while (pAux != NULL) {
    conta++;
    pAux = pAux->prox;
  }
  return(conta);
}

int exibeSituacao(ListaSE lt){
    int conta=0;
    Nodo *pAux;
    
    pAux = lt.inicio;
    while (pAux != NULL) {
      conta++;
      pAux = pAux->prox;
    }
    conta == 0 ? printf("A lista está vazia!\n") : printf("A lista possui um ou mais nodos!\n");
    return(conta);
}

int estaVazia(ListaSE lt){
    if (lt.inicio==NULL)
      return(LISTA_VAZIA);
    else
      return(0);     
}

int excluiNoInicio(ListaSE *lt, Dado *d){
    Nodo *pTemp;
    if (lt->inicio==NULL)
      return(LISTA_VAZIA);
    else {
      *d = lt->inicio->info;
      pTemp = lt->inicio;
      lt->inicio = lt->inicio->prox;
      free(pTemp);

      return SUCESSO;
      
    }
}

int incluiNoFim(ListaSE *lt, Dado d){
    Nodo *pNodo, *pAux;
    pNodo = (Nodo *) malloc (sizeof (Nodo));
    if (pNodo == NULL)
      return(FALTOU_MEMORIA);

    
	if (lt->inicio == NULL){
			pNodo->info = d;
        pNodo->prox = NULL;
        lt->inicio = pNodo;
		}

    else {
      pAux = lt->inicio;
      while (pAux->prox != NULL) {
        pAux = pAux->prox;
      }

      pNodo->info = d;
      pNodo->prox = NULL;
      pAux->prox = pNodo;
      return(SUCESSO);
    }
}

int excluiDoFim(ListaSE *lt, Dado *d){
    Nodo *pTemp, *pNodo;
    if (lt->inicio==NULL)
      return(LISTA_VAZIA);
    else {
      if(quantidadeDeNodos(*lt)<=1){
        lt->inicio = NULL;
        return SUCESSO;
      }
      else{
        pTemp = lt->inicio;
        while (pTemp->prox != NULL) {
          pNodo = pTemp;
          pTemp = pTemp->prox;
        }
        pNodo->prox = NULL;
        *d = pTemp->info;
        free(pTemp);
        return SUCESSO;
      
      }
    }
}

int consultaPorCodigo(ListaSE lt, int cod ,Dado *d){
    Nodo *pAux;

    pAux = lt.inicio;
    while (pAux != NULL) {
      if(pAux->info.cod == cod){
        *d = pAux->info;
        return SUCESSO;
      }
        pAux = pAux->prox;
    }
    return(CODIGO_INEXISTENTE);
}

int incluiDepois(ListaSE *lt, int cod ,Dado d){
    Nodo *pAux, *pNodo;

    pNodo = (Nodo *) malloc (sizeof (Nodo));
    
    if (pNodo == NULL)
      return(FALTOU_MEMORIA);
    pAux = lt->inicio;
    while (pAux != NULL) {
      if(pAux->info.cod == cod){
        pNodo->info = d;
        pNodo->prox = pAux->prox;
        pAux->prox = pNodo;
        return SUCESSO;
      }
    }
    return(CODIGO_INEXISTENTE);
}

int excluiNodo(ListaSE *lt, int cod ,Dado *d){
    Nodo *pAux, *pNodo;

    if (lt->inicio == NULL)
      return(LISTA_VAZIA);
    else {
      if(quantidadeDeNodos(*lt)<=1){
        lt->inicio = NULL;
        return SUCESSO;
      } 
      else{
          pAux = lt->inicio;

        while(pAux->prox != NULL){
        if(pAux->info.cod == cod){
          if(pAux->prox == lt->inicio->prox){
            lt->inicio = lt->inicio->prox;
            pNodo->prox = NULL;
            *d = pAux->info;
            free(pAux);
            return SUCESSO;
          }
          else {
            pNodo->prox = pAux->prox;
            *d = pAux->info;
            free(pAux);
            return SUCESSO;
          }
          }
          pNodo = pAux;
          pAux = pAux->prox;
        }

         if(pAux->info.cod == cod){
          pNodo->prox = NULL;
          *d = pAux->info;
          free(pAux);
          return SUCESSO;
        }
    }

    return(CODIGO_INEXISTENTE);

    }
}
    



