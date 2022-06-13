//Adonai Hilario da Silva 9284192

#include <stdio.h>
int main (){

	int d,m,a;
	printf("Digite o dia do seu nascimento (1-28) se for fevereiro, (1-31) se for qualquer\noutro mes\n");
	scanf("%d", &d);
	if(d>31 || d<1){
		printf("\nValor invalido, o dia deve estar entre 1 e 31\n");
		}
    else {
		printf("\nDigite o mes do seu nascimento (1-12)\n");
		scanf("%d", &m);
		if(m==2 && d>28){
			printf("\nValor invalido, o mes de fevereiro tem apenas 28 dias\n");
			}
        else {
			printf("\nDigite o ano do seu nascimento (1890-2015)\n");
			scanf("%d", &a);
			if(a<1890){
				printf("\nValor invalido, o ano deve estar entre 1890 e 2015, e improvavel que uma\npessoa com 125 anos ou mais esteja viva\n");
				}
			else {
			    if(a>2015){
			    printf("\nValor invalido, o ano deve estar entre 1895 e 2015, ainda nao estamos nesse ano");
                }
            else {
				printf("\nA data do seu aniversario e valida!\n");
                }
            }
        }
    }
	return(0);
	}



