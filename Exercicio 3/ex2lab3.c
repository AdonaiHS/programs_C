//Adonai Hilario da Silva 9284192

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {

	int x,y,nj,novo;
	srand(time(NULL));
	novo=1;
	while(novo==1) {
		x=rand()%1001;
		system("cls");
		printf("Tente acertar o numero sorteado entre 0 e 1000 digitando-o\n");
		scanf("%d", &y);
		nj=1;
			while(y!=x) {
				if(y>x) {
				printf("\nO numero e menor que isso! Tente denovo\n");
				nj=nj+1;
				}
				else {
				printf("\nO numero e maior que isso! Tente denovo\n");
				nj=nj+1;
				}
				scanf("%d", &y);
			}
		printf("\nVoce acertou! O numero e %d!\n", x);
		printf("Voce precisou de %d tentativas para acertar o numero!\n", nj);
		printf("Deseja jogar novamente? Se sim digite 1, se nao, digite qualquer outro numero\n");
		scanf("%d", &novo);
	}
	return(0);
}










