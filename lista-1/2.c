 // Escreva	 uma	 função	 chamada	 exibeDivisores que	 exiba	 na	 tela	 os	 divisores	 do	 inteiro	 passado	 com	
// argumento.
// Escreva	um	programa	em	C	para	imprimir	os	números	de	1	a	20	com	seus	respectivos	divisores.	Cada	conjunto	
// de	divisores	deve	ser	impresso	com	a	funçã o	exibeDivisores.	A	saı́da	deve	ser	impressa	conforme	o	formato	
// abaixo.
// 1: 1
// 2: 1 2
// 3: 1 3
// 4: 1 2 4
// 5: 1 5
// 6: 1 2 3 6
// 7: 1 7
// 8: 1 2 4 8
// ...
// 18: 1 2 3 6 9 18
// 19: 1 19
// 20: 1 2 4 5 10 20


#include <stdio.h>


void exibeDivisores(int number);

int main(int argc, char const *argv[])
{
	for (int index = 1; index < 21; ++index){
		exibeDivisores(index);
	}

	return 0;
}

void exibeDivisores(int number){
	printf("%d: ", number);
	for (int index = 1; index <= number; ++index){
		if(number % index == 0){
			printf("%d ", index);
		}
	}
		printf("\n");
}




