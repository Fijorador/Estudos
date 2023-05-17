
#include<stdio.h>
#include<stdlib.h>

typedef struct No {
    int info;
    struct No* prox;
    struct No* ant;
} No;

typedef struct ListaDupla {
    No* inicio;
    No* fim;
} ListaDupla;


int del_maior_no(ListaDupla *l);


int main(){


}

int del_no_valor(ListaDupla *l, int v){
    int pos = indice_no(l,v);
    return del_no_pos(l,pos);
}

int del_maior_no(ListaDupla *l){
    int aux, maior = l->inicio->info;
    No* n = l->inicio;

    while(n!=NULL){
        if(n->info>maior){
            maior = n->info;
        }
        n=n->prox;
    }
    return del_no_valor(l,maior);
}
