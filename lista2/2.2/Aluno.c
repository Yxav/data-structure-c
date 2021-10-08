#include "aluno.h"
#include <stdio.h>


float buildDateInYears(Date *data){
	float timeInYears = 0;
	timeInYears += (double)data->day / 365;
	timeInYears += (double)data->month / 12;
	timeInYears += data->year;

	return timeInYears;
}