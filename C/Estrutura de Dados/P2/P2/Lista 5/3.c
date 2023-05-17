#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int codigo;
    char nome[50];
    int ano;
    char autor[50];
} Livro;

Livro buscaSeqCodigo(Livro vet[], int key)
{
	int i;
	for (i = 0; i<50; i++)
	{
		if (vet[i].codigo == key)
		{
			return vet[i];
		}
	}
}

Livro buscaSeqInicialAutor(Livro vet[], char inicial)
{
	int i;
	for (i = 0; i<50; i++)
	{
		if (vet[i].autor[0] == inicial)
		{
			return vet[i];
		}
	}
}

Livro buscaSeqAno(Livro vet[], int ano)
{
	int i;
	for (i = 0; i<50; i++)
	{
		if (vet[i].ano == ano)
		{
			return vet[i];
		}
	}
}


