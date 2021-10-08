#ifndef Horario_H
#define Horario_H

typedef struct {
	int hour;
	int minute;
	int second;
} Horario;


int buildTimeToSeconds(Horario *data);
#endif
