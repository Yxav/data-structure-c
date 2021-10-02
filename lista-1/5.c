// 1.5 Escreva	 uma	 função	 em	 C	 chamada	duplaCrescente	que	 classifique	 2	 valores	inteiros	 passados	 como	
// argumento	em	ordem	crescente.
// Entrada:	Dois	números	inteiros
// Saída:	Os	dois	inteiros	em	ordem	crescente.
// Retorno:	Nenhum
// Escreva	um	programa	em	C	para	ler	uma	quantidade	indeterminada	de	duplas	de	inteiros.	Escrever	cada	dupla	
// em	 ordem	 crescente.	 Os	 valores	 em	 ordem	 crescente	 devem	 ser	 obtidos	 através	 da	 chamada	 à	 funçã o	
// duplaCrescente.	 O	 programa	 termina	 quando	 os	 dois	 valores	informados	 forem	iguais	 (nesta	 situaçã o	 os	
// valores	nã o	devem	ser	impressos).
// [Entrada] [Saída]
// 1 2 1 2
// 4 3 3 4
// 2 2 



#include <stdio.h>

void duplaCrescente(int *n1, int *n2);

int main(int argc, char const *argv[])
{
	int n1,n2;

	do{
		printf("Insira dois numeros\n");
		scanf("%d %d", &n1, &n2);
		duplaCrescente(&n1, &n2);
		printf("%d %d\n", n1, n2);
	}while(n1 != n2);

	return 0;
}


void duplaCrescente(int *n1, int *n2){

	int aux = *n1;
	if(*n2 < *n1){
		*n1 = *n2;
		*n2 = aux;
	}
}