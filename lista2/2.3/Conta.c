#include "conta.h"


void criaConta(int accountNumber, Conta *conta){

	conta->accountNumber = accountNumber;
	conta->currencyValue = 0;
}


void depositaConta(Conta *conta, float depositValue){
	conta->currencyValue += depositValue;

}


void retiraDaConta(Conta *conta, float takeOutValue){
	conta->currencyValue -= takeOutValue;
}



float obtemSaldo(Conta *conta){
	return conta->currencyValue;
}