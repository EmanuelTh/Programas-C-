#include <stdio.h>
#include <math.h>

int main(void) {
    int numero, n, digito, soma = 0;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    n = numero;

 
    int numDigitos = 0;
    while (n != 0) {
        n = n/10;
        numDigitos++;
    }

 	n = numero;
  
    while (n != 0) {
        digito = n % 10;
        soma = soma + pow(digito, numDigitos);
        n = n/10;
    }

    if (soma == numero) {
        printf("O numero %d e um Numero de Armstrong.\n", numero);
    } else {
        printf("O numero %d nao e um Numero de Armstrong.\n", numero);
    }

    return 0;
}
