#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

typedef struct
{
    int topo;
    char vet[N];
} Pilha;

Pilha* criar_pilha();
int pilha_vazia(Pilha*);
void liberar_pilha(Pilha*);
void pilha_push(Pilha*,char);
char pilha_pop(Pilha*);
void verifica_palindromo(char[N]);

int main(){
    char vet[N] = {"parede"};
    verifica_palindromo(vet);
	
    return 0;
}

void verifica_palindromo(char vet[N])
{
	int i = 0, j = 0, ehPalindromo = 0;
	char invertido[N];
	Pilha *p = criar_pilha();
	while(vet[i] != '\0')
	{
		pilha_push(p, vet[i]);
		i++;
	}
	while(!pilha_vazia(p))
	{
		invertido[j] = pilha_pop(p);
		j++;
	}
	for(i = 0; i < j; i++) {
		if (vet[i] != invertido[i])
		{
			ehPalindromo++;
		}
	}
	
	if (ehPalindromo == 0)
	{
		printf("\n Eh palindromo");
	}
	else
	{
		printf("\n Nao eh palindromo");
	}
	liberar_pilha(p);
}

Pilha* criar_pilha()
{
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = 0;
    return p;
}


int pilha_vazia(Pilha *p)
{
    return (p->topo==0);
}

int pilha_cheia(Pilha *p)
{
    return (p->topo==N);
}

void liberar_pilha(Pilha *p)
{
    free(p);
}

void pilha_push(Pilha *p, char v)
{
    if(pilha_cheia(p))
    {
        printf("A capacidade da pilha estourou.\n");
        return;
    }
    p->vet[p->topo] = v;
    p->topo++;
}

float mostrar_topo(Pilha *p)
{
    if(pilha_vazia(p))
    {
        printf("A pilha esta vazia.\n");
        return -1;
    }
    return p->vet[p->topo-1];
}

char pilha_pop(Pilha *p)
{
    if(pilha_vazia(p))
    {
        printf("Pilha vazia.\n");
        return -1;
    }
    p->topo = p->topo - 1;
    return p->vet[p->topo];
}

void imprimir_pilha(Pilha *p) 
{
    int i;

    for(i=0; i < p->topo; i++)
    {
        printf("[%d]  ", p->vet[i]);
    }
    printf("<--topo\n");

}















