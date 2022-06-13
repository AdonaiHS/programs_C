//Adonai Hilario da Silva 9284192

#include <stdio.h>
#include <limits.h>
int main (){

	int n,i,rasc,men,mai;
	float med;

	for(n=1;n<2;){
	printf("Digite o numero de parcelas numerais que deseja saber a media aritmetica (um\nnumero > 1): ");
	scanf("%d", &n);
	}
	mai = INT_MIN;
	men = INT_MAX;
        for(i=0,rasc=0,med=0;i<n;i++){
        printf("\nDigite o valor de uma das %d parcelas: ", n);
        scanf("%d", &rasc);
        if(rasc<men){
        men = rasc;
        }
        if(rasc>mai){
        mai = rasc;
        }
        med = med + rasc;
        }
        med = med/n;
        printf("\nMedia aritmetica = %.2f", med);
        printf("\nA maior parcela digitada foi %d e a menor foi %d\n", mai, men);
    return(0);
}



