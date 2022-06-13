//Adonai Hilario da Silva 9284192

#include <stdio.h>
int main (){
float imc,m,h;
printf("Digite sua massa em kg \n");
scanf("%f", &m);
printf("\nDigite sua altura em metros \n");
scanf("%f", &h);
imc= m/(h*h);
printf("\nSeu indice de massa corporal e %.2f\n", imc);
return(0);
}
