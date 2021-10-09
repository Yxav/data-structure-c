#include <stdio.h>
#include "Cheque.c"

int main(int argc, char const *argv[])
{
	int checkNumber;
	float checkValue;
	Cheque cheque1, cheque2;

	printf("Insira o numero do cheque\n");
	scanf("%d", &checkNumber);
	criaCheque(checkNumber,&cheque1);

	printf("Agora insira outro numero de cheque\n");
	scanf("%d", &checkNumber);
	criaCheque(checkNumber,&cheque2);

	printf("Insira o valor do cheque 1\n");
	scanf("%f", &checkValue);
	emiteCheque(&cheque1 ,checkValue);

	printf("Insira o valor do cheque 2\n");
	scanf("%f", &checkValue);
	emiteCheque(&cheque2, checkValue);

	exibeCheque(&cheque1);
	exibeCheque(&cheque2);

	obtemValor(&cheque1) > obtemValor(&cheque2) ? compensaCheque(&cheque1) : compensaCheque(&cheque2);

	printf("%d\n", obtemSituacao(&cheque1));
	printf("%d\n", obtemSituacao(&cheque2));
	

	printf("%d\n", obtemNumero(&cheque1));
	printf("%d\n", obtemNumero(&cheque2));

	return 0;
}