#include "Aluno.c"
#include <stdio.h>


int checkDate(Date *date_today, Date *date_nasc);

int main(int argc, char const *argv[])
{
	Date dt_today, *dt_t, *dt_aluno;
	Aluno aluno;
	int isOld;

	printf("Insira a data de hoje\n");
	scanf("%d %d %d", &dt_today.day, &dt_today.month, &dt_today.year);

	float timeNow = buildDateInYears(&dt_today);

	do{
		printf("Insira a matricula\n");
		scanf("%d", &aluno.registerNumber);

		if(aluno.registerNumber < 0) return 0;		
			
		printf("Insira a data de nascimento\n");
		scanf("%d %d %d", &aluno.data_nasc.day, &aluno.data_nasc.month, &aluno.data_nasc.year);

		float timeDateAlumn = buildDateInYears(&aluno.data_nasc);
		
		isOld = timeNow - timeDateAlumn >= 18 ? 1 : 0;
		isOld == 1 ? printf("Completou 18 anos\n") : printf("Não completou 18 anos\n");
	} while(aluno.registerNumber > 0);

	return 0;
}
