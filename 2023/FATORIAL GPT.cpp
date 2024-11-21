#include <stdio.h>

int calcularFatorial(int numero) {
    int resultado = 1;
    int i;
  
    for (i = 1; i <= numero; i++) {
        resultado *= i;
    }
  
    return resultado;
}

int main() {
    int numero;
  
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
  
    if (numero < 0) {
        printf("O fatorial não está definido para números negativos.\n");
    } else {
        int fatorial = calcularFatorial(numero);
        printf("O fatorial de %d é %d.\n", numero, fatorial);
    }
  
    return 0;
}

