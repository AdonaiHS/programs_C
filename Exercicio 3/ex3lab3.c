//Adonai Hilario da Silva 9284192

#include <stdio.h>
#include <math.h>
int main () {

	float x,z1,z2,e,dif;
	printf("Digite o numero em que se quer obter a raiz quadrada\n");
	scanf("%f", &x);
	z1=1;
	dif=1;
	e=0.001;
		while(dif>e) {
		z2=z1;
		z1=(z1-((z1*z1-x)/(2*z1)));
		dif=fabs(z1-z2);
		}
	printf("\nA raiz quadrada e igual ou aproximadamente %.3f\n", z1);
	return(0);
}
