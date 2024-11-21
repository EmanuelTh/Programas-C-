#include <stdio.h>

int main() {
    int e, i, j = 0, k = 0, nulos = 0;
    
    printf("Insira o numero de termos do vetor V (menor que 50):\n ");
    scanf("%d", &e);
    
    while (e > 50) {
        printf("\n voce inseriu um numero muito alto de termos porfavor insira um numero dentro do limite: ");
        scanf("%d", &e);
    }
    
    float vet_v[e], vet_a[e], vet_b[e];
    
    for (i = 0; i < e; i++) {
        printf("\n\nDigite o valor %d do vetor V: ", i + 1);
        scanf("%f", &vet_v[i]);
    }
    
    for (i = 0; i < e; i++) {
        if (vet_v[i] > 0) {
            vet_a[j] = vet_v[i];
            j++;
        } else if (vet_v[i] < 0) {
            vet_b[k] = vet_v[i];
            k++;
        } else {
            nulos++;
        }
    }
    
    printf("vetor V: ");
    for (i = 0; i < e; i++) {
        printf("%.0f, ", vet_v[i]);
    }
    
    printf("\n\nvetor A: ");
    for (i = 0; i < j; i++) {
        printf("%.0f, ", vet_a[i]);
    }
    
    printf("\n\nvetor B: ");
    for (i = 0; i < k; i++) {
        printf("%.0f, ", vet_b[i]);
    }
    
    printf("\n\nExistem %d elementos nulos em V", nulos);
    
    return 0;
}
