//Adonai Hilario da Silva 9284192

#include <stdio.h>

int main (){

    float A[10],B[10],c,p,pp,transf_AB,transf_BA;
    int n,cont;

    printf("Digite o numero das posicoes dos vetores com que quer trabalhar, isto e, a\ndimensao em que estao os vetores (entre 1 e 10):\n");
    scanf("%d", &n);
        while(n<1 || n>10){
        printf("\nErro, o numero precisa ser >=0 ou <=10:\n");
        scanf("%d", &n);
        }
    system("clear");
    printf("Digite as posicoes do vetor A, isto e, as coordenadas do seu ponto de\nextremidade:\n");
        for(cont=0;cont<n;cont++){
        scanf("%f", &c);
        A[cont]=c;
        }
    printf("\nDigite as posicoes do vetor B, isto e, as coordenadas do seu ponto de\nextremidade:\n");
        for(cont=0;cont<n;cont++){
        scanf("%f", &c);
        B[cont]=c;
        }
    system("clear");
        //
        printf("\nA = {");
            for(cont=0;cont<(n-1);cont++){
            printf("%.2f,", A[cont]);
            }
        printf("%.2f}\n\n", A[n-1]);
        //
        printf("B = {");
            for(cont=0;cont<(n-1);cont++){
            printf("%.2f,", B[cont]);
            }
        printf("%.2f}\n\n", B[n-1]);
        //
            for(cont=0,p=0;cont<n;cont++){
            pp=A[cont]*B[cont]+p;
            p=pp;
            }
            if(p==0){
            printf("Os vetores A e B sao ortogonais\n");
            }
            else{
            printf("Os vetores A e B nao sao ortogonais\n");
            }
            printf("A.B = %.2f\n______________________________________________________\n\n", p);
        //
        for(cont=0;cont<n;cont++){
        transf_AB=A[cont];
        transf_BA=B[cont];
        A[cont]=transf_BA;
        B[cont]=transf_AB;
        }
        printf("Trocando os elementos dos vetores A e B temos:\n");
        //
            printf("\nA = {");
            for(cont=0;cont<(n-1);cont++){
            printf("%.2f,", A[cont]);
            }
            printf("%.2f}\n\n", A[n-1]);
        //
            printf("B = {");
            for(cont=0;cont<(n-1);cont++){
            printf("%.2f,", B[cont]);
            }
            printf("%.2f}\n______________________________________________________\n", B[n-1]);
    return(0);
}
