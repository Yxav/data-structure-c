#include <stdio.h>
#include <stdlib.h>
#include "listase.c"

int main()
{
    int op,cd,cod,peso,status;
    ListaSE lt;
    Dado d;
    
    criaLista(&lt);

    do {
      printf("\n0. Fim                         5. Exclui do Inicio         10. Exclui Nodo\n");    
      printf("1. Inclui no Inicio            6. Inclui no Fim            \n");    
      printf("2. Exibe Lista                 7. Exclui do Fim            \n");    
      printf("3. Quantidade de Nodos         8. Consulta por Codigo      \n");    
      printf("4. Exibe Situacao da Lista     9. Inclui Depois.           \n");
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
                printf("Quantidade de Nodos= %d\n", quantidadeDeNodos(lt));
                break;
            case 4:
                exibeSituacao(lt);
                break;
            case 5:
                status = excluiNoInicio(&lt, &d);
                if(status == SUCESSO)
                  printf("O dado com codigo: %d e peso %.2f foi excluido", d.cod, d.peso);
                else if(status == LISTA_VAZIA)
                printf("A lista está vazia");
                break;
            case 6:
                printf("[cd][peso]\n");
                scanf ("%d %f", &d.cod,&d.peso);
                if (incluiNoFim(&lt, d)==0)
                  printf("Operacao Realizada com Sucesso!\n");
                else
                  printf("Operacao NAO realizada: Faltou Memoria!");
                break;
            case 7:
                if(excluiDoFim(&lt, &d) == 0){
                  printf("SUCESSO");
                  printf("O dado de codigo %d e peso %.2f foi excluido", d.cod, d.peso);
                } else
                  printf("LISTA VAZIA");
            case 8:
              printf("Digite um codigo:\n");
              scanf("%d",&cod);
              if(consultaPorCodigo(lt,cod,&d)==0){
                printf("SUCESSO\n");
                printf("As informações deste nodo são: %d %.2fKg",d.cod,d.peso);
              }
              else
                printf("CODIGO INEXISTENTE\n");
              break;
            case 9: 
              printf("Digite um codigo:\n");
              scanf("%d",&cod);
              printf("Digite o codigo:\n");
              scanf("%d",&d.cod);
              printf("Digite o peso:\n");
              scanf("%f",&d.peso);
              status = incluiDepois(&lt,cod,d);
              if(status == 0) printf("SUCESSO");
                else if(status == 1) printf("FALTOU MEMORIA");
                else if(status == 3) printf("CODIGO INEXISTENTE");
              break;

      }
      exibe(lt);            
    } while (op!=0);  

  return(0);
}
