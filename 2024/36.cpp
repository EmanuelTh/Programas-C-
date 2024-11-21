#include <stdio.h>

int main() {
    int n_linhas;
    scanf("%d", &n_linhas);

    int linha_atual[n_linhas];
    int i = 0;

    
    linha_atual[0] = 1;

    
    while (i < n_linhas) {
        int j = 0;

        
        while (j < n_linhas - i - 1) {
            printf(" ");
            j++;
        }

        j = 0;
        
        while (j <= i) {
            if (j == 0 || j == i) {
                linha_atual[j] = 1;
            } else {
                linha_atual[j] = linha_atual[j] + linha_atual[j - 1];
            }
            printf("%d ", linha_atual[j]);
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
