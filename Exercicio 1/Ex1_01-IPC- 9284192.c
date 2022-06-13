//Adonai Hilario da Silva 9284192

#include <stdio.h>
int main (){
float m,psol,pven,plua,pmar,pjup,pplu;
printf("Digite sua massa em kg \n");
scanf("%f", &m);
psol=m*280.2;
pven=m*9.07;
plua=m*1.66;
pmar=m*3.77;
pjup=m*23.64;
pplu=m*0.67;
printf("\nSeu peso no Sol e: %.2f N \n", psol);
printf("Seu peso em Venus e: %.2f N \n", pven);
printf("Seu peso na Lua e: %.2f N \n", plua);
printf("Seu peso em Marte e: %.2f N \n", pmar);
printf("Seu peso em Jupiter e: %.2f N \n", pjup);
printf("Seu peso em Plutao e: %.2f N \n", pplu);
return(0);
}
