#include <stdio.h>
#include <stdlib.h>
#include "listade.c"

int main()
{
  int op,cd,peso, op_code;
  ListaDE lt;
  Dado d;
  
  criaLista(&lt);

  do {
    printf("\n0. Fim                         5. Exclui do Inicio         \n");    
    printf("1. Inclui no Inicio            6. Inclui no Fim            10. Exclui Nodo\n");    
    printf("2. Exibe Lista                 7. Exclui do Fim            \n");    
    printf("3. Quantidade de Nodos         8. Consulta por Codigo       \n");    
    printf("4. Exibe Situacao da Lista     9. Inclui Depois   \n");
    printf("Operacao: ");    
    scanf("%d", &op);

    switch(op){
      case 1:
        printf("[cd][peso]\n");
        scanf (" %d %f", &d.cod,&d.peso);
        if (incluiNoInicio(&lt, d)==0)
          printf("Operacao Realizada com Sucesso!\n");
        else
          printf("Operacao NAO realizada: Faltou Memoria!");
        break;
      case 3:
        printf("Quantidade de nodos: %d",quantidadeDeNodos(lt));
        break;
      case 4:
        estaVazia(lt) == LISTA_VAZIA ? printf("A lista está vazia") : printf("A lista possui um ou mais nodos");
        break;
      case 5:
        excluiDoInicio(&lt,&d)==0
          ? printf("Operacao Realizada com Sucesso!\n\n Dado excluido foi: %d %.2f\n",d.cod,d.peso)
          : printf("Operacao NAO realizada: Lista Vazia!\n");
        break;
      case 6:
        printf("[cd][peso]\n");
        scanf (" %d %f", &d.cod,&d.peso);
        incluiNoFim(&lt, d)==0 
          ? printf("Operacao Realizada com Sucesso!\n")
          : printf("Operacao NAO realizada: Faltou Memoria!");
        break;
      case 7:
        excluiDoFim(&lt,&d)==0
        ? printf("Operacao Realizada com Sucesso!\n Dado excluido foi: %d %.2f\n",d.cod,d.peso)
        : printf("Operacao NAO realizada: Lista Vazia!\n");
        break;
      case 8:
        printf("Digite um codigo:\n");
        scanf("%d",&cd);
        op_code = consultaPorCodigo(lt,cd,&d);
        
        if(op_code==0){
          printf("Operacao Realizada com Sucesso!\n");
          printf("O nodo consultado foi: %d %.2f\n",d.cod,d.peso);
        }
        if(op_code==3)
          printf("O codigo nao existe!\n");
        if(op_code==1)
          printf("A lista esta vazia!\n");
        break;
    }
    exibe(lt);            
  } while (op!=0);  

return(0);
}
