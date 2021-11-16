#include <stdio.h>
#include <stdlib.h>
#include "filaSE.c"

int main()
{
    int op,cd,peso;
    FilaSe f;
    Dado d;
    
    criaFila(&f);

    do {
      printf("\n0. Fim                      5. Consulta Frente  \n");    
      printf("1. Insere\n");    
      printf("2. Retira\n");    
      printf("3. Quantidade de Nodos\n");    
      printf("4. Exibe Situacao da fila\n");
      printf("Operacao: ");    
      scanf("%d", &op);

      switch(op){
        case 1:
            printf("[cd][peso]\n");
            scanf (" %d %f", &d.cod,&d.peso);
            if (insere(&f, d)==0)
              printf("Operacao Realizada com Sucesso!\n");
            else
              printf("Operacao NAO realizada: Faltou Memoria!");
            break;
        case 2:
          if (retira(&f, &d)==0){
              printf("SUCESSO\n");
              printf("O dado excluido foi:%d %.2f ",d.cod,d.peso);
            }
          else
            printf("Operacao NAO realizada: Fila vazia!");
          break;
        case 3:
            printf("Quantidade de Nodos= %d\n", quantidadeDeNodos(f));
            break;
        case 4:
          estaVazia(f)==1 ? printf("A fila esta vazia\n") : printf("A fila possui 1 ou mais nodos\n");
          break;
        case 5:
          (consultaTopo(f,&d)==1) ? printf("FILA_VAZIA\n") : printf("O nodo do topo e: %d %.2f\n",d.cod,d.peso);
          break; 
      }
      exibe(f);            
  } while (op!=0);  

  return(0);
}
