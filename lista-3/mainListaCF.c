/*--------------------------------
Arquivo: mainListaCF.c
----------------------------------*/

#include <stdio.h>
#include "ListaCF.c"


int main() {
	ListaCF lista;
	Dado dado;
	int cod;
	
	criaLista(&lista);
	do {
		printf("1-Inclui no fim\n");
		printf("2-Exibe lista\n");		
		printf("3-Quantidade de nodos\n");
		printf("4-Exibe situacao da lista\n");
		printf("5-Exclui do fim\n");
		printf("6-Inclui no inicio\n");
		printf("7-Exclui do inicio\n");
		printf("8-Consulta por codigo\n");	
		printf("9-Inclui antes\n");		
		printf("10-Exclui nodo\n");	
		printf("11-Fim\n\n");
		printf("Informe a operacao: ");
		scanf("%d",&cod);
		
		switch (cod)
			{
			case 1 : printf("Informe o codigo: ");
					 scanf("%d",&dado.cod);
					 printf("Informe o peso: ");
					 scanf("%f",&dado.peso);
					 if (incluiNoFim(&lista,dado)==LISTA_CHEIA)
					 	printf("ERRO: Lista Cheia!\n");
					 else
					    printf("Dados Incluidos com SUCESSO!\n");
					 break;
			case 2 : exibe(lista);
					 break;
			case 3 : printf("%d\n", quantidadeDeNodos(lista));
					 break;
			case 4 : 
					 if(estaCheia(lista) == 1) printf("A lista está cheia!\n");
					 else if(estaVazia(lista) == 1) printf("A lista está vazia!\n");
					 break;
			case 5 : if (excluiDoFim(&lista)==LISTA_VAZIA)
					 	printf("ERRO: Lista Vazia!\n");
					 else
					    printf("Dado excluido com SUCESSO!\n");
				     break;
			case 6 : printf("Informe o codigo: ");
					 scanf("%d",&dado.cod);
					 printf("Informe o peso: ");
					 scanf("%f",&dado.peso);
					 if (incluiNoInicio(&lista,dado)==LISTA_CHEIA)
					 	printf("ERRO: Lista Cheia!\n");
					 else
					    printf("Dados Incluidos com SUCESSO!\n");
					 break;
			case 7 : break;
			case 8 : break;
			case 9 : break;
			case 10 : break;
			}
		if (cod != 2)
			exibe(lista);

	} while (cod !=0);

	return 0;
}
