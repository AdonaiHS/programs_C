//Adonai Hilario da Silva 9284192

#include <stdio.h>

float CpraF(float t){
    float F;

    F=(9*t/5)+32;
    return(F);
}

float FpraC(float t){
    float C;

    C=(5*t-160)/9;
    return(C);
}

int main(){

    int op;
    float t,r;

    printf("Digite '1' ou '2' de acordo com a seguinte tabela:\n\n1 - Celsius --> Farenheit\n2 - Farenheit --> Celsius\n\n");
    scanf("%d", &op);
        while(op!=1 && op!=2){
        printf("\n1 - Celsius --> Farenheit\n2 - Farenheit --> Celsius\n\n");
        scanf("%d", &op);
        }
    system("clear");
    switch(op){
        case 1:
            printf("Digite a temperatura em Celsius (maior ou igual a -273.15(zero absoluto)):\n");
            scanf("%f", &t);
                while(t<(-273.15)){
                printf("\nErro, o valor digitado esta abaixo do zero absoluto, tente novamente:\n");
                scanf("%f", &t);
                }
            r=CpraF(t);
            printf("______________________________________________________\n\nEm Farenheit: %.2lf graus F\n______________________________________________________\n\n", r);
            ;break;
        case 2:
            printf("Digite a temperatura em Farenheit (maior ou igual a -469.67(zero absoluto)):\n");
            scanf("%f", &t);
                while(t<(-469.67)){
                printf("\nErro, o valor digitado esta abaixo do zero absoluto, tente novamente:\n");
                scanf("%f", &t);
                }
            r=FpraC(t);
            printf("______________________________________________________\n\nEm Celsius: %.2f graus C\n______________________________________________________\n\n", r);
            ;break;
    }
return(0);
}
