#ifndef Cheque_H
#define Cheque_H

typedef struct {
	int checkNumber;
	float value;
	int checkStatus;
} Cheque;

void criaCheque(int checkNumber, Cheque *cheque);
void exibeCheque(Cheque *cheque);
int obtemSituacao(Cheque *cheque);
int obtemValor(Cheque *cheque);
int obtemNumero(Cheque *cheque);
int compensaCheque(Cheque *cheque);
int emiteCheque(Cheque *cheque, float checkValue);

#endif
