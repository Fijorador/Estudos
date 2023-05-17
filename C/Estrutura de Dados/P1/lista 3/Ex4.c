#include <stdio.h>
#include <stdlib.h>

int* calculaC(int *A, int *B);

int main() {

int *vetA = (int *) malloc(10 * sizeof(int));
int *vetB = (int *) malloc(10 * sizeof(int));
int *vetC = (int *) malloc(10 * sizeof(int));


int i = 0;


printf("preenche vetor A:\n");
for(i = 0; i < 10; i++) {
scanf("%d", &vetA[i]);
}

printf("preenche vetor B:\n");
for(i = 0; i < 10; i++) {
scanf("%d", &vetB[i]);
}

vetC = calculaC(vetA, vetB);

for(i = 0; i < 10; i++) {
printf("Vetor C:\n");
printf("%d\n", vetC[i]);
}

return 0;
}

int* calculaC(int A[], int B[]) {
int i = 0;
int *C = (int *) malloc(10 * sizeof(int));
for(i = 0; i < 10; i++){
C[i] = A[i] - B[i];
}
return C;
}
