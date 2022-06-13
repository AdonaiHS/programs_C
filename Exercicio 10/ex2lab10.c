//Adonai Hilario da Silva 9284192

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char element;
    int count;

} node;

node** montar(char seq[]){

    int i,j,k,l,t;
    node **V;

    V=(node**) malloc(100*sizeof(node*));

    V[0]=(node*) malloc(sizeof(node));

    V[0][0].element=seq[0];
    V[0][0].count=1;

    t=strlen(seq);
    k=1;

    for(i=1;i<t;i++){
        j=0;
        for(l=0;l<k;l++){
            if(seq[i]==V[j][0].element){
                V[j][0].count++;
                l=k+1;
            }
        j++;
        }
        if(l==k){
            V[j]=(node*) malloc(sizeof(node));
            V[j][0].element=seq[i];
            V[j][0].count=1;
            k++;
        }
    }
    V[k]=NULL;
return(V);
}

int anagramas(node *V1[], node *V2[], int t1, int t2){

    int i,j,n1,n2,q;

    if(t1!=t2){
    return(0);
    }

    for(i=1;i<100;i++){
        if(V1[i]==NULL){
        n1=i;
        i=101;
        }
    }

    for(j=1;j<100;j++){
        if(V2[j]==NULL){
        n2=j;
        j=101;
        }
    }

    if(n1!=n2){
    return(0);
    }

    q=0;

    for(i=0;i<n1;i++){
        for(j=0;j<n1;j++){
            if(V1[i][0].element==V2[j][0].element && V1[i][0].count==V2[j][0].count){
            q=q+1;
            }
        }
    }

    if(q==n1){
    return(1);
    }
    else{
    return(0);
    }
}

int main(){

    node **V1,**V2;
    char seq1[100],seq2[100];
    int t1,t2,a;

    printf("Digite a primeira sequencia de caracteres (max 100 caracteres):\n\n");
    scanf("%s", seq1);
    printf("\n");

    V1=montar(seq1);

    printf("Digite a segunda sequencia de caracteres (max 100 caracteres):\n\n");
    scanf("%s", seq2);
    printf("\n");

    V2=montar(seq2);

    t1=strlen(seq1);
    t2=strlen(seq2);

    a=anagramas(V1,V2,t1,t2);

    printf("______________________________________________________\n\n");

    switch(a){
        case 0:
            printf("As sequencias NAO sao anagramas");
            ;break;
        case 1:
            printf("As sequencias sao anagramas");
            ;break;
    }

    printf("\n______________________________________________________\n");
    return(0);
}
