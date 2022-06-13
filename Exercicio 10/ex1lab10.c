//Adonai Hilario da Silva 9284192

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char element;
    int count;

} node;

int main(){

    node *V[100];
    char seq[100];
    int i,j,k,l,t;

    printf("Digite uma sequencia de caracteres (max 100 caracteres):\n\n");
    scanf("%s", seq);
    printf("\n");

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

    for(i=0;i<k;i++){
        printf("%c - %d", V[i][0].element, V[i][0].count);
        printf("\n\n");
    }

    printf("___________________________\n");
    return(0);
}
