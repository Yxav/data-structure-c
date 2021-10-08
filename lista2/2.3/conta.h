#ifndef Conta_H
#define Conta_H

typedef struct {
	int accountNumber;
	float currencyValue;
} Conta;

void criaConta(int accountNumber, Conta *conta);
void depositaConta(Conta *conta, float depositValue);
void retiraDaConta(Conta *conta, float takeOutValue);
float obtemSaldo(Conta *conta);


#endif
