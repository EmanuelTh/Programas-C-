#include <stdio.h>
#include <math.h>

// Função para calcular o fatorial de L
int fatorial(int L) {
    int f = 1;
    int i = 1;
    while (i <= L) {
        f *= i;
        i++;
    }
    return f;
}

// Função para calcular o valor de r
int calcular_r(int x[], int L) {
    int n = 0;
    int soma = 0;
    int L_fatorial = fatorial(L);  // Calcula o fatorial de L

    while (n <= L - 2) {
        soma += x[n] * x[n] / L_fatorial;  // Calcula x[n]^n como x[n] * x[n]
        n++;
    }

    // Para simular a raiz quadrada usando inteiros, vamos utilizar o sqrt da biblioteca math
    int r = (int) sqrt(soma);

    return r;
}

int main() {
    int x[] = {1, 2, 3, 4, 5};  // Exemplo de vetor
    int L = sizeof(x) / sizeof(x[0]);

    int resultado = calcular_r(x, L);
    printf("O valor de r é: %d\n", resultado);

    return 0;
}
