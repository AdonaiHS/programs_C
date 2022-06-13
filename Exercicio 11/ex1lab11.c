//Adonai Hilario da Silva

#include <stdio.h>
#include <math.h>
#include <limits.h>

/* OBS: No meu computador, o maior vetor que consegui criar tinha 259531 posições, porém travava com valores maiores que
  18 para gerar a sequencia, assim, deixei o vetor com 250000 posições, e a maior sequencia que ele gera é a do nº 18 */

typedef struct{
    int num;
    int den;
} fracao;

int main(){

    int n,i,j,k,x;
    fracao V[250000];

    do{
    printf("Digite um numero inteiro estritamente positivo para gerar a sequencia de Farey:\n(OBS: O maior numero suportado e 18)\n");
    scanf("%d", &n);
    } while(n<1 || n>18);

    V[0].num=0;
    V[0].den=1;
    V[1].num=1;
    V[1].den=1;

    for(i=1;i<n;i++){
        x=pow(2,(i-1));
        for(j=x;j>0;j--){
            V[j*2].num=V[j].num;
            V[j*2].den=V[j].den;
        }

        for(k=1;k<(2*x);k=k+2){
            V[k].num=V[k-1].num+V[k+1].num;
            V[k].den=V[k-1].den+V[k+1].den;
        }
    }

    printf("________________________________________________________________________________\n");
    printf("Sequencia de Farey:\n\n");
    for(i=0;i<250000;i++){
        if(V[i].den<=n && V[i].num<V[i].den){
        printf("%d/%d ; ", V[i].num, V[i].den);
        }
        if(V[i].num==1 && V[i].den==1){
        printf("%d/%d", V[i].num, V[i].den);
        i=250000;
        }
    }
    printf("\n________________________________________________________________________________");
return(0);
}
