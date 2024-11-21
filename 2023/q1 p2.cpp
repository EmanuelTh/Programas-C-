#include <stdio.h>

int main() {
    int lim, N, k, vet[4], soma = 0, sub = -2, i = 1, j = 2, cont = -1;

    printf("Entre com o %i numero do seu ra: ", i);
    scanf("%i", &lim);

    for (k = 4; k >= 1; k--) {
        printf("Entre com o %i numero de seu RA: ", k + 1);
        scanf("%i", &vet[k - 1]);
    }

    for (k = 0; k < 4; k++) {
        printf("\n[%i]=%i", k, vet[k]);
        if (vet[k] == 5) {
            sub = sub - vet[k];
        } else {
            soma = soma + vet[k];
        }
    }

    printf("\nRes=%i", sub + soma);

    while (i) {
        if ((i < 0 || i >= 4) || (j < 0 || j >= 4)) {
            cont++;
            break;
        } else {
            if (i < 3 && i > -1) {
                vet[i] = vet[i] + vet[i + 1];
            }
            if (j < 3 && j > 0) {
                vet[j] = vet[j - 1] - vet[j + 1];
                cont++;
            }
            if (cont > lim - 4) {
                i = 0;
                j = -2;
                if (cont >= lim)
                    break;
            }
            printf("\n[%i   %i]", vet[2], vet[1]);
        }
    }

    return 0;
}