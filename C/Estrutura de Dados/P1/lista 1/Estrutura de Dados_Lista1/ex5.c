#include<stdio.h>
#include<stdlib.h>

int eleva(int x, int n);

int main(void){

	int x;
	int n;

	printf("digite o numero a ser elevado a uma potencia \"n\": ");
	scanf("%d", &x);

	do{

		printf("digite o expoente \"n\" deste numero: ");
		scanf("%d", &n);

		if(n < 0){

			printf("digite um valor maior ou igual a 0\n");

		}

	} while(n < 0);


	x = eleva(x, n);

	printf("o resultado da operação é: %d", x);


	return 0;
}

int eleva(int x, int n){

	if(n == 0){

		return 1;

	}else{

		return x * eleva(x, n - 1);

	}








}
