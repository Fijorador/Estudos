#include <stdio.h>
#include <stdlib.h>

#define N 100


void bubble2(int vetor[]);
void troca(int *x, int *y);

int main(){

int vetor[100];

int i;

for(i = 0; i < 100; i++){
   vetor[i] = rand();
   printf("%d",vetor[i]);}

   printf("\nPrenchido");

void troca(int *x, int *y) {
  int aux;
  aux = *x;
  *x = *y;
  *y = aux;
}

void bubble2(int vetor[]) {
  int i, j,c=0,t=0;

  for (i=0; i< (N-1); i++) {
      printf("Iteracao %d:\n",i+1);
    for(j=1; j<N-i; j++){
       c++;
      if (vetor[j-1] > vetor[j]) {
        t++;
        troca(&vetor[j], &vetor[j-1]);
      }
      for(i = 0; i < 100; i++){
        printf("%d",vetor[i]);
    }
    printf("\n");
  }
  printf("Resumo:\n %d Comparacoes \n %d Trocas",c,t);
}





int buscaBinaria(int vet[], int key, int left, int right) {
    if (left > right) {
    return -1;
}

int mid = (left+right) / 2;

if (vet[mid] == key) {
return mid;
}
else if (key < vet[mid]) {
return buscaBinaria(vet, key, left, mid-1);
}
else {
return buscaBinaria(vet, key, mid+1, right);
}
}





}}
