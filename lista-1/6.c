// Escreva	 uma	 função	 chamada	duplaClassificada que	 classifique	 2	 valores	inteiros	 conforme	 o	 có digo	
// passado	como	argumento	(0-ordem	crescente	1-ordem	decrescente).
// Entrada:	Um	có digo	que	identifica	a	ordem	de	classificaçã o	(0-ordem	crescente	1-ordem	decrescente).
// Entrada:	Dois	valores	inteiros.
// Saída:	Os	2	valores	de	entrada	na	ordem	desejada
// Retorno:	Nenhum
// Escreva	um	programa	para	ler	uma	quantidade	indeterminada	de	duplas	de	valores.	Escrever	cada	dupla	em	
// ordem	crescente	se	a	soma	dos	elementos	da	dupla	for	par	e	em	ordem	decrescente	se	a	soma	for	ı́mpar.	Os	
// valores	em	ordem	(conforme	o	caso)	devem	ser	obtidos	através	da	chamada	à	funçã o	duplaClassificada.	O	
// programa	termina	quando	os	dois	valores	informados	forem	iguais	(nesta	situação	os	valores	não	devem	ser	
// impressos).


#include <stdio.h>

void duplaClassificada(int op, int *n1, int *n2);

int main(int argc, char const *argv[])
{
	int n1,n2, op;

	do{
		printf("Insira dois numeros\n");
		scanf("%d %d", &n1, &n2);

		op = (n1 + n2 ) % 2;

		duplaClassificada(op, &n1, &n2);
		printf("%d %d\n", n1, n2);
		
	}while(n1 != n2);

	return 0;
}

void duplaClassificada(int op, int *n1, int *n2){
	
	int aux = *n1;
	if(op == 0){
		if(*n2 < *n1){
			*n1 = *n2;
			*n2 = aux;
		}
	}
	else if(op == 1){
		if(*n2 > *n1){
			*n1 = *n2;
			*n2 = aux;
		} 
	}
}