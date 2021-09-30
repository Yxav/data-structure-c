//Escreva	um	programa	em	C	para	ler	um	valor	Q	que	representa	a	quantidade	de	alunos	de	uma	turma.	A	
// seguir	ler	Q	pares	de	dados	contendo,	cada	um,	a	altura	e	um	có digo	para	masculino	(1)	e	outro	para	feminino	
// (2)	de	cada	aluno.	Calcular	e	escrever:
// -A	altura	do	aluno mais	alto	da	turma.
// -A	média	de	altura	das	alunas.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int Q, option, flagWoman=0;
	float height, averageWoman, highestMan=0;

	printf("Insira quantos alunos existem na turma:\n");
	scanf("%d", &Q);

	for (int i = 0; i < Q; ++i){
		printf("Insira a altura e (1) para masculino e (2) para feminino\n");
		scanf("%f %d", &height, &option);

		if(option == 1){
			if(height > highestMan){
				highestMan = height;
				}
			}
		else if(option == 2){
			averageWoman = averageWoman + height;
			flagWoman++;
		}		
	}

	averageWoman = averageWoman / flagWoman ;

	printf("O aluno mais alto da turma eh: %.2f\n", highestMan);
	printf("A media de altura das aluans eh: %.2f\n", averageWoman);


	return 0;
}
