// Escreva	uma	função	chamada	maiorNumero que	receba	como	entrada	dois	inteiros	positivos	e	retorne	o	
// maior	deles	ou	o	valor	-1	se	eles	forem	iguais.	Considere	que	os	valores	de	entrada	sã o	sempre	positivos	(nã o	
// é	necessá rio	validar).
// Escreva	 um	 programa	 em	 C	 para	 ler	 um	 valor	 N.	 A	 seguir	 ler	 N	 duplas	 de	 inteiros	 (considere	 que	 serã o	
// informado	apenas	valores	positivos).	Para	cada	dupla	informada	exibir	o	maior	elemento	ou	a	frase	“Eles	sã o	
// iguais”.	Para	obter	o	maior	elemento	deve	ser	utilizada	a	funçã o	maiorNumero.
// [Entrada] [Saída]
// 3
// 20 15 20
// 7 12 12
// 5 5 Eles são iguais

#include <stdio.h>

int maiorNumero(int number1, int number2);

int main(int argc, char const *argv[])
{
	int N, integer1, integer2, higherNumber;

	printf("Insira quantas duplas de inteiros\n");
	scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		printf("Insira os dois inteiros\n");
		scanf("%d %d", &integer1, &integer2);
		higherNumber = maiorNumero(integer1, integer2);

		higherNumber == -1 ? printf("Eles são iguais\n"): 0; 
		printf("%d\n", higherNumber);
	}
	return 0;
}

int maiorNumero(int number1, int number2){
	if(number1 == number2) return -1;
	return number1 > number2 ? number1 : number2; 
}
