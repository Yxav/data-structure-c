#include <stdio.h>
#include "Conta.c"

void showCurrentValues(Conta *cc_acc, Conta *sav_acc);

int main(int argc, char const *argv[])
{
	Conta cc_account, saving_account;
	int number, op;
	float valueOperation;

	printf("Insira o numero da conta corrente\n");
	scanf("%d", &number);
	criaConta(number, &cc_account);

	printf("Agora, insira o numero da conta poupança\n");
	scanf("%d", &number);
	criaConta(number, &saving_account);

	printf("\nEscolha uma opcao:\n");
	printf(" 1.Deposito conta corrente\n 2.Deposito Poupanca\n 3.Retirada conta corrente\n 4.Retirada poupanca\n 5.Fim\n\n");
	scanf("%d", &op);

	while(op != 5){
		switch(op){
			case 1:
				printf("Vc escolheu depósito em conta corrente, por favor, insira o valor:\n");
				scanf("%f", &valueOperation);
				depositaConta(&cc_account, valueOperation);
				showCurrentValues(&cc_account, &saving_account);
				break;
			case 2:
				printf("Vc escolheu depósito em conta poupança, por favor, insira o valor:\n");
				scanf("%f", &valueOperation);
				depositaConta(&saving_account, valueOperation);
				showCurrentValues(&cc_account, &saving_account);
				break;

		}
		printf("\nEscolha uma opcao:\n");
		printf(" 1.Deposito conta corrente\n 2.Deposito Poupanca\n 3.Retirada conta corrente\n 4.Retirada poupanca\n 5.Fim\n\n");
		scanf("%d", &op);

	}
			
	

	
	return 0;
}


void showCurrentValues(Conta *cc_acc, Conta *sav_acc){
	printf("Conta corrente - $ %.2f\n", obtemSaldo(cc_acc));
	printf("Conta poupanca - $ %.2f\n", obtemSaldo(sav_acc));
}