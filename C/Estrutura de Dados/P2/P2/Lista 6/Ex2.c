#include <stdio.h>
#include <stdlib.h>
#define N 10


typedef struct
{
    int ini;
    int fim;
    int vet[N];
} Fila;

typedef struct
{
    int topo;
    int vet[N];
} Pilha;

//prot�tipos

Fila* criar_fila();

int fila_cheia(Fila *f);
int fila_vazia(Fila *f);
void enfileirar_fila(Fila *f,int v);
int desenfileirar_fila(Fila *f);
void liberar_fila(Fila *f);
void imprimir_fila(Fila *f);
void inverter_fila(Fila *f);

Pilha* criar_pilha();
void pilha_push (Pilha*, int);
int pilha_vazia(Pilha*);
int pilha_cheia(Pilha*);
void liberar_pilha(Pilha*);
void pilha_push(Pilha*, int);
int pilha_pop(Pilha*);
int mostrar_topo(Pilha*);
void imprimir_pilha(Pilha*);


int main() {

    Fila *f = criar_fila();
    Fila *f2 = criar_fila();

    int x=0,ele,aux=0;

    do{
    printf("1-Add Elemento\n2-inverter Fila\n3-Exibir Fila\n");

    scanf("%d",&x);

    if(x==1){
        scanf("%d",&ele);
        enfileirar_fila(f,ele);
    }
    else if(x==2){
    inverter_fila(f);
    }

    else{
    imprimir_fila(f);

    }

    }while(x>0 && x<4);

    liberar_fila(f);

    return -1;
}

void inverter_fila(Fila *f){

    Pilha *p;
    p = criar_pilha();

    int i,aux;

    for(i=0;i<N-1;i++){

            aux=desenfileirar_fila(f);
            pilha_push(p,aux);
            }


      for(i=0;i<N-1;i++){

            aux=pilha_pop(p);
            if(aux!=-1){
            enfileirar_fila(f,aux);
            }
    }}

Fila* criar_fila2(){
    Fila *f2 = (Fila*)malloc(sizeof(Fila));
    f2->ini = 0;
    f2->fim = 0;
    return f2;
}

Fila* criar_fila(){
    Fila *f = (Fila*)malloc(sizeof(Fila));
    f->ini = 0;
    f->fim = 0;
    return f;
}

int fila_cheia(Fila *f){
    return (f->fim - f->ini == N);
}

int fila_vazia(Fila *f){
    return (f->ini == f->fim);
}

void enfileirar_fila(Fila *f,int v){
    if(fila_cheia(f)){
        printf("Fila Cheia\n");
        return;
    }
   f->vet[f->fim % N] = v;
   f->fim++;
   //f->vet[f->fim++ % N] = v;
}


int desenfileirar_fila(Fila *f){
    int aux;
    if(fila_vazia(f)){
        printf("Fila vazia\n");
        return -1;
    }
    aux = f->vet[f->ini % N];
    f->ini++;
    return aux;
}

void liberar_fila(Fila *f){
    free(f);
}

void imprimir_fila(Fila *f){
    int i;
    printf("Dados na Fila:\n");
    //printf("f->ini:%d \n f->fim:%d\n",f->ini,f->fim);
    printf("Ini-->\t");
    for(i=f->ini;i<f->fim;i++){
        printf("[%d]\t",f->vet[i%N]);
    }
    printf("<--fim\n");
}


Pilha* criar_pilha(){
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

void pilha_push(Pilha *p, int v)
{
    if(pilha_cheia(p))
    {
        printf("A capacidade da pilha estourou.\n");
        return;
    }
    p->vet[p->topo] = v;
    p->topo++;
}

int mostrar_topo(Pilha *p)
{
    if(pilha_vazia(p))
    {
        printf("A pilha esta vazia.\n");
        return -1;
    }
    return p->vet[p->topo-1];
}

int pilha_pop(Pilha *p){
    if(pilha_vazia(p)){
        printf("Pilha vazia.\n");
        return -1;
    }
    p->topo = p->topo - 1;
    return p->vet[p->topo];
}

void imprimir_pilha(Pilha *p){//Apenas para debug da pilha. N�o faz parte das opera��es.
 int i;

 for(i=0;i < p->topo;i++){
    printf("[%d]  ", p->vet[i]);
 }
 printf("<--topo\n");

}
