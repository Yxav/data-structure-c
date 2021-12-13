#include <stdio.h>
#include <stdlib.h>
#include "listase.c"

int main()
{
    int op,cd,cod,peso,status;
    ListaSE lt;
    Contato c;
    
    criaLista(&lt);

    do {
      printf("0. Fim\n");    
      printf("1. Inclui contato antes\n");    
      printf("2. Inclui contato depois\n");    
      printf("3. Consulta contato\n");    
      printf("4. Exclui contato\n");
      printf("5. Exibe lista\n");
      printf("Operacao: ");    
      scanf("%d", &op);

      switch(op){
            case 1:
                printf("[num][nome]\n");
                scanf (" %d %c", &c.num,&c.nome);
                if (incluiAntes(&lt, c)==0)
                  printf("Operacao Realizada com Sucesso!\n");
                else
                    printf("Operacao NAO realizada: Faltou Memoria!");
                break;
            case 2:
                // exibeLista(lt);
                break;
            case 3:
                // printf("Quantidade de Nodos= %d\n", quantidadeDeNodos(lt));
                break;
            case 4:
                // exibeSituacao(lt);
                break;
            // case 5:
                // status = excluiNoInicio(&lt, &d);
            //     if(status == SUCESSO)
            //       printf("O dado com codigo: %d e peso %.2f foi excluido", d.cod, d.peso);
            //     else if(status == LISTA_VAZIA)
            //     printf("A lista está vazia");
            //     break;
            // case 6:
            //     printf("[cd][peso]\n");
            //     scanf ("%d %f", &d.cod,&d.peso);
            //     if (incluiNoFim(&lt, d)==0)
            //       printf("Operacao Realizada com Sucesso!\n");
            //     else
            //       printf("Operacao NAO realizada: Faltou Memoria!");
            //     break;
            // case 7:
            //     if(excluiDoFim(&lt, &d) == 0){
            //       printf("SUCESSO");
            //       printf("O dado de codigo %d e peso %.2f foi excluido", d.cod, d.peso);
            //     } else
            //       printf("LISTA VAZIA");
            // case 8:
            //   printf("Digite um codigo:\n");
            //   scanf("%d",&cod);
            //   if(consultaPorCodigo(lt,cod,&d)==0){
            //     printf("SUCESSO\n");
            //     printf("As informações deste nodo são: %d %.2fKg",d.cod,d.peso);
            //   }
            //   else
            //     printf("CODIGO INEXISTENTE\n");
            //   break;
            // case 9: 
            //   printf("Digite um codigo:\n");
            //   scanf("%d",&cod);
            //   printf("Digite o codigo:\n");
            //   scanf("%d",&d.cod);
            //   printf("Digite o peso:\n");
            //   scanf("%f",&d.peso);
            //   status = incluiDepois(&lt,cod,d);
            //   if(status == 0) printf("SUCESSO");
            //     else if(status == 1) printf("FALTOU MEMORIA");
            //     else if(status == 3) printf("CODIGO INEXISTENTE");
            //   break;
            // case 10:
            //   printf("Digite um codigo do nodo a ser:\n");
            //   scanf("%d",&cod);
            //   if(excluiNodo(&lt,cod,&d)==0){
            //     printf("SUCESSO\n");
            //     printf("Dado excluido: %d %.2f",d.cod,d.peso);
            //     }
            //   else
            //     printf("CODIGO_INEXISTENTE\n");
            //   break;

      }
      // exibe(lt);            
    } while (op!=0);  

  return(0);
}
