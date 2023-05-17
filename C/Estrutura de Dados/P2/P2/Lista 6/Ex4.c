#include <stdio.h>
#include <stdlib.h>
#define N 10

typedef struct
{
    int ini;
    int fim;
    int vet[N];
} Fila;


Fila* criar_fila();

int fila_cheia(Fila *f);
int fila_vazia(Fila *f);
void enfileirar_fila(Fila *f,int v);
int desenfileirar_fila(Fila *f);
void liberar_fila(Fila *f);
void imprimir_fila(Fila *f);
void inverter_fila(Fila *f);
void filtrar_impar(Fila *f,Fila *f2);


int main(){

Fila *f = criar_fila();
Fila *f2 = criar_fila();


int x=0,ele,aux=0;

    do{
    printf("1-Add Elemento\n2-Selecionar Impars\n3-Exibir Fila\n");

    scanf("%d",&x);

    if(x==1){
        scanf("%d",&ele);
        enfileirar_fila(f,ele);
    }
    else if(x==2){
    filtrar_impar(f,f2);
    }

    else{
    imprimir_fila(f);

    }

    }while(x>0 && x<4);

    liberar_fila(f);

    return -1;
}



filtrar_impar(Fila *f,Fila *f2){



    int i,aux;

    for(i=0;i<N-1;i++){

            aux=desenfileirar_fila(f);
            if(aux%2!=0){
                enfileirar_fila(f2,aux);
            }}

     for(i=0;i<N-1;i++){

            aux=desenfileirar_fila(f2);
            if(aux!=-1){
                enfileirar_fila(f,aux);
            }

}}


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
