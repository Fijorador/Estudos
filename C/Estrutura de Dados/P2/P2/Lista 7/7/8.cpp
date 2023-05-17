#include <stdio.h>
#include <stdlib.h>

int main(){

void removerValor(int valor)//Remove todos os n�s com info = valor
{
    if (primeiro != NULL)
    {
        No *no = primeiro, *aux = no->proximo, *anterior = NULL;
        while (aux != NULL)
        {
            if (no == primeiro)
            {
                if (no->info == valor)
                {
                    primeiro = aux;
                    free(no);
                    no = primeiro;
                    aux = aux->proximo;
                }
                else
                {
                    anterior = no;
                    no = no->proximo;
                    aux = aux->proximo;
                }
            }
            else
            {
                if (no->info == valor)
                {
                    anterior->proximo = aux;
                    free(no);
                    no = aux;
                    aux = aux->proximo;
                }
                else
                {
                    anterior = no;
                    no = no->proximo;
                    aux = aux->proximo;
                }
            }
        }
        //condi��o para o �ltimo n�
        if (no->info == valor)
        {
            if (tamanho > 1)
            {
                anterior->proximo = NULL;
                free(no);
            }
            else
            {
                free(no);
                primeiro = NULL;
            }
        }
    }
}

	return 0;
}
