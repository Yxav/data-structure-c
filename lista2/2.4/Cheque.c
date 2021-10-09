#include "Cheque.h"

void criaCheque(int checkNumber, Cheque *cheque){

	cheque->checkNumber = checkNumber;
	cheque->value = 0;
	cheque->checkStatus = 0;

}

void exibeCheque(Cheque *cheque){
	char status[3][10] = {"Em branco","Emitido", "Compensado"};
	int opStatus;

	if(cheque->checkStatus == 2) opStatus = 2;
	else if(cheque->checkStatus == 1) opStatus = 1;
	else opStatus = 0;

	printf("N.:%d       Valor: $ %2.f     Situação:%s  \n", cheque->checkNumber, cheque->value, status[opStatus]);
}

int obtemSituacao(Cheque *cheque){
	return cheque->checkStatus;
}

int obtemValor(Cheque *cheque){
	return cheque->value;
}

int obtemNumero(Cheque *cheque){
	return cheque->checkNumber;
}

int compensaCheque(Cheque *cheque){
	if (cheque->checkStatus == 1){
	cheque->checkStatus = 2;
	return 0;
	} 
	return 1;
}
int emiteCheque(Cheque *cheque, float checkValue){
	if (cheque->checkStatus == 0){
	cheque->checkStatus = 1;
	cheque->value = checkValue;
	return 0;
	} 
	return 1;
}
