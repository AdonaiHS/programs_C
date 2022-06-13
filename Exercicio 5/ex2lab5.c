//Adonai Hilario da Silva 9284192

#include <stdio.h>

int main (){

    float M[10][10],res;
    int contcol,contlin,n,op,i,j;

    printf("Digite a ordem da matriz quadrada a ser trabalhada (entre 2 e 10):\n");
    scanf("%d", &n);
        while(n<2 || n>10){
        printf("\nErro, o numero precisa ser >=2 ou <=10:\n");
        scanf("%d", &n);
        }
    system("clear");
    //
    for(contlin=0;contlin<n;contlin++){
        printf("Digite os %d elementos da linha %d:\n\n", n, contlin+1);
            for(contcol=0;contcol<n;contcol++){
            scanf("%f", &M[contlin][contcol]);
            }
        printf("\n");
    }
    system("clear");
    //
    printf("Agora digite o numero da operacao desejada de acordo aom a tabela abaixo:\n\n1 - Soma dos elementos da linha i da matriz\n2 - Soma dos elementos da coluna j da matriz\n3 - Soma dos elementos da diagonal principal\n4 - Soma dos elementos da diagonal secundaria\n5 - Soma de todos os elementos da matriz\n\n");
    scanf("%d", &op);
        while(op<1 || op>5){
        printf("invalido: ");
        scanf("%d", &op);
        }
    //
    switch(op){
        //
        case 1:
            printf("\nDigite a linha que tera seus elementos somados: ");
            scanf("%d", &i);
                while(i<0 || i>n){
                printf("Linha invalida\n");
                scanf("%d", &i);
                }
            for(contcol=0,res=0;contcol<n;contcol++){
            res=M[i-1][contcol]+res;
            }
            ;break;
        //
        case 2:
            printf("\nDigite a coluna que tera seus elementos somados: ");
            scanf("%d", &j);
                while(j<0 || j>n){
                printf("Coluna invalida\n");
                scanf("%d", &j);
                }
            for(contlin=0,res=0;contlin<n;contlin++){
            res=M[contlin][j-1]+res;
            }
            ;break;
        //
        case 3:
            for(contlin=0,contcol=0,res=0;contlin<n && contcol<n;contlin++,contcol++){
            res=M[contlin][contcol]+res;
            }
            ;break;
        //
        case 4:
            for(contlin=0,contcol=(n-1);contlin<n && contcol>=0;contlin++,contcol--){
            res=M[contlin][contcol]+res;
            }
            ;break;
        //
        case 5:
            res=0;
            for(contlin=0;contlin<n;contlin++){
                for(contcol=0;contcol<n;contcol++){
                res=M[contlin][contcol]+res;
                }
            }
            ;break;
    }
    printf("______________________________________________________\n\nSOMA = %.2f\n______________________________________________________\n", res);
    //
return(0);
}
