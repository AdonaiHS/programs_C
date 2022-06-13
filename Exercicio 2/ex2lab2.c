//Adonai Hilario da Silva 9284192

#include <stdio.h>
int main (){

	float p1,p2,p3,t1,t2,m;
	printf("Digite as notas das 3 provas (0-10) no formato: p1 p2 p3\n");
	scanf("%f %f %f", &p1, &p2, &p3);
	if(p1<0 || p1>10 || p2<0 || p2>10 || p3<0 || p3>10) {
		printf("\nValor(es) invalido(s)\n");
	}
    else {
		printf("\nDigite as notas dos 2 trabalhos (0-10) no formato: t1 t2\n");
		scanf("%f %f", &t1, &t2);
		if(t1<0 || t1>10 || t2<0 || t2>10) {
			printf("\nValor(es) invalido(s)\n");
        }
        else {
			if(p1<=p2 && p1<=p3) {
                m=((p2+p3)/2)*0.7+((t1+t2)/2)*0.3;
			}
			else {
			    if(p2<=p1 && p2<=p3) {
			        m=((p1+p3)/2)*0.7+((t1+t2)/2)*0.3;
			    }
			    else {
                    if(p3<=p1 && p3<=p2) {
                        m=((p2+p1)/2)*0.7+((t1+t2)/2)*0.3;
                    }
			    }
			}
        }
        if(m<3) {
			printf("\nvoce esta reprovado, sua media e %.2f\n", m);
        }
        if(m<5 && m>=3) {
			printf("\nvoce esta de recuperacao, sua media e %.2f\n", m);
        }
        if(m<=10 && m>=5) {
        printf("\nVoce esta aprovado, sua media e %.2f\n", m);
        }
    }
    return(0);
	}


