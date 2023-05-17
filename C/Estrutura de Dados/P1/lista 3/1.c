
#include <stdio.h>
#include <stdlib.h>


void troca(int *a, float *b ,char *c);
void imprimir(int a, float b, char c);


int main(){

int a=1;
float b=1.1;
char c ='A';

imprimir(a,b,c);
troca(&a,&b,&c);
imprimir(a,b,c);


return 0;

}

void imprimir(int a, float b, char c){

printf("%d\n",a);
printf("%.2f\n",b);
printf("%c\n",c);


}


void troca(int *a, float *b,char *c){

scanf("%d",a);
scanf("%f",b);
fflush(stdin);
scanf("%c",c);

}


