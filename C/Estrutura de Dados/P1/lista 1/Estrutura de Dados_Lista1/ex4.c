#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){

	int a[10];
	int b[10];
	int c[10];

	int i;

	for(i = 1; i <= 10; i++){

		printf("dos numeros de serie \"1\"\n");
		printf("digite o numero que ficar� na pisi��o %d: ", i);
		scanf("%d", &a[i]);
	}

	printf("=========================================================\n\n");

	for(i = 1; i <= 10; i++){

		printf("dos numeros de serie \"2\"\n");
		printf("digite o numero que ficar� na posi��o %d: ", i);
		scanf("%d", &b[i]);
	}

	printf("=========================================================\n\n");

	for(i = 1; i <= 10; i++){

		c[i] = a[i] - b[i];

	}

	printf("\n=========================================================\n\n");

	for(i = 1; i <= 10; i++){

		printf("A diferen�a de A[%d] e B[%d] � de: %d\n", i, i, c[i]);

	}


	return 0;
}
