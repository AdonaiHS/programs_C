//Adonai Hilario da Silva 9284192

#include <stdio.h>

typedef struct{
    float real,imaginario;
} complexo;

int main(){

    float sr,si,mr,mi;
    complexo a,b;

    printf("Digite a parte real e imaginaria do numero A: ");
    scanf("%f %f" , &a.real, &a.imaginario);
    printf("\nDigite a parte real e imaginaria do numero B: ");
    scanf("%f %f" , &b.real, &b.imaginario);

    system("clear");
    printf("Numeros digitados:\n\nA = ( %.2f ) + ( %.2fi )\n\nB = ( %.2f ) + ( %.2fi )\n______________________________________________________\n\n" , a.real, a.imaginario, b.real, b.imaginario);

    sr=a.real+b.real;
    si=a.imaginario+b.imaginario;
    printf("A+B = ( %.2f ) + ( %.2fi )\n______________________________________________________\n\n" , sr, si);

    mr=(a.real*b.real)+(a.imaginario*b.imaginario*(-1));
    mi=(a.real*b.imaginario)+(a.imaginario*b.real);
    printf("A.B = ( %.2f ) + ( %.2fi )\n______________________________________________________\n\n" , mr, mi);

    printf("Conj A = ( %.2f ) + ( %.2fi )\n\n" , a.real, a.imaginario*(-1));
    printf("Conj B = ( %.2f ) + ( %.2fi )\n______________________________________________________\n\n" , b.real, b.imaginario*(-1));

return(0);
}
