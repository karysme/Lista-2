#include <stdio.h>
void main(){
int dia, mes, ano, diaAtual, mesAtual, nascimento, hoje, resultado;
printf ("informe a data de seu nascimento: \n");
printf ("informe o dia: \n);
scanf ("%d", &mes);
printf ("informe o ano: \n");
scanf ("%d", &ano);
printf ("informe a data de hoje: \n");
printf ("informe o dia: \n");
scanf ("%d", &diaAtual);
printf ("informe o mes: \n");
scanf ("%d", &mesAtual);
printf ("informe o ano: \n");
scanf ("%d", &anoAtual);
nascimento = dia + (mes * 30) + (ano * 365);
hoje = diaAtual + (mesAtual * 30) + (anoAtual * 365);
resultado = (hoje - nascimento);
printf ("você tem %d vividos \n, resultado);
}
