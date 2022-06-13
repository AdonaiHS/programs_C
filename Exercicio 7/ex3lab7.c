//Adonai Hilario da Silva 9284192

#include <stdio.h>

int vezes(char a[],char b[]){

    int i,v;

    v=0;
    for(i=2;i<12;i++){
        if(b[i-2]==a[0] && b[i-1]==a[1] && b[i]==a[2]){
        v++;
        }
    }
return(v);
}

int main(){

    char s1[3],s2[12],lixo;
    int v,i;

    printf("Digite uma sequencia de 3 caracteres:\n");
    printf("\nOBS: Se forem digitados caracteres a mais, serao considerados apenas os 3\nprimeiros:\n\n");
        for(i=0;i<3;i++){
        scanf("%c", &s1[i]);
        }
    scanf("%c", &lixo);
    while(lixo!='\n'){
    scanf("%c", &lixo);
    }

    printf("\n_______________________________________________________________________\n\nDigite uma sequencia de 12 caracteres:\n");
    printf("\nOBS: Se forem digitados caracteres a mais, serao considerados apenas os 12\nprimeiros:\n\n");
        for(i=0;i<12;i++){
        scanf("%c", &s2[i]);
        }
    scanf("%c", &lixo);
    while(lixo!='\n'){
    scanf("%c", &lixo);
    }
    system("clear");

    v=vezes(s1,s2);

    printf("_______________________________________________________________________\n\nA sequencia '");
        for(i=0;i<3;i++){
        printf("%c", s1[i]);
        }
    if(v==0){
        printf("' nao aparece nenhuma vez na sequencia '");
        for(i=0;i<12;i++){
        printf("%c", s2[i]);
        }
    }
    else{
        if(v==1){
            printf("' aparece 1 vez na sequencia '");
            for(i=0;i<12;i++){
            printf("%c", s2[i]);
            }
        }
        else{
            printf("' aparece %d vezes na sequencia '", v);
            for(i=0;i<12;i++){
            printf("%c", s2[i]);
            }
        }
    }
    printf("'\n_______________________________________________________________________\n");
return(0);
}
