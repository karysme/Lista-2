#include <stdio.h>
void main(){
float soma, sub, mult, divisao;
for (int cont = 1; < 10; cont++){
for (int num = 0; num <= 10; num++){
soma = (soma + cont);
printf ("a tabuada do %d é: %d + %d = %'.lf\n", cont, num, cont, soma);
}
for (int s = 0; s <=10; s++){
if (s >= cont ){
sub = (s-cont);
printf ("a tabuada do %d é: %d - %d = %'.lf\n", cont, num, cont, soma);
}else{
sub = (cont - s);
printf ("a tabuada do %d é: %d - %d = %'.lf\n", cont, num, cont, soma);
	}
}
for (int m = 0; m<=10; m++){
mult = m*cont);
printf ("a tabuada do %d é: %d * %d = %'.lf\n", cont, num, cont, soma);
}
for (int d = 0; d<=10; d++){
mult = d/cont);
printf ("a tabuada do %d é: %d / %d = %'.lf\n", cont, num, cont, soma);
		}
	}
}
