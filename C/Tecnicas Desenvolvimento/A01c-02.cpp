#include <stdio.h>
#include <math.h>

int main() {
    int n = 1, elementos = 100;

    while (n <= elementos) {
        int insercao = 8 * (pow(n, 2));
        int intercalacao = 64 * n * (log(n));

        printf("n = %d, insercao = %d, intercalacao = %d\n", n, insercao, intercalacao);

        if (intercalacao < insercao) {
            printf("O valor inteiro de n para o qual a ordenacao por intercalacao supera a ordenacao por insercao eh %d.\n", n);
            break;
        }

        n++;
    }

    return 0;
}

