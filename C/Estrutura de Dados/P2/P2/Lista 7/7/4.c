




#include<stdio.h>
#include<stdlib.h>

typedef struct No {
    int info;
    struct No* prox;
} No;


typedef struct Lista {
    No* inicio;
} Lista;

No* adicionar_no_pos(Lista *l, int v, int pos);
Lista* criar_lista(void);
int lista_vazia(Lista *l);
No* criar_no(int v);
int info_no(No *n);
int tamanho_lista(Lista *l);
void mostrar_lista(Lista *l);
No* adicionar_inicio(Lista *l, int v);
No* adicionar_novo_no(No *n, int v);
No* retornar_no_pos(Lista *l, int pos);
int somavalores(Lista *l);

int main(){
    Lista *l = criar_lista();

    adicionar_no_pos(l,10,0);
    mostrar_lista(l);
    adicionar_no_pos(l,11,0);
    mostrar_lista(l);

    somavalores(l);


return -1;
}


int somavalores(Lista *l){

    int soma=0;

    if(lista_vazia(l)){
             printf("Lista Vazia\n\n");
    }
    else{

        No* aux = l->inicio;

        while(aux!=0){

                soma+=aux->info;
                aux=aux->prox;
        }

        printf("%d",soma);
    }


}

Lista* criar_lista(){ //fun��o para cria��o da lista
    Lista *l = (Lista*)malloc(sizeof(Lista));
    l->inicio = NULL;
    return l;
}

int lista_vazia(Lista *l){
    return (l->inicio==NULL);
}

No* criar_no(int v){
    No *n = (No*)malloc(sizeof(No));
    n->info = v;
    n->prox = NULL;
    return n;
}

int info_no(No *n){
    return n->info;

}

int tamanho_lista(Lista *l){
    int tam = 0;
    No *aux = l->inicio;

    while(aux!=NULL){
        tam++;
        aux = aux->prox;
    }

    return tam;
}

void mostrar_lista(Lista *l){
    No* aux = l->inicio;
    if(lista_vazia(l))
        printf("Lista Vazia\n\n");
    else
        printf("Lista(%d): \n",tamanho_lista(l));
    while(aux!=NULL){
        printf("%d, ",info_no(aux));
        aux = aux->prox;
    }
    printf("\n");
}

No* adicionar_inicio(Lista *l, int v){
    No *novo = criar_no(v);
    novo->prox = l->inicio;
    l->inicio = novo;
    return novo;
}

No* adicionar_novo_no(No *n, int v){
    No *novo = criar_no(v);
    novo->prox = n->prox;
    n->prox = novo;
    return novo;
}


No* retornar_no_pos(Lista *l, int pos){
    int i;
    No *aux = l->inicio;
    if(pos < 0 || pos >= tamanho_lista(l)){
        return NULL;
    }
    for(i=0;i<pos;i++){
        aux=aux->prox;
    }
    return aux;
}

No* adicionar_no_pos(Lista *l, int v, int pos){
    if(pos==0){
        adicionar_inicio(l,v);
    }else{
        No* n = retornar_no_pos(l,pos-1);
        if(n!=NULL){
            n = adicionar_novo_no(n,v);
        }
        return n;
    }
}

