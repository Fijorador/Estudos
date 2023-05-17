#include<stdio.h>
#include<stdlib.h>

typedef struct{

	char nome[30],email[30];
	int idade;

}pessoas;

int main(void){

	pessoas pessoa;

	printf("Digite o nome: ");
	scanf("%s", &pessoa.nome);
	printf("Digite a idade: ");
	scanf("%D", &pessoa.idade);
	printf("Digite o email: ");
	scanf("%s", &pessoa.email);

	system("cls");

	printf("-------------\n");
	printf("Nome: %s\n", pessoa.nome);
	printf("Idade: %d\n", pessoa.idade);
	printf("Email: %s\n", pessoa.email);


	return 0;
}
