#include<stdio.h>
#include<stdlib.h>

typedef struct{

	int ra;
	char nome[50];
	float n1, n2, n3;
	int sit;

}alunos;


void coletar(alunos aluno[5]);
void calcular(alunos aluno[5]);
void imprimir(alunos aluno[5]);


int main(void){

	alunos aluno[5];

	coletar(&aluno[5]);

	calcular(&aluno[5]);

	system("cls");

	imprimir(&aluno[5]);



	return 0;
}

void coletar(alunos aluno[5]){

	int i;

	for(i = 1; i <= 5; i++){

		printf("Digite o RA do aluno %d: ", i);
		scanf("%d", &aluno[i].ra);
		printf("Digite o nome do aluno: ");
		scanf("%s", &aluno[i].nome);



		do{
			printf("Digite a 1° nota do aluno %s:", aluno[i].nome);
			scanf("%f", &aluno[i].n1);

			if(aluno[i].n1 > 10 || aluno[i].n1 < 0){

				printf("\nDigite uma nota válida");

			}
		}while(aluno[i].n1 > 10 || aluno[i].n1 < 0);



		do{
			printf("Digite a 2° nota do aluno %s:", aluno[i].nome);
			scanf("%f", &aluno[i].n2);

			if(aluno[i].n2 > 10 || aluno[i].n2 < 0){

				printf("\nDigite uma nota válida\n");

			}
		}while(aluno[i].n2 > 10 || aluno[i].n2 < 0);

		do{

			printf("Digite a 3° do aluno %s:", aluno[i].nome);
			scanf("%f", &aluno[i].n3);

			if(aluno[i].n3 > 10 || aluno[i].n3 < 0){

				printf("\nDigite uma nota válida\n");

			}
		}while(aluno[i].n3 > 10 || aluno[i].n3 < 0);


		system("cls");
	}
}

void calcular(alunos aluno[5]){

	int i;
	float media;

	for(i = 1; i <= 5; i++){

		media = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3) / 3;

		if(media < 6){

			aluno[i].sit = 0;

		}else{

			aluno[i].sit = 1;

		}
	}
}

void imprimir(alunos aluno[5]){

	int i;

	for(i = 1; i <=5; i++){

		if(aluno[i].sit == 0){

			printf("O aluno %s foi REPROVADO\n", aluno[i].nome);

		}else{

			printf("O aluno %s foi APROVADO\n", aluno[i].nome);

		}
	}
}






