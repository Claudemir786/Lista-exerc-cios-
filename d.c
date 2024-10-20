#include <stdio.h>
#include <stdlib.h>

int main()
{
  //exerciocio 1//

  int a[10];
  int soma=0;

    for(int i=0;i<10;i++){
        printf("digite um numero inteiro da gaveta-%d:\n",i);
        scanf("%d", &a[i]);
        soma=soma+a[i];
    }
    for(int i=0;i<10;i++){
        printf("vetor:[%d] valor:%d \t",i,a[i]);
    }
    printf("a soma total de todos os valores eh: %d\n",soma);*/


    //exercicio 2//
    float a[5];
    float soma=0;
    float media=0;

        for(int i=0; i<5; i++){
            printf("digite a nota do aluno:\n");
            scanf("%f", &a[i]);
            soma=soma+a[i];
        }
        media=soma/5;
        printf("a media de notas dos alunos eh:%.2f",media);*/

        //exercicio3//

        int a[8];
        int maior=0,menor=0;
        printf("digite um numero inteiro da gaveta 0:");
        scanf("%d", &a[0]);
        maior=a[0];
        menor=a[0];

            for(int i=0;i<7;i++){
               printf("digite um numero inteiro:");
               scanf("%d", &a[i]);

               if(a[i]>maior){
                maior=a[i];
               } else{
                 menor=a[i];
               }
            }

            printf("maior numero:%d \t menor numero:%d",maior,menor);*/


        //exercicio 4//
         int vetor[15];
         int a,b;
         for(int i=0;i<15;i++){
            printf("digite um numero inteiro:\n");
            scanf("%d", &vetor[i]);
            if(vetor[i]%2==0){
                a++;
                printf("este numero eh par\n");
            }
         }
          printf("somente %d numeros sao pares\n",a);*/



          //exercicio 5
          int vetor[6];
          for(int i=6;i>=0;i--){
            printf("digite um numero inteiro do vetor:%d\n",i);
            scanf("%d", &vetor[i]);
          }
          for(int i=6;i>=0;i--){
            printf("vetor[%d] valor %d\n",i, vetor[i]);
          }

          //exercicio 6//
          int vetor[10],indice;
          for(int i=0;i<10;i++){
            printf("digite a quantidade em estoque do pruduto %d\n",i);
            scanf("%d", &vetor[i]);

          }

          printf("qual gaveta voce quer abrir para consultar o estoque\n?");
          scanf("%d", &indice);
          if(indice>9){
            printf("este produto nao existe\t");
          }
          printf("o estoque desse produto eh:%d\n",vetor[indice]);


          //exercicio 7//
          int a[7],dia;
          float media=0;
          printf("digite a temperatura do dia \n");
          scanf("%d", &a[0]);
          int maior=a[0],menor=a[0];
          float soma=a[0];


          for(int i=1;i<7;i++){
            printf("digite a temperatura do dia\n");
            scanf("%d", &a[i]);
            soma=soma+a[i];
            if(a[i]>maior){
                maior=a[i];
                dia=i;
          }
          }
          dia+=1;
          media=soma/7;
          printf("a temperatura media foi %.2f graus\ne o dia mais quente foi o dia: %d com %d graus\n",media,dia,maior);

            //exercicio 8//
            float clientes[10],soma=0,media;
            int nota_maxima=0;
            for(int i=0;i<10;i++){
                printf("de uma nota de satisfacao de 1 a 5\n");
                scanf("%f", &clientes[i]);
                if(clientes[i]<=5 && clientes[i]>0){
                    soma=soma+clientes[i];
                    if(clientes[i]==5){
                    nota_maxima++;
                    }
                }
                else if(clientes[i]>5){
                    printf("numero de nota invalido, por favor digite um numero de 1 a 5\n");
                }
            }
              media=soma/10;
              printf("A media de notas eh:%.2f\nE a quantidade de notas maximas eh:%d",media,nota_maxima);

              //exercicio9//
              float vendas[30],maior_venda;
              printf("digite o total de vedas do dia de hoje:\n");
              scanf("%f", &vendas[0]);
              float soma=vendas[0];
              maior_venda=vendas[0];
              int dia;

              for(int i=1;i<30;i++){
                printf("digite o total de vedas do dia de hoje:\n");
                scanf("%f", &vendas[i]);
                soma+=vendas[i];

                if(vendas[i]>maior_venda){
                    maior_venda=vendas[i];
                    dia=i;
                }

              }
              dia+=1;
              printf("o total de vendas do mes eh:%.2f\nE o dia com maior venda eh o dia:%d",soma,dia);













    return 0;
}
