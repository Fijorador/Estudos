#include<stdio.h>
#include<stdlib.h>
#define N 50 

typedef struct
{
    int topo;
    char vet[N];
} Pilha;

Pilha* criar_pilha();
void pilha_push (Pilha*, char);
int pilha_vazia(Pilha*);
int pilha_cheia(Pilha*);
void liberar_pilha(Pilha*);
void pilha_push(Pilha*, char);
char pilha_pop(Pilha*);
int mostrar_topo(Pilha*);
void imprimir_pilha(Pilha*);
int verifica_exp(char[]);
int verifica_par(char,char);

int main()
{
    char vet[N] = {"( )[  ]"};
    printf("EXP:%s\n",vet);
    if(verifica_exp(vet))
        printf("Expressao mal formada");
    else
        printf("Expressao bem formada");
    return -1;
}

int verifica_exp(char vet[]){
    Pilha *p = criar_pilha();
    int i=0;
    while(vet[i]!='\0'){
        if(vet[i]=='[' || vet[i] =='('){
            pilha_push(p,vet[i]);

        }else if(vet[i]==']' || vet[i] ==')'){
            if(!pilha_vazia(p)){
                if(verifica_par(pilha_pop(p),vet[i])== 0){
                    return 1;
                }
            }else{
                return 1;
            }
        }
        i++;
    }
    if(!pilha_vazia(p)){
        return 1;
    }
    else{
        return 0;
    }
}

int verifica_par(char a,char f)
{
    switch(f)
    {
    case ')':
        if(a=='(')
            return 1;
        else
            return 0;
        break;
    case ']':
        if(a=='[')
            return 1;
        else
            return 0;
        break;
    default:
        return 0;
    }

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

int mostrar_topo(Pilha *p)
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
    printf("PILHA\n");
    for(i=0; i < p->topo; i++)
    {
        printf("[%c]  ", p->vet[i]);
    }
    printf("<--topo\n");
    printf("FIM PILHA\n");
}
