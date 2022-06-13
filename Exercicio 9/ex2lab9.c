//Adonai Hilario da Silva 9284192

#include <stdio.h>
#include <stdlib.h>

    /* OBS: O programa considera que a nota que um aluno pode tirar em uma prova seja um numero real entre 0 e 10 e impede que o usuario digite
    valores de notas fora desse intervalo */

typedef struct{

    char N[50];
    float p1,p2,p3,p4;
    int sit;

} aluno;

    //FUNÇÃO que verifica a nota da P4:
    float nota_p4(aluno a, float media){

        float p4;

        p4=4*media-a.p1-a.p2-a.p3;

        if(p4<0){
        return(0);
        }
        else{
        return(p4);
        }
    }
    //FUNÇÃO que verifica a situação do aluno:
    int situacao(aluno a, float m_rec){

        if(a.p4==0){
        return(0);
        }
        if(a.p4>0&& a.p4<=10){
        return(1);
        }
        if(a.p4>10){

        a.p4=nota_p4(a,m_rec);

            if(a.p4>10){
            return(2);
            }
            if(a.p4>0 && a.p4<=10){
            return(3);
            }
        }
    }
    /*Retorna "0" --> Automaticamente APROVADO(A)
      Retorna "1" --> Precisa tirar uma certa nota na P4 para ser APROVADO(A)
      Retorna "2" --> Automaticamente REPROVADO(A) (OBS:O programa mostrara um valor maior que 10 que precisa ser obtido na P4,
    o que seria impossível, ou seja, esta automaticamente REPROVADO(A))
      Retorna "3" --> Precisa tirar uma certa nota na P4 para ter o direito a RECUPERAÇÃO */

    int main(){

        int n,i;
        float m_aprov,m_rec;
        aluno *A;

        do{
        printf("Digite o numero de alunos:\n");
        scanf("%d", &n);
            if(n<1){
            printf("\nPrecisa ser um numero maior que 0!\n");
            }
        } while(n<1);

        do{
        printf("\nDigite a nota minima que precisa ser tirada para o aluno estar aprovado\n(entre 0 e 10):\n");
        scanf("%f", &m_aprov);
        } while(m_aprov<0 || m_aprov>10);

        do{
        printf("\nDigite a nota minima que precisa ser tirada para que o aluno tenha direito\na recuperacao(entre 0 e 10):\n");
        scanf("%f", &m_rec);
        } while(m_rec<0 || m_rec>10);

        system("clear");

        A=(aluno*) malloc(n*sizeof(aluno));

        if(A==NULL){
        printf("ERRO");
        return(0);
        }

        for(i=0;i<n;i++){
            printf("Digite o nome do aluno (OBS: Utilize 'underline' para dar espacos):\n", i+1);
            scanf("%s", A[i].N);

            printf("\nDigite as notas da P1, P2 e P3 que %s tirou:\n", A[i].N);
            scanf("%f %f %f", &A[i].p1, &A[i].p2, &A[i].p3);

            A[i].p4=nota_p4(A[i],m_aprov);

        system("clear");
        }

        for(i=0;i<n;i++){

            A[i].sit=situacao(A[i],m_rec);

            if(A[i].sit==3){
            A[i].p4=nota_p4(A[i],m_rec);
            }

            printf("\n%s:\n\n", A[i].N);
            printf("Precisa tirar %.2f ou mais na P4\n", A[i].p4);

            switch(A[i].sit){
                case 0:
                    printf("\nIndependentemente de quanto tirar, ja esta APROVADO(A)");
                    ;break;
                case 1:
                    printf("\nConseguindo essa nota, estara APROVADO(A)");
                    ;break;
                case 2:
                    printf("\nNota impossivel de ser obtida, independentemente de quanto tirar,\nja esta REPROVADO(A)");
                    ;break;
                case 3:
                    printf("\nConseguindo essa nota, tera a oportunidade de fazer a RECUPERACAO");
                    ;break;
            }
            printf("\n_______________________________________________________________________\n");
        }
    return(0);
    }
