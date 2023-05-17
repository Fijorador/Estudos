#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b);
void leia(int *a, int *b);

void troca(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}

void leia(int *a, int *b)
{
printf("Entre dois numeros: ");
scanf("%d %d", a, b);
}



main(void){
int a, b;

leia(&a,&b);
troca(&a, &b);

printf("Trocados, eles sao %d e %d\n", a, b);
}
