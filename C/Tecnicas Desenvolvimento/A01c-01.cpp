#include <stdio.h>
#include <math.h>

int main() {
    int n = 1, tempo_execucao1, tempo_execucao2, elementos = 20;

    while (n < elementos) {
        tempo_execucao1 = 100 * (pow(n, 2));
        tempo_execucao2 = pow(2, n);
        
        printf("%d\n", n);

        if (tempo_execucao1 < tempo_execucao2) {
            printf("Etapa n=%d\ntempo_execucao1 é menor que tempo_execucao2", n);
            break;
        }
        
        n++;
    }

    return 0;
}
