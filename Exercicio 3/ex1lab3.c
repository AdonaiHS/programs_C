//Adonai Hilario da Silva 9284192

#include <stdio.h>
#include <math.h>
int main (){

	int op;
	float a,b,total;
	printf("Digite a operacao matematica que deseja realizar usando os algarismos: 1, 2, 3, 4, 5 ou 6 de acordo com a seguinte tabela:\n\n 1-soma\n 2-subtracao\n 3-multiplicacao\n 4-divisao\n 5-potencia\n 6-raiz quadrada\n\n");
	scanf("%d", &op);
    if(op<1 || op>6) {
		printf("Valor invalido\n");
	}
	else {
		printf("\nDigite os 2 numeros a serem usados na operacao, na ordem em que aparecem na\nmesma, no caso de potencia, digite primeiro a base depois o expoente (caso seja\nfracionario escreva na forma decimal), no caso de raiz quadrada, digite o valor que se quer obter a raiz e atribua um valor qualquer ao segundo numero\n");
		scanf("%f %f", &a, &b);
        switch(op) {
        case 1: total=a+b;
        printf("\nO resultado e igual ou aproximadamente %.3f\n", total);
        break;
        case 2: total=a-b;
        printf("\nO resultado e igual ou aproximadamente %.3f\n", total);
        break;
        case 3: total=a*b;
        printf("\nO resultado e igual ou aproximadamente %.3f\n", total);
        break;
        case 4: total=a/b;
        printf("\nO resultado e igual ou aproximadamente %.3f\n", total);
        break;
        case 5: total=pow(a,b);
        printf("\nO resultado e igual ou aproximadamente %.3f\n", total);
        break;
        case 6: total=sqrt(a);
        printf("\nO resultado e igual ou aproximadamente %.3f\n", total);
        break;
        }
	}
	return(0);
}
