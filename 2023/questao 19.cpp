#include <stdio.h>

int main() {
    int valor, menor = 0;
    char opcao;

    printf("Digite os valores (digite 'S' para parar): \n");

    while (scanf("%d", &valor) == 1) {
        if (menor == 0 || valor < menor) {
            menor = valor;
        }

        while (getchar() != '\n') {
            continue;
        }

        printf("Digite 'S' para parar ou continue digitando valores: ");
        scanf(" %c", &opcao);

        if (opcao == 'S' || opcao == 's') {
            break;
        }
    }

    printf("O menor valor digitado foi: %d\n", menor);

    return 0;
}
