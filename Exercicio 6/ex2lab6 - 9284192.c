//Adonai Hilario da Silva 9284192

#include <stdio.h>
#include <string.h>

int main (){

    char p[1000],aux1,aux2;
    int s,tam,op,pos,c,dnv,sv;

    printf("Digite o que quiser, pode ter ate 1000 caracteres, isto e, pode escrever ate o\nmeio exato da linha 13\n\n");
    for(s=0;s<1000;s++){
    scanf("%c", &p[s]);
        if (p[s]=='\n'){
        p[s]='\0';
        break;
        }
    }
    tam=strlen(p);
    dnv=1;
    while(dnv==1){
        system("clear");
        printf("Digite um numero de 1 a 4 de acordo com a seguinte tabela:\n\n1 - Mostra o comprimento da string\n2 - Localiza um caracter na string\n3 - Inverte a string\n4 - Determina quais vogais estao na string\n\n");
        scanf("%d", &op);
            while(op<1 || op>4){
            printf("\nValor invalido, tente novamente: ");
            scanf("%d", &op);
            }
        switch(op){
            case 1:
                printf("\n______________________________________________________\n\nO comprimento da string e %d\n______________________________________________________\n", tam);
                ;break;
            case 2:
                if(tam==0){
                printf("\n______________________________________________________\n\nNao ha caracteres!\n______________________________________________________\n");
                ;break;
                }
                printf("\n______________________________________________________\n\nDigite uma posicao da string (entre 1 e %d): ", tam);
                scanf("%d", &pos);
                    while(pos<1 || pos>tam){
                    printf("\nNao ha caracter nessa posicao, digite um numero entre 1 e %d: ", tam);
                    scanf("%d", &pos);
                    }
                if(p[pos-1]==' '){
                printf("\n\nO caracter nessa posicao e: 'espaco'\n______________________________________________________\n");
                }
                else{
                    printf("\n\nO caracter nessa posicao e: ' %c '\n______________________________________________________\n", p[pos-1]);
                }
                ;break;
            case 3:
                for(c=0;c<(tam/2);c++){
                aux1=p[c];
                aux2=p[tam-1-c];
                p[c]=aux2;
                p[tam-1-c]=aux1;
                }
                printf("\n______________________________________________________\n\nString invertida:\n\n");
                for(c=0;c<tam;c++){
                printf("%c", p[c]);
                }
                printf("\n______________________________________________________\n");
            //Aqui eu inverti a string novamente apos printar, pois caso o usuario decida realizar outra operacao, a string esta normal novamente.
                for(c=0;c<(tam/2);c++){
                aux1=p[c];
                aux2=p[tam-1-c];
                p[c]=aux2;
                p[tam-1-c]=aux1;
                }
                ;break;
            case 4:
                printf("\n______________________________________________________\n\nVogais, na ordem em que aparecem:\n\n");
                for(c=0,sv=0;c<tam;c++){
                    if(p[c]=='A' || p[c]=='a' || p[c]=='E' || p[c]=='e' || p[c]=='I' || p[c]=='i' || p[c]=='O' || p[c]=='o' || p[c]=='U' || p[c]=='u'){
                    printf("%c ", p[c]);
                    sv++;
                    }
                }
                if(sv==0){
                printf("Nao ha vogais!");
                }
                printf("\n______________________________________________________\n");
                ;break;
        }
        printf("\nDeseja realizar outra operacao? Se sim digite '1', se nao digite qualquer outro numero: ");
        scanf("%d", &dnv);
    }
    system("clear");
    return(0);
}
