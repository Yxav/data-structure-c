/*--------------------------------
* Arquivo: ListaCF.c
----------------------------------*/

#include <stdio.h>
#include "ListaCF.h"

/*-----------------
* S: uma lista
*/
void criaLista(ListaCF *lt) {
	lt->n = 0;
}

/*-----------------
* E/S: uma lista
* E: um dado
* R: SUCESSO ou LISTA_CHEIA
*/
int incluiNoFim(ListaCF *lt, Dado d) {
	if (lt->n == MAX_NODOS)
		return LISTA_CHEIA;
	else {
		lt->v[lt->n] = d;
		lt->n++;
		return SUCESSO;
	}	
}

/*-----------------
* E: uma lista
*/
void exibe(ListaCF lt) {
	int i;
	
	printf("-------------\n");
	printf("Lista:\n");
	for (i=0; i<lt.n; i++) 
		printf("   %d %.2f\n", lt.v[i].cod,lt.v[i].peso);
	printf("-------------\n\n");			
}


int quantidadeDeNodos(ListaCF lt){
	return lt.n;
}


int estaCheia(ListaCF lt){
	if(lt.n == MAX_NODOS) return 1;
	return 0;
}
int estaVazia(ListaCF lt){
	if(lt.n == 0) return 1;
	return 0;
}

int excluiDoFim(ListaCF *lt){
	if (lt->n == 0)
		return LISTA_VAZIA;
	else {
		lt->n--;
		return SUCESSO;
	}	
}


int incluiNoInicio(ListaCF *lt, Dado d){
	if (lt->n == MAX_NODOS) return LISTA_CHEIA;
	for (int index = 0; index < lt->n; ++index){
		lt->v[index + 1] = lt->v[index];
	}
	lt->v[0] = d;
	lt->n++;
	return SUCESSO;

}