/*--------------------------------
Arquivo: mainListaCF.c
----------------------------------*/

#include <stdio.h>
#include "ListaCF.c"


int main() {
	ListaCF lista;
	Dado dado;
	int cod, codSearch;
	
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
			case 5 : if (excluiDoFim(&lista, &dado)==LISTA_VAZIA)
					 	printf("ERRO: Lista Vazia!\n");
					 else
					    printf("Dado do codigo %d foi excluido com SUCESSO!\n", dado.cod);
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
			case 7 : if (excluiDoInicio(&lista,&dado)==LISTA_VAZIA)
					 	printf("ERRO: Lista Vazia!\n");
					 else
				     printf("Dado do codigo %d foi excluido com SUCESSO!\n", dado.cod);
					 break;
			case 8 : printf("Informe o codigo: ");
					 scanf("%d",&codSearch);
					 if (consultaPorCodigo(lista,&dado, codSearch)==CODIGO_INEXISTENTE){
					 	printf("ERRO: Este código não existe!\n");
					} else{
				     printf("Codigo: %d Peso: %.2f \n", dado.cod, dado.peso);
					}
					break;
			case 9 : printf("Informe o codigo: ");
					 scanf("%d",&dado.cod);
					 printf("Informe o peso: ");
					 scanf("%f",&dado.peso);
					 printf("Informe o codigo: ");
					 scanf("%d",&codSearch);
					 int opFunc = incluiAntes(&lista,dado, codSearch);
					 if(opFunc == LISTA_CHEIA){
					 	printf("ERRO: Lista Cheia!!\n");
					 }
					 else if (opFunc==CODIGO_INEXISTENTE){
					 	printf("ERRO: Este código não existe!\n");
					 } else{
				     	printf("Dado adicionado com SUCESSO!\n");
					 }
					 break;
			case 10 : break;
			}
		if (cod != 2)
			exibe(lista);

	} while (cod !=11);

	return 0;
}
