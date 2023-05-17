#include<stdio.h>
#include<stdlib.h>

void recolhimento(float gastos[1]);
void calculo( float gastos[1]);

int main(void){

	float gastos[6];

	recolhimento(&gastos[1]);
	calculo(&gastos[1]);



	return 0;
}

void recolhimento(float gastos[]){

	printf("digite o valor de gastos com ALIMENTAÇÃO: ");
	scanf("%f", &gastos[1]);
	printf("digite o valor de gastos com CONTAS DA CASA: ");
	scanf("%f", &gastos[2]);
	printf("digite o valor de gastos com ALUGUEL: ");
	scanf("%f", &gastos[3]);
	printf("digite o valor de gastos com LASER: ");
	scanf("%f", &gastos[4]);
	printf("digite o valor de GASTOS LIVRES: ");
	scanf("%f", &gastos[5]);

}

void calculo(float valor[]){

	int i;
	int total = 0;

	for(i = 1; i <=5; i++){

		total = total + valor[i];

	}

	printf("\n\n\no percentul de gastos com ALIMENTAÇÃO em relação ao total de gastos é de: %.1f%%\n", (valor[1] * 100) / total);
	printf("o percentual de gastos com CONTAS DA CASA em relação ao total de gastos é de: %.1f%%\n", (valor[2] * 100) / total);
	printf("o percentual de gastos com ALUGUEL em relação ao total de gastos é de: %.1f%%\n", (valor[3] * 100) / total);
	printf("o percentual de gastos com LASER em relação ao total de gastos é de: %.1f%%\n", (valor[4] * 100) / total);
	printf("o percentual de gastos com GASTOS LIVRES em relação ao total de gastos é de: %.1f%%\n", (valor[5] * 100) / total);

}
