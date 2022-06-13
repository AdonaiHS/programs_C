//Adonai Hilario da Silva 9284192

#include <stdio.h>

/* OBS: O programa considera que dois quadrados que se tocam porém não ultrapassam seus limites não se interceptam,
POR EXEMPLO: o quadrado:[(0,0);(0,1);(1,0);(1,1)] não intercepta o quadrado:[(1,0);(1,1);(2,0);(2,2)], eles apenas se tocam */

typedef struct{
    float x,y;
} ponto;

typedef struct{
    ponto sup_e,sup_d,inf_e,inf_d;
} retangulo;

typedef struct{
    int n;
    ponto V[1000];
} corpo;

    //Função que constroi a "caixa", retangulo:
    retangulo caixa(corpo q){

        retangulo r;
        float x_max,x_min,y_max,y_min;
        int i;

        x_max=q.V[0].x;
        x_min=q.V[0].x;
        y_max=q.V[0].y;
        y_min=q.V[0].y;
        //Descobrindo o x_max:
        for(i=0;i<q.n;i++){
            if(q.V[i].x>x_max){
            x_max=q.V[i].x;
            }
        }
        //Descobrindo o x_min:
        for(i=0;i<q.n;i++){
            if(q.V[i].x<x_min){
            x_min=q.V[i].x;
            }
        }
        //Descobrindo o y_max:
        for(i=0;i<q.n;i++){
            if(q.V[i].y>y_max){
            y_max=q.V[i].y;
            }
        }
        //Descobrindo o y_min:
        for(i=0;i<q.n;i++){
            if(q.V[i].y<y_min){
            y_min=q.V[i].y;
            }
        }
        //Construindo a caixa:
        r.sup_e.x=x_min;
        r.sup_e.y=y_max;
        r.sup_d.x=x_max;
        r.sup_d.y=y_max;
        r.inf_e.x=x_min;
        r.inf_e.y=y_min;
        r.inf_d.x=x_max;
        r.inf_d.y=y_min;
        //
        return(r);
    }

    //Função que verifica se há intercepção (Desculpe a bagunça, são muitas variaveis e muitas possibilidades):
    int verificador(retangulo ra, retangulo rb){

        float x_max_A,x_max_B,x_min_A,x_min_B,y_max_A,y_max_B,y_min_A,y_min_B;

        x_max_A=ra.sup_d.x;
        y_max_A=ra.sup_d.y;
        x_min_A=ra.inf_e.x;
        y_min_A=ra.inf_e.y;
        x_max_B=rb.sup_d.x;
        y_max_B=rb.sup_d.y;
        x_min_B=rb.inf_e.x;
        y_min_B=rb.inf_e.y;

        if( (x_min_A<x_min_B && x_max_A>x_min_B && y_max_A>y_max_B && y_min_A<y_max_B) ||
        (x_min_B<x_min_A && x_max_B>x_min_A && y_max_B>y_max_A && y_min_B<y_max_A) ||
        (x_min_B<x_max_A && x_max_B>x_max_A && y_min_B<y_max_A && y_min_B>y_min_A) ||
        (x_min_A<x_max_B && x_max_A>x_max_B && y_min_A<y_max_B && y_min_A>y_min_B) ||
        (x_min_A<x_max_B && x_max_A>x_max_B && y_min_A<y_max_B && y_min_A<y_min_B) ||
        (x_min_B<x_max_A && x_max_B>x_max_A && y_min_B<y_max_A && y_min_B<y_min_A) ||
        (x_min_A<x_min_B && x_max_A>x_max_B && y_max_A<y_max_B && y_min_A>y_min_B) ||
        (x_min_B<x_min_A && x_max_B>x_max_A && y_max_B<y_max_A && y_min_B>y_min_A) ||
        (x_min_A==x_min_B && x_max_A==x_max_B && y_min_A==y_min_B && y_max_A==y_max_B)){
        //Se retornar "0" é porque há intercepção, se retornar "1" é porque não há intercepção:
        return(0);
        }
        else{
        return(1);
        }
    }

    int main(){

    int i,result;
    corpo a,b;
    retangulo ra,rb;

    printf("Digite o numero de pontos (vertices) do primeiro corpo, considerando que seja\num poligono:\n");
    scanf("%d", &a.n);
        while(a.n<1 || a.n>1000){
        printf("\nO corpo pode ter de 1 a 1000 pontos, digite novamente:\n");
        scanf("%d", &a.n);
        }
        for(i=0;i<a.n;i++){
        printf("\nDigite as coordenadas X e Y do ponto %d:\n", i+1);
        scanf("%f %f", &a.V[i].x, &a.V[i].y);
        }
    system("clear");
    //
    printf("Digite o numero de pontos (vertices) do segundo corpo, considerando que seja\num poligono:\n");
    scanf("%d", &b.n);
        while(b.n<1 || b.n>1000){
        printf("\nO corpo pode ter de 1 a 1000 pontos, digite novamente:\n");
        scanf("%d", &b.n);
        }
        for(i=0;i<b.n;i++){
        printf("\nDigite as coordenadas X e Y do ponto %d\n", i+1);
        scanf("%f %f", &b.V[i].x, &b.V[i].y);
        }
    system("clear");
    //
    ra=caixa(a);
    rb=caixa(b);
    //
    result=verificador(ra,rb);
    //
    switch(result){
        case 0:
            printf("\nOs corpos se interceptam\n______________________________________________________\n");
            ;break;
        case 1:
            printf("\nOs corpos nao se interceptam\n______________________________________________________\n");
            ;break;
    }
    return(0);
}
