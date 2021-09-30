// 1.4 Escreva	um	programa	em	C	para	ler	um	inteiro	Q	(máximo	10).	A	seguir	ler	um	vetor	Z	de	Q	elementos	e	
// um	 valor	 Y.	 Copiar	 todos	 os	 elementos	maiores	 que	 Y	 que	 estã o	 no	 vetor	 Z	 para	 um	 vetor	W	 (sem	 deixar	
// elementos	vazios	entre	os	valores	copiados).	Escrever o	vetor	W	apó s	o	término	có pia.
// [Entrada]                       [Saída]
// 10
// 2 15 14 18 9 13 0 45 12 21            15 18 45 21
// 14

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int flagY=0, Q, Y, Z[10], W[10];

  printf("Insira quantos elementos o vetor contem (max 10)\n");
  scanf("%d", &Q);

  printf("Insira o valor minimo Y\n");
  scanf("%d", &Y);

  printf("Insira os elementos do vetor \n");
  for (int index = 0; index < Q; ++index){
      scanf("%d", &Z[index]);
      if(Z[index] > Y){
          W[flagY] = Z[index];
          flagY++;
      }
  }

  for (int index2 = 0; index2 < flagY; ++index2){
    printf("%d ", W[index2]);
  }
  return 0;
}