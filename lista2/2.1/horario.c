#include "horario.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	Horario hour[2], *p;

	for (int index = 0; index < 2; ++index){
		printf("Digite o horario em Horas, Segundos e Minutos \n");
		scanf("%d %d %d", &hour[index].hour, &hour[index].minute, &hour[index].second);
	}

	if(hour[0].hour > hour[1].hour) p = &hour[1];
	else p = &hour[0];


	if((hour[0].hour == hour[1].hour) && (hour[0].minute == hour[1].minute) && (hour[0].second == hour[1].second)){
			printf("Horario iguais\n");
			return 0;
		}

	printf("%d:%d:%d\n",p->hour, p->minute, p->second);


	return 0;
}