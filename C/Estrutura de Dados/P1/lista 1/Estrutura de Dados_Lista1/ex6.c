#include<stdio.h>
#include<stdlib.h>



int main(void){

	int a[5];
	int b[5];
	int i;

	for(i = 1; i <= 5; i++){

		do{

			printf("digite um valor inteiro e positivo para ser armazenado na posição [%d] de A: ", i);
			scanf("%d", &a[i]);

		} while(a[i] <= 0);
	}

	for(i = 0; i <= 5; i++){

		int x = a[i];

		b[i] = 1;

		while(a[i] >= 1){

			b[i] *= a[i];
			a[i]--;

		}

		a[i] = x;
	}

	for(i = 1; i <= 5; i++){

		printf("A[%d]	B[%d]\n", a[i], b[i]);

	}

	return 0;
}
