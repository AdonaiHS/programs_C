//Adonai Hilario da Silva 9284192

#include <stdio.h>
int main (){

	int x,i,ano,idade,nas,anoat;

	printf("Digite o numero de aparicoes do cometa Halley que deseja saber quando ocorrera: ");
	scanf("%d", &x);
	printf("\nDigite a sua idade: ");
	scanf("%d", &idade);
	printf("\nDigite o ano em que esta (exemplo: 2015): ");
	scanf("%d", &anoat);
	i = x;
		printf("\nO cometa Halley aparecera no(s) seguinte(s) ano(s):\n");
		ano = 1985;
		for(i=0;i<x;i++){
		ano = ano + 75;
		printf("\n%d", ano);
		}
		printf("\n\nSua idade no(s) ano(s) em que o cometa Halley passar sera:\n");
		nas = anoat - idade;
		for(i=0;i<1;i++){
		idade = 1985 - nas + 75;
		printf("\n%d", idade);
		}
        for(i=0;i<(x-1);i++){
        idade = idade + 75;
        printf("\n%d", idade);
        }
        printf("\n");
    return(0);
}



