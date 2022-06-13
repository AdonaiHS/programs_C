//Adonai Hilario da Silva 9284192

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* No programa haverão if's e while's com varias condições e podem parecer meio confusas, porém estao todas relacionadas
a impedimentos quanto a tentativa de fazer jogadas inválidas. */

//______________________________________________________________________________

/* A seguinte função realiza a jogada do computador, aqui está contida a "inteligência artificial", quando o modo como o tabuleiro está não coincide
com nenhuma das jogadas pre-determinadas, ele gera jogadas aleatorias porem sempre priorizando ir para frente */
/* OBS: O motivo de eu ter usado rlin, rcol e rdir como sendo as posições e direção selecionada pelo computador é porque na primeira versão essas
eram usadas apenas para a geração aleatoria do comando ("r" de random), e como eu reutilizei grande parte da primeira versão, preferi manter o nome,
porém nessa versão, elas só guardam comandos aleatórios quando o tabuleiro não está de acordo com o programado na inteligência artificial. Quando
ele gera um comando aleatório, a função não acaba enquanto não for sorteado uma posição e uma direção válidos */

void jogada_computador (int *rdir, int *rlin, int *rcol, char **M, char s, int ct1, int ct2){
    //Inteligência artificial:
    if(M[0][0]=='>' && M[1][0]=='>' && M[2][2]=='^' && M[2][1]=='^'){
        *rlin=1;
        *rcol=1;
        *rdir=1;
    return;
    }
    if(M[1][0]=='>' && M[0][1]=='>' && M[2][1]=='^' && M[1][2]=='^'){
        *rlin=1;
        *rcol=2;
        *rdir=1;
    return;
    }
    if(M[1][0]=='>'&& M[2][0]==' ' && M[2][1]==' '){
        *rlin=2;
        *rcol=1;
        *rdir=3;
    return;
    }
    if(M[0][1]=='^' && M[1][2]=='^' && M[0][2]=='>' && M[2][0]=='>'){
        *rlin=3;
        *rcol=1;
        *rdir=1;
    return;
    }
    if(M[0][2]=='>' && M[1][2]=='^' && M[2][1]=='>'){
        *rlin=3;
        *rcol=2;
        *rdir=1;
    return;
    }
     if(M[0][2]=='>' && M[1][1]=='>' && M[1][2]=='^' && ct2==1){
        *rlin=2;
        *rcol=2;
        *rdir=3;
    return;
    }
    if(M[1][0]=='>' && M[1][1]=='^' && M[2][1]=='^' && M[0][2]=='>'){
        *rlin=1;
        *rcol=3;
        *rdir=1;
    return;
    }
    if(M[0][1]=='^' && M[2][0]=='>' && M[2][2]=='^'){
        *rlin=3;
        *rcol=1;
        *rdir=2;
    return;
    }
    if(M[0][0]=='^' && M[1][1]=='>' && M[1][2]=='^' && ct1==1){
        *rlin=2;
        *rcol=2;
        *rdir=3;
    return;
    }
    if(M[0][2]=='^' && M[1][2]=='^' && M[1][1]=='>' && ct1==1){
        *rlin=2;
        *rcol=2;
        *rdir=3;
    return;
    }
    if(M[1][2]=='^' && M[1][1]=='^' && M[0][1]=='>' && M[2][0]=='>'){
        *rlin=1;
        *rcol=2;
        *rdir=1;
    return;
    }
    if(M[0][1]=='^' && M[2][2]=='^' && M[0][2]=='>' && M[2][1]=='>'){
        *rlin=1;
        *rcol=3;
        *rdir=3;
    return;
    }
    if(M[0][1]=='>' && M[2][0]=='>' && M[1][2]=='^' && M[2][2]=='^'){
        *rlin=3;
        *rcol=1;
        *rdir=1;
    return;
    }
    if(M[0][2]=='^' && M[2][2]=='^' && M[1][2]=='>' && M[2][1]=='>'){
        *rlin=3;
        *rcol=2;
        *rdir=2;
    return;
    }
    if(M[1][1]=='>' && M[1][2]=='>' && M[2][2]=='^' && (ct2==1 || M[0][0]=='^' || M[0][1]=='^' || M[0][2]=='^')){
        *rlin=2;
        *rcol=2;
        *rdir=3;
    return;
    }
    if(M[0][0]=='^' && M[2][2]=='^' && M[2][1]=='>' && M[1][2]=='>'){
        *rlin=3;
        *rcol=2;
        *rdir=2;
    return;
    }
    if((M[0][2]=='^' || M[0][0]=='^') && M[1][1]=='>' && M[1][2]=='>' && M[2][1]=='^'){
        *rlin=2;
        *rcol=3;
        *rdir=1;
    return;
    }
    if(M[0][1]=='>' && M[2][1]=='>' && M[0][2]=='^' && M[2][2]=='^'){
        *rlin=1;
        *rcol=2;
        *rdir=3;
    return;
    }
    if(M[0][1]=='>' && M[2][2]=='>' && M[1][1]=='^' && ct2==1){
        *rlin=3;
        *rcol=3;
        *rdir=1;
    return;
    }

    else{
    //Essa parte serve para o caso de o tabuleiro não estar de alguma forma reconhecida pela inteligência artificial:
        *rlin=(rand()%3)+1;
        *rcol=(rand()%3)+1;
        while(M[*rlin-1][*rcol-1]!=s || (*rlin-1==0 && *rcol-1!=2 && M[*rlin-1][*rcol]!=' ' && M[*rlin][*rcol-1]!=' ') ||
        (*rlin-1==1 && *rcol-1!=2 && M[*rlin-1][*rcol]!=' ' && M[*rlin-2][*rcol-1]!=' ' && M[*rlin][*rcol-1]!=' ') ||
        (*rlin-1==2 && *rcol-1!=2 && M[*rlin-1][*rcol]!=' ' && M[*rlin-2][*rcol-1]!=' ')){
        *rlin=(rand()%3)+1;
        *rcol=(rand()%3)+1;
        }

        *rdir=1;
        while((*rdir-1==0 && *rcol-1!=2 && M[*rlin-1][*rcol]!=' ') || (*rlin-1==0 && *rdir-1==1) || (*rlin-1==2 && *rdir-1==2) ||
        (*rdir-1==1 && M[*rlin-2][*rcol-1]!=' ') || (*rdir-1==2 && M[*rlin][*rcol-1]!=' ')){
            if(*rdir==1){
            *rdir=3;
            }
            else{
                *rdir=2;
            }
        }
    }
return;
}

/* A seguinte função é responsável por peguntar ao usuário, independentemente se esta jogando contra outra pessoa ou contra o computador, qual o
carrinho que deseja selecionar, irá pedir a linha e a coluna em que este se encontra, caso a posição seja inválida, o programa pede que o usuário
escolha outra posição*/
void seleciona_carro (int *lin, int *col, char s, char **M, int modo){

    if(modo==1){
    printf("\n\n\nJogador '%c' e a sua vez, digite a linha e em seguida a coluna em que um de\nseus carrinhos se encontra: ", s);
    }
    if(modo==2){
    printf("\n\n\nDigite a linha e em seguida a coluna em que um de seus carrinhos se encontra:\n");
    }
        scanf("%d %d", lin, col);
            while(*lin<1 || *lin>3 || *col<1 || *col>3 || M[*lin-1][*col-1]!=s ||
            (s=='>' && *lin==1 && *col!=3 && M[*lin-1][*col]!=' ' && M[*lin][*col-1]!=' ') ||
            (s=='>' && *lin==2 && *col!=3 && M[*lin-1][*col]!=' ' && M[*lin-2][*col-1]!=' ' && M[*lin][*col-1]!=' ') ||
            (s=='>' && *lin==3 && *col!=3 && M[*lin-1][*col]!=' ' && M[*lin-2][*col-1]!=' ') ||
            (s=='^' && *col==1 && *lin!=1 && M[*lin-2][*col-1]!=' ' && M[*lin-1][*col]!=' ') ||
            (s=='^' && *col==2 && *lin!=1 && M[*lin-2][*col-1]!=' ' && M[*lin-1][*col-2]!=' ' && M[*lin-1][*col]!=' ') ||
            (s=='^' && *col==3 && *lin!=1 && M[*lin-2][*col-1]!=' ' && M[*lin-1][*col-2]!=' ')){
                if(*lin<1 || *lin>3 || *col<1 || *col>3){
                printf("\nEsta posicao nao existe, tente novamente: ");
                }
                else{
                    if(M[*lin-1][*col-1]==' '){
                    printf("\nNao tem carrinho nenhum nesta posicao, tente novamente: ");
                    }
                    else{
                        if(M[*lin-1][*col-1]!=' ' && M[*lin-1][*col-1]!=s){
                        printf("\nEste carrinho nao e seu, tente novamente: ");
                        }
                        else{
                            printf("\nEste carrinho esta preso, tente novamente: ");
                        }
                    }
                }
            scanf("%d %d", lin, col);
            }
    return;
}

/* A seguinte função é responsável por peguntar ao usuário, independentemente se esta jogando contra outra pessoa ou contra o computador, qual a
direção em que quer movimentar o carrinho escolhido, frente, esquerda ou direita. Caso a direção seja inválida, o programa pede que o usuário
escolha outra direção */
void direcao (int *dir, int lin, int col, char s, char **M, int modo){

    if(modo==1){
    printf("\nJogador '%c', agora digite:\n\n1 - para ir para a frente\n2 - para ir para a esquerda\n3 - para ir para a direita\n\n", s);
    }
    if(modo==2){
    printf("\nAgora digite:\n\n1 - para ir para a frente\n2 - para ir para a esquerda\n3 - para ir para a direita\n\n");
    }
        scanf("%d", dir);
            while(*dir>3 || *dir<1 || (*dir==1 && s=='>' && col!=3 && M[lin-1][col]!=' ') || (*dir==1 && s=='^' && lin!=1 && M[lin-2][col-1]!=' ') ||
            (*dir==2 && s=='>' && M[lin-2][col-1]!=' ') || (*dir==2 && s=='^'&& M[lin-1][col-2]!=' ') || (*dir==3 && s=='>' && M[lin][col-1]!=' ') ||
            (*dir==3 && s=='^' && M[lin-1][col]!=' ') || (lin-1==0 && s=='>' && *dir==2) || (lin-1==2 && s=='>' && *dir==3) ||
            (col-1==0 && s=='^' && *dir==2) || (col-1==2 && s=='^' && *dir==3)){
            printf("\nMovimento nao permitido, tente novamente: ");
            scanf("%d", dir);
            }
    return;
}


/* A seguinte função serve para modificar o tabuleiro, é a função que fará com que o carrinho "se mova". Ela é usada tanto para fazer o movimento
do carrinho do jogador quanto o do computador. Como as funções anteriores são responsáveis por fazer com que a posição e direção sejam válidos,
então para essa função sempre serão enviados comandos válidos, então sempre será possível realizar o movimento do carrinho */
void move_carro (int dir, int lin, int col, char s, int *ct1, int *ct2, char **M){

    if(dir==1 && s=='>' && col-1==2){
        M[lin-1][col-1]=' ';
        *ct1=*ct1+1;
        }
        else{
            if(dir==1 && s=='^' && lin-1==0){
            M[lin-1][col-1]=' ';
            *ct2=*ct2+1;
            }
            else{
                switch(dir){
                case 1:
                    switch(s){
                    case '>':
                        M[lin-1][col-1]=' ';
                        M[lin-1][col]='>';
                        ;break;
                    case '^':
                        M[lin-1][col-1]=' ';
                        M[lin-2][col-1]='^';
                        ;break;
                    }
                ;break;
                case 2:
                    switch(s){
                    case '>':
                        M[lin-1][col-1]=' ';
                        M[lin-2][col-1]='>';
                        ;break;
                    case '^':
                        M[lin-1][col-1]=' ';
                        M[lin-1][col-2]='^';
                        ;break;
                    }
                ;break;
                case 3:
                    switch(s){
                    case '>':
                        M[lin-1][col-1]=' ';
                        M[lin][col-1]='>';
                        ;break;
                    case '^':
                        M[lin-1][col-1]=' ';
                        M[lin-1][col]='^';
                        ;break;
                    }
                ;break;
                }
            }
        }
    return;
}

/* A seguinte função serve para verificar e informar quanto houver vitória no modo-1 (jogador vs jogador), ela é chamada no fim de cada jogada
para essa finalidade. Ela verifica também o motivo da vitória, se foi por um dos jogadores ter tirado os 2 carrinhos, ou se um dos jogadores
deixou o outro sem movimentos possíveis*/
int vitoria_jog_vs_jog(int ct1, int ct2, char **M, char s){

    if(ct1==2){
        printf("\n\n\nO jogador '>' venceu o jogo! Pois retirou seus 2 carrinhos primeiro!\n\n");
        return(1);
        }
    if(ct2==2){
        printf("\n\n\nO jogador '^' venceu o jogo! Pois retirou seus 2 carrinhos primeiro!\n\n");
        return(1);
        }
    if((M[1][0]=='^' && M[0][0]=='>' && M[1][1]=='>' || M[2][0]=='^' && M[1][0]=='>' && M[2][1]=='>' ||
    M[1][2]=='^' && M[0][2]=='>' && M[1][1]=='>' || M[2][2]=='^' && M[1][2]=='>' && M[2][1]=='>') && s=='>' && ct2==1){
        printf("\n\n\nO jogador '>' venceu o jogo! Pois deixou o jogador '^' sem movimentos!\n\n");
        return(1);
        }
    if((M[0][0]=='>' && M[1][0]=='^' && M[0][1]=='^' || M[0][1]=='>' && M[1][1]=='^' && M[0][2]=='^' ||
    M[2][0]=='>' && M[1][0]=='^' && M[2][1]=='^' || M[2][1]=='>' && M[1][1]=='^' && M[2][2]=='^') && s=='^' && ct1==1){
        printf("\n\n\nO jogador '^' venceu o jogo! Pois deixou o jogador '>' sem movimentos!\n\n");
        return(1);
        }
    return(0);
}

/* A seguinte função funciona exatamente como a função "vitoria_jog_vs_jog", porém esta serve para o modo-2 (jogador vs computador), o único
motivo de eu ter feito duas funções com a mesma finalidade é que as mensagens de vitória printadas em ambas são diferentes */
int vitoria_jog_vs_comp(int ct1, int ct2, char **M, char s){

    if(ct1==2){
        printf("\n\n\nO computador venceu o jogo! Pois retirou seus 2 carrinhos primeiro!\n\n");
        return(1);
        }
    if(ct2==2){
        printf("\n\n\nVoce venceu o jogo! Pois retirou seus 2 carrinhos primeiro!\n\n");
        return(1);
        }
    if((M[1][0]=='^' && M[0][0]=='>' && M[1][1]=='>' || M[2][0]=='^' && M[1][0]=='>' && M[2][1]=='>' ||
    M[1][2]=='^' && M[0][2]=='>' && M[1][1]=='>' || M[2][2]=='^' && M[1][2]=='>' && M[2][1]=='>') && s=='>' && ct2==1){
        printf("\n\n\nO computador venceu o jogo! Pois deixou voce sem movimentos!\n\n");
        return(1);
        }
    if((M[0][0]=='>' && M[1][0]=='^' && M[0][1]=='^' || M[0][1]=='>' && M[1][1]=='^' && M[0][2]=='^' ||
    M[2][0]=='>' && M[1][0]=='^' && M[2][1]=='^' || M[2][1]=='>' && M[1][1]=='^' && M[2][2]=='^') && s=='^' && ct1==1){
        printf("\n\n\nVoce venceu o jogo! Pois deixou o computador sem movimentos!\n\n");
        return(1);
        }
    return(0);
}

void main (){

    char **M,s;
    int lin,col,vez,dir,ct1,ct2,modo,rdir,rlin,rcol,dnv,vit,i;

    /* **M: Matriz 3x3 ; s: o símbolo ">" ou "^" ; lin: linha que o jogador digita (1,2,3) ; col: coluna que o jogadr digita (1,2,3) ;
    vez: define de quem é a vez de jogar ; dir: direção, "1"frente, "2"esquerda, "3"direita ; ct1: carros ">" ja tirados ;
    ct2: carros "^" ja tirados ; modo: Escolha entre as duas versoes Jog x Jog ou Jog x Comp ; rdir: Direção escolhida pelo computador,
    "0"frente, "1"esquerda, "2"direita ; rlin: linha escolhida pelo computador (0,1,2) ; rcol: coluna escolhida pelo computador (0,1,2) ;
    dnv: Ligado à pergunta "Deseja jogar novamente? ; vit: Variável responsável por verificar se houve vitória ; i: Contador". */

    srand(time(NULL));

    dnv=1;
    while(dnv==1){

    M=(char**) malloc(3*sizeof(char*));
    for(i=0;i<3;i++){
    M[i]=(char*) malloc(3*sizeof(char));
    }

    for(lin=0;lin<3;lin++){
        for(col=0;col<3;col++){
        M[lin][col] = ' ';
        }
    }
    ct1=0;
    ct2=0;
    M[0][0]='>';
    M[1][0]='>';
    M[2][1]='^';
    M[2][2]='^';

    printf("Escolha o modo de jogo digitando '1' ou '2':\n\n1 - Jogador vs Jogador\n2 - Jogador vs Computador\n\n");
    scanf("%d", &modo);
    while(modo!=1 && modo!=2){
    printf("\n1 - Jogador vs Jogador\n2 - Jogador vs Computador\n");
    scanf("%d", &modo);
    }
    system("cls");

    switch(modo){

    //Jogador vs Jogador:
        case 1:
        printf("\n      1   2   3 \n\n  1   %c | %c | %c \n     ---+---+---            > = %d\n  2   %c | %c | %c \n     ---+---+---            ^ = %d\n  3   %c | %c | %c ", M[0][0],M[0][1],M[0][2],ct1,M[1][0],M[1][1],M[1][2],ct2,M[2][0],M[2][1],M[2][2]);

        for(vez=0;vez==vez;vez++){
            if(vez%2==0){
            s = '>';
            }
            else {
            s = '^';
            }

            seleciona_carro(&lin,&col,s,M,modo);

            direcao(&dir,lin,col,s,M,modo);

            move_carro(dir,lin,col,s,&ct1,&ct2,M);

            system("cls");
            printf("\n      1   2   3 \n\n  1   %c | %c | %c \n     ---+---+---            > = %d\n  2   %c | %c | %c \n     ---+---+---            ^ = %d\n  3   %c | %c | %c ", M[0][0],M[0][1],M[0][2],ct1,M[1][0],M[1][1],M[1][2],ct2,M[2][0],M[2][1],M[2][2]);

            vit = vitoria_jog_vs_jog(ct1,ct2,M,s);

            if(vit==1){
            ;break;
            }
        }
        ;break;

    //Jogador vs Computador:
        case 2:
        printf("\n      1   2   3 \n\n  1   %c | %c | %c \n     ---+---+---            > = %d\n  2   %c | %c | %c \n     ---+---+---            ^ = %d\n  3   %c | %c | %c ", M[0][0],M[0][1],M[0][2],ct1,M[1][0],M[1][1],M[1][2],ct2,M[2][0],M[2][1],M[2][2]);

        for(vez=0;vez==vez;vez++){
            if(vez%2==0){
            s = '>';
            }
            else {
            s = '^';
            }

            //Computador jogando:
            if(s=='>'){

                jogada_computador(&rdir,&rlin,&rcol,M,s,ct1,ct2);

                move_carro(rdir,rlin,rcol,s,&ct1,&ct2,M);

                system("cls");
                printf("\n      1   2   3 \n\n  1   %c | %c | %c \n     ---+---+---            > = %d\n  2   %c | %c | %c \n     ---+---+---            ^ = %d\n  3   %c | %c | %c ", M[0][0],M[0][1],M[0][2],ct1,M[1][0],M[1][1],M[1][2],ct2,M[2][0],M[2][1],M[2][2]);

                vit = vitoria_jog_vs_comp(ct1,ct2,M,s);

                if(vit==1){
                ;break;
                }
            }

            //Usuário jogando:
            if(s=='^'){

                seleciona_carro(&lin,&col,s,M,modo);

                direcao(&dir,lin,col,s,M,modo);

                move_carro(dir,lin,col,s,&ct1,&ct2,M);

                system("cls");
                printf("\n      1   2   3 \n\n  1   %c | %c | %c \n     ---+---+---            > = %d\n  2   %c | %c | %c \n     ---+---+---            ^ = %d\n  3   %c | %c | %c ", M[0][0],M[0][1],M[0][2],ct1,M[1][0],M[1][1],M[1][2],ct2,M[2][0],M[2][1],M[2][2]);

                vit = vitoria_jog_vs_comp(ct1,ct2,M,s);

                if(vit==1){
                ;break;
                }
            }
        }
    }
        printf("\nDeseja jogar novamente? Se sim digite '1', se nao digite qualquer outro numero: ");
        scanf("%d", &dnv);
        system("cls");
    }
    printf("Obrigado por jogar!\n");

    return;
}

    /*
        Como a tela deve parecer:

            1   2   3

        1   > |   |
           ---+---+---            > = %d
        2   > |   |
           ---+---+---            ^ = %d
        3     | ^ | ^

    */
