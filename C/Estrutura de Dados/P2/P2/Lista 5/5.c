#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 50

typedef struct
{
    int topo;
    float vet[N];
} Pilha;

Pilha* criar_pilha();
int pilha_vazia(Pilha*);
int pilha_cheia(Pilha*);
void liberar_pilha(Pilha*);
void pilha_push(Pilha*,float);
float pilha_pop(Pilha*);
float mostrar_topo(Pilha*);
void imprimir_pilha(Pilha*);
float resolver_exp(char[]);
float calculo(float a, float b, char x);

int main(){
    char vet[N] = {"5 3 - 1 8 + *"};
    printf("Resp-> %.2f\n",resolver_exp(vet));
    return -1;
}

float resolver_exp(char x[]){
    char *str;
    float aux ,op1, op2;

    Pilha *p = criar_pilha();
    str = strtok(x, " ");

    while(str){
        if(str[0] == '-' || str[0] == '+' || str[0] == '*' || str[0] == '/'){
            op1 = pilha_pop(p);
            op2 = pilha_pop(p);
            aux = calculo(op2,op1,str[0]);
            pilha_push(p,aux);
        }
        else{
            aux = atof(str);
            pilha_push(p,aux);
        }
        str = strtok(NULL, " ");
    }
    aux = pilha_pop(p);
    liberar_pilha(p);
    return aux;
}

float calculo(float a, float b, char x){
    switch(x){
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '/':
        return a / b;
        break;
    case '*':
        return a * b;
        break;
    default:
        return 0.0;
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

void pilha_push(Pilha *p, float v)
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

float pilha_pop(Pilha *p)
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