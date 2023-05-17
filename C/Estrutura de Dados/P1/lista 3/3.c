#include <stdio.h>
#include <stdlib.h>

void soma(int *a, int *b);
void soma(int *a, int *b)
{
*a = (*b + *a);
printf("SOMA:%d",*a);
}



main(void){

int a, b;

scanf("%d %d", &a, &b);
soma(&a,&b);
}
