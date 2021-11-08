#include <stdio.h>
#include <stdlib.h>
#include "pilhase.c"

int main()
{
    int op,cd,peso;
    PilhaSe p;
    Dado d;
    
    criaPilha(&p);

    do {
      printf("\n0. Fim                      5. Consulta Topo  \n");    
      printf("1. Empilha\n");    
      printf("2. Desempilha\n");    
      printf("3. Quantidade de Nodos\n");    
      printf("4. Exibe Situacao da Lista\n");
      printf("Operacao: ");    
      scanf("%d", &op);

      switch(op){
        case 1:
            printf("[cd][peso]\n");
            scanf (" %d %f", &d.cod,&d.peso);
            if (empilha(&p, d)==0)
              printf("Operacao Realizada com Sucesso!\n");
            else
              printf("Operacao NAO realizada: Faltou Memoria!");
            break;
        case 2:
          if (desempilha(&p, &d)==0){
              printf("SUCESSO\n");
              printf("O dado excluido foi:%d %.2f ",d.cod,d.peso);
            }
          else
            printf("Operacao NAO realizada: Pilha vazia!");
          break;
        case 3:
            printf("Quantidade de Nodos= %d\n", quantidadeDeNodos(p));
            break;
        case 4:
          estaVazia(p)==1 ? printf("A pilha esta vazia\n") : printf("A pilha possui 1 ou mais nodos\n");
          break;
        case 5:
          (consultaTopo(p,&d)==1) ? printf("PILHA_VAZIA\n") : printf("O nodo do topo e: %d %.2f\n",d.cod,d.peso);
          break; 
      }
      exibe(p);            
  } while (op!=0);  

  return(0);
}
