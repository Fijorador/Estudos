#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){


	int n;

	printf("digite um numero para verificar se � primo: ");
	scanf("%d", &n);

	n = primo(n);


	return 0;
}

int primo(int n){

	if(n % 2 == 0){

		printf("\n\n\no numero n�o � primo");

	}else{

		printf("o numero eh primo");

	}

	return n;
}
