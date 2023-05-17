#include <stdio.h>
#include <stdlib.h>

void bubble_sort(Lista* l)
{
    //SE só tiver um elemento na lista
    if(l->inicio->prox == NULL)
    {
        //retorna a lista pois só contém um elemento
        return l;
    }

    //SE só tiver 2 elementos na lista o terceiro é NULL
    else if(l->inicio->prox->prox == NULL)
    {
        //se o primeiro elemento for menor que o segundo
        if(l->inicio->valor < l->inicio->prox->valor)
        {
            //retorna lista *pois estão em ordem crescente*
            return l;
        }
        else
        {
            No* aux = l->inicio->prox;

            l->inicio->prox = aux->prox;
            aux->prox = l->inicio;
            l->inicio = aux;
        }
    }else
    {
        No* aux = l->inicio;
        No* aux2 = l->inicio->prox;
      
      //aqui é onde devo continuar o código
      
    }
}
int main(){
	int num = 0,id;
	Lista *l = novaLista();
	No *aux = l->inicio;

    while(num>=0||id<=1000){
    scanf("%d", &num);
    fflush(stdin);
    if(num<0){break;}
    l = push(l, num);
    id++;
    }
    imprimeLista(l);
    bubble_sort(l);
    printf("\n");
    imprimeLista(l);

    return 0;
}
