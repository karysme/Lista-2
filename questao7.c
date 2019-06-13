#include <stdio.h>
int main(){
char x[100];
int i, t;
    printf("Digite uma palavra: ");
    scanf("%s",x);
    t = strlen(x);
    printf("Inversão = ");
    for(i = t-1; i>=0; i--)
    {   
        printf("%c" ,x[i]);
    }
return 0;
}