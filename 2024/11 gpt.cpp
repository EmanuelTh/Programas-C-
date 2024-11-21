#include <stdio.h>

int main (void)
{
    int n, i;
    unsigned long long fat = 1;  // fatorial pode ser um número muito grande

    printf("Escreva um numero para ver qual seu resultado fatorial: ");
    scanf("%d", &n);  // Corrigido para %d para ler um inteiro

    if (n < 0) {
        printf("Fatorial nao esta definido para numeros negativos.\n");
    } else {
        for (i = n; i > 1; i--) {
            fat *= i;  // Corrigido o cálculo do fatorial
        }

        printf("O fatorial de %d é: %llu\n", n, fat);
    }

    return 0;
}

