#include <stdio.h>
#include <stdlib.h>

struct tipo_no {
    int dado;
    struct tipo_no * proximo;
};

typedef struct tipo_no No;

struct tipo_lista{
     No *primeiro;
     No *ultimo;
};

typedef struct tipo_lista Lista;  

void criarLista(Lista* lista){
  lista->primeiro = NULL;
  lista->ultimo=NULL;   
}

int listaVazia(Lista* lista){
   if ((lista->primeiro == NULL) || (lista->ultimo==NULL)) return 1;
   else return 0;
}

void inserirFinal(Lista* lista,int valor){
  No *novo;   
  novo = (No*)malloc(sizeof(No));
  novo->dado = valor;
  novo->proximo=NULL;
  if(listaVazia(lista)==1){
    lista->primeiro = novo;                       
  }else{
     (lista->ultimo)->proximo = novo;    
  }                                 
  lista->ultimo = novo;     
}

void inserirInicio(Lista* lista,int valor){
  No *novo;   
  novo = (No*)malloc(sizeof(No));
  novo->dado = valor;
  novo->proximo=NULL;
  if(listaVazia(lista)==1){
    lista->ultimo = novo;                       
  }else{
     novo->proximo = lista->primeiro;    
  }                                 
  lista->primeiro = novo;     
} 
//Função que adiciona os números pares no início da lista e os números ímpares no final da lista
void inserir(Lista* lista, int valor){
	if(valor % 2 == 0){
		inserirInicio(lista, valor);
	} else {
		inserirFinal(lista, valor);
	}
}

void listar(Lista* lista){
   No* ponteiro = lista->primeiro;
   while(ponteiro!= NULL){
       printf("%d ",ponteiro->dado);             
       ponteiro = ponteiro->proximo;              
   }   
   printf("\n");
}

int main(int argc, char *argv[]){
  Lista* lista = (Lista*) malloc(sizeof (Lista));   
  criarLista(lista);
  int op=0,valor;
  do{
    system("cls");  
    printf("\n1-Inserir no Final\n2-Inserir no Inicio\n3-Listar\n4-Sair\n");
    scanf("%d",&op);
    switch(op){
       case 1:printf("\nInforme o Valor:");
              scanf("%d",&valor);
              inserirFinal(lista,valor);
              break;
       case 2:printf("\nInforme o Valor:");
              scanf("%d",&valor);
	   		  inserirInicio(lista,valor);
              break;
       case 3:system("cls");
              listar(lista);                
              system("PAUSE");	
    }  
  }while(op != 4);     
  system("PAUSE");	
  return 0;
}
