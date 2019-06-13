#include <stdio.h>
void main(){
float x, y;
printf ("informe o valor de x: \n");
scanf ("%f",&x);
printf("informe o valor de y: \n");
scanf ("%f", &y);
if (x > 0 && y > 0){
printf ("\t o valor de x: %' .2f e de y: %' .2f pertecem ao 1Ḟ quadrante \n, x, y);
}else if (x < 0 && y < 0){
printf ("\t o valor de x: %' %' .2f e de y: %' .2f pertecem ao 2Ḟ quadrante \n, x, y);
}else if (x < 0 && y < 0){
printf ("\t o valor de x: %' %' .2f e de y: %' .2f pertecem ao 3Ḟ quadrante \n, x, y);
}else if (x < 0 && y < 0){
printf ("\t o valor de x: %' %' .2f e de y: %' .2f pertecem ao 4Ḟ quadrante \n, x, y);
}else{
printf ("\t valor invalido \n");
}
