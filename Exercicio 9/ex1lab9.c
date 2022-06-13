//Adonai Hilario da Silva 9284192

#include <stdio.h>
#include <stdlib.h>

    float** soma(float **a,float **b, int n, int m){

    int i,j;
    float **s;

    s=(float**) malloc(sizeof(float*)*n);

    if(s==NULL){
    return(NULL);
    }

    for(i=0;i<n;i++){
        s[i]=(float*) malloc(sizeof(float)*m);
        if(s==NULL){
        return(NULL);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        s[i][j]=a[i][j]+b[i][j];
        }
    }
    return(s);
    }

    //

    int main(){

    int m,n,i,j;
    float **a,**b,**s;

    do{
    printf("Digite as dimensoes das matrizes,digitando primeiro o numero de linhas, e\ndepois o numero de colunas:\n");
    scanf("%d %d", &n, &m);
        if(n<0 || m<0){
        printf("\nDeve ser um numero positivo!\n");
        }
    } while(n<0 || m<0);
    //
    a=(float**) malloc(sizeof(float*)*n);

    if(a==NULL){
    printf("ERRO\n");
    return(-1);
    }

    for(i=0;i<n;i++){
        a[i]=(float*) malloc(sizeof(float)*m);
        if(a[i]==NULL){
        printf("ERRO\n");
        return(-1);
        }
    }

    b=(float**) malloc(sizeof(float*)*n);

    if(b==NULL){
    printf("ERRO\n");
    return(-1);
    }

    for(i=0;i<n;i++){
        b[i]=(float*) malloc(sizeof(float)*m);
        if(b[i]==NULL){
        printf("ERRO\n");
        return(-1);
        }
    }
    //
    system("clear");
    for(i=0;i<n;i++){
        printf("Digite os %d elementos da linha %d da matriz A:\n", m, i+1);
        for(j=0;j<m;j++){
        scanf("%f", &a[i][j]);
        }
    }
    system("clear");
    for(i=0;i<n;i++){
        printf("Digite os %d elementos da linha %d da matriz B:\n", m, i+1);
        for(j=0;j<m;j++){
        scanf("%f", &b[i][j]);
        }
    }
    //
    s=soma(&*a,&*b,n,m);

    if(s==NULL){
    printf("ERRO\n");
    return(-1);
    }
    //
    system("clear");
    printf("Matriz A:\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("%.2f   ", a[i][j]);
        }
    printf("\n");
    }
    printf("______________________________________________________\n");
    //
    printf("\nMatriz B:\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("%.2f   ", b[i][j]);
        }
    printf("\n");
    }
    printf("______________________________________________________\n");
    //
    printf("\nMatriz SOMA:\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("%.2f   ", s[i][j]);
        }
    printf("\n");
    }
    printf("______________________________________________________\n");
    //
    return(0);
    }
