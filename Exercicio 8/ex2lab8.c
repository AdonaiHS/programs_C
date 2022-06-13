//Adonai Hilario da Silva 9284192

#include <stdio.h>
#include <string.h>

/* OBS: O programa desconsidera anos bisextos, ou seja, ele não permite que o dia de nascimento de alguem seja 29/02,
independentemente do ano de nascimento */

/* OBS: Se no momento de digitar o nome a pessoa digitar "espaço" em qualquer posição, o programa irá bugar,
deixei a informação de que caso o nome seja composto, separar usando o "underline" ou qualquer outro simbolo */

typedef struct{
    int dia;
    int mes;
    int ano;
} data;

typedef struct{
    char N[100];
    data ddn;
    //"ddn" significa dia_do_nascimento
} pessoa;

    //Função que analisa quem é mais velho:
    int maisvelha(pessoa A, pessoa B){

        //Comparando ano:
        if(A.ddn.ano<B.ddn.ano){
        return(0);
        }
        if(A.ddn.ano>B.ddn.ano){
        return(1);
        }
        //Comparando mes:
        if(A.ddn.mes<B.ddn.mes){
        return(0);
        }
        if(A.ddn.mes>B.ddn.mes){
        return(1);
        }
        //Comparando dia:
        if(A.ddn.dia<B.ddn.dia){
        return(0);
        }
        if(A.ddn.dia>B.ddn.dia){
        return(1);
        }
        else{
        //Caso tenham a mesma idade:
        return(2);
        }
    }

    //

    int main(){

    int mv;
    data d1,d2;
    pessoa p1,p2;

    printf("Digite o nome da primeira pessoa, caso seja nome composto separe usando o\nunderline (_):\n");
    scanf("%s", p1.N);
    //
    printf("\nDigite o ano do nascimento de %s:\n", p1.N);
    scanf("%d", &d1.ano);
    //
    printf("\nDigite o mes do nascimento de %s:\n", p1.N);
    scanf("%d", &d1.mes);
        while(d1.mes<1 || d1.mes>12){
        printf("Invalido, deve ser um numero entre 1 e 12:\n");
        scanf("%d", &d1.mes);
        }
    //
    printf("\nDigite o dia do nascimento de %s:\n", p1.N);
    scanf("%d", &d1.dia);
        while(d1.dia<1 || d1.dia>31 || (d1.mes==2 && d1.dia>28) || (d1.mes==4 || d1.mes==6 || d1.mes==9 || d1.mes==11) && d1.dia>30 ){
            if(d1.dia<1 || d1.dia>31){
            printf("invalido, nao existe esse dia, digite novamente:\n");
            scanf("%d", &d1.dia);
            }
            else{
                if(d1.mes==2 && d1.dia>28){
                printf("Invalido, o mes 2 vai ate o dia 28, digite novamente:\n");
                scanf("%d", &d1.dia);
                }
                else{
                    printf("Invalido, o mes %d vai ate o dia 30 apenas, digite novamente:\n", d1.mes);
                    scanf("%d", &d1.dia);
                }
            }
        }
        //
        p1.ddn=d1;
        system("clear");
        //
    printf("Digite o nome da segunda pessoa, caso seja nome composto separe usando o\nunderline (_):\n");
    scanf("%s", p2.N);
    //
    printf("\nDigite o ano do nascimento de %s:\n", p2.N);
    scanf("%d", &d2.ano);
    //
    printf("\nDigite o mes do nascimento de %s:\n", p2.N);
    scanf("%d", &d2.mes);
        while(d2.mes<1 || d2.mes>12){
        printf("Invalido, deve ser um numero entre 1 e 12:\n");
        scanf("%d", &d2.mes);
        }
    //
    printf("\nDigite o dia do nascimento de %s:\n", p2.N);
    scanf("%d", &d2.dia);
        while(d2.dia<1 || d2.dia>31 || (d2.mes==2 && d2.dia>28) || (d2.mes==4 || d2.mes==6 || d2.mes==9 || d2.mes==11) && d2.dia>30 ){
            if(d2.dia<1 || d2.dia>31){
            printf("invalido, nao existe esse dia, digite novamente:\n");
            scanf("%d", &d2.dia);
            }
            else{
                if(d2.mes==2 && d2.dia>28){
                printf("Invalido, o mes 2 vai ate o dia 28, digite novamente:\n");
                scanf("%d", &d2.dia);
                }
                else{
                    printf("Invalido, o mes %d vai ate o dia 30 apenas, digite novamente:\n", d1.mes);
                    scanf("%d", &d2.dia);
                }
            }
        }
        //
        p2.ddn=d2;
        system("clear");
        //
        mv=maisvelha(p1,p2);
        switch(mv){
            case 0:
                printf("\n%s e mais velho(a) do que %s\n______________________________________________________\n", p1.N, p2.N);
                ;break;
            case 1:
                printf("\n%s e mais velho(a) do que %s\n______________________________________________________\n", p2.N, p1.N);
                ;break;
            case 2:
                printf("\n%s e %s possuem a mesma idade\n______________________________________________________\n", p1.N, p2.N);
                ;break;
        }
        //
return(0);
}
