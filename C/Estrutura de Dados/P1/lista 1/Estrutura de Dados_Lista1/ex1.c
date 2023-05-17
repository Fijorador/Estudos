#include<stdio.h>
#include<stdlib.h>

char notaFinal(float n1, float n2, float n3, float n4){

	float r;
	char media;

	n1 = n1 * 2;
	n2 = n2 * 3;
	n3 = n3 * 4;
	n4 = n4 * 5;

	r = (n1 + n2 + n3 + n4) / 14;

	if(r < 6){

		media = 'D';

	}else if(r < 7){

		media = 'C';

	}else if(r < 8.5){

		media = 'B';

	}if(r >= 8.5){

		media = 'A';

	}


	return media;
}


int main(void){


	float n1;
	float n2;
	float n3;
	float n4;
	char resultadoFinal;

	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	scanf("%f", &n4);

	resultadoFinal = notaFinal(n1, n2, n3, n4);

	printf("a media do aluno foi: %c", resultadoFinal);

	return 0;
}



