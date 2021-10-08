#include "horario.h"


int buildTimeToSeconds(Horario *data){
	int timeInSeconds = 0;
	timeInSeconds += data->minute * 60;
	timeInSeconds += data->hour * 3600;
	timeInSeconds += data->second;

	return timeInSeconds;
}