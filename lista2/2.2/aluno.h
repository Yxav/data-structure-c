#ifndef Aluno_H
#define Aluno_H

typedef struct {
	int day;
	int month;
	int year;
} Date;

typedef struct {
	int registerNumber;
	Date data_nasc;
} Aluno;

float buildDateInDays(Date *data);


#endif
