#include "horario.c"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	Horario hour[2], *hourToPrint;
	int hour1, hour2;

	for (int index = 0; index < 2; ++index){
		printf("Digite o horario em Horas, Segundos e Minutos \n");
		scanf("%d %d %d", &hour[index].hour, &hour[index].minute, &hour[index].second);
	}

	hour1 = buildTimeToSeconds(&hour[0]);
	hour2 = buildTimeToSeconds(&hour[1]);


	if(hour1 == hour2){
		printf("Horarios iguais");
		return 0;
	}
	else if(hour1 > hour2){
		hourToPrint = &hour[1];
	} else {
		hourToPrint = &hour[0];
	}

	printf("%d:%d:%d\n", hourToPrint->hour,hourToPrint->minute, hourToPrint->second);


	return 0;
}