//Adonai Hilario da Silva 9284192

#include <stdio.h>
int main (){

    int x,y,yres;
    float result;

    for(x=0;x<1;) {
    printf("Digite o valor da base (deve ser um numero inteiro e positivo): ");
    scanf("%d", &x);
    }
    printf("\nDigite o valor do expoente (deve ser um numero inteiro): ");
    scanf("%d", &y);
    yres = y;
        if (y==0 || x==1) {
        printf("%d^(%d)=1", x, y);
        }
        else {
            result = 1;
            for(;y>0;y--){
            result = result*x;
            }
            for(;y<0;y++){
            result = 1/((1/result)*x);
            }
        }
        printf("\n%d^(%d) = %.3f\n", x, yres, result);
    return(0);
}
