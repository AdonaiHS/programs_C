//Adonai Hilario da Silva 9284192

#include <stdio.h>
#include <stdlib.h>

int main (){

    int M[10][10],V[20],k,n,i,j,dnv,c,s;
    //Como no enunciado do exercicio diz que M é uma matriz inteira, ela arredonda os preços caso hajam centavos nos mesmos.

    dnv=1;
    printf("Digite quantas cidades haverao no sistema (maximo 10): ");
    scanf("%d", &n);
        while(n<0 || n>10){
        printf("\nNumero invalido, tente novamente: ");
        scanf("%d", &n);
        }
    system("clear");
    for(i=0;i<n;i++){
    printf("OBS: Se o preco nao for um numero inteiro ele sera arredondado\n");
        for(j=0;j<n;j++){
        printf("\nDigite o preco para se viajar da cidade %d para a cidade %d: ", i+1, j+1);
        scanf("%d", &M[i][j]);
            while(M[i][j]<0){
            printf("\nO preco da viagem de %d para %d deve ser um numero maior ou igual a 0, digite\nnovamente: ", i+1,j+1);
            scanf("%d", &M[i][j]);
            }
        printf("\n");
        }
    system("clear");
    }
    system("clear");
    while(dnv==1){
    system("clear");
        printf("Para saber o preco de um itinerario digite por quantas cidades se passarao no\ndecorrer da viagem, incluindo a cidade de origem e a cidade final (numero entre 2 e 20): ");
        scanf("%d", &k);
            while(k<2 || k>20){
            printf("\nInvalido, tente novamente: ");
            scanf("%d", &k);
            }
        system("clear");
            printf("Agora digite a ordem em que as cidades aparecem no intinerario\n\nEXEMPLO: 1 3 2 4 significa viagem de 1 para 3, de 3 para 2 e de 2 para 4\n\n");
            for(c=0;c<k;c++){
            scanf("%d", &V[c]);
                if(V[c]<1 || V[c]>n){
                printf("\nNo sistema criado por voce existem %d cidades, portanto os numeros devem estar\nentre 1 e %d, digite a sequencia novamente:\n\n", n,n);
                    for(;c<(k-1);c++){
                    scanf("%d", &V[c]);
                    }
                c=-1;
                }
            }
        system("clear");
            for(c=0,s=0;c<(k-1);c++){
            printf("\n%d --> %d = R$ %d,00\n", V[c],V[c+1],M[V[c]-1][V[c+1]-1]);
            s=M[V[c]-1][V[c+1]-1]+s;
            }
            printf("______________________________________________________\n\nTOTAL = R$ %d,00\n______________________________________________________", s);
        printf("\n\nDeseja saber o preco de outro intinerario? Se sim digite '1', se nao digite\nqualquer outro numero: ");
        scanf("%d", &dnv);
    }
    system("clear");
    return(0);
}

