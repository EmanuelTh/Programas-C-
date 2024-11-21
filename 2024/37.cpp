#include <stdio.h>

int main() {
    int n_linhas;
    scanf("%d", &n_linhas);

    int l_atual = 1;
    int esp = n_linhas - 1;
    int ast = 1;
    int m = n_linhas;

    while (l_atual <= n_linhas * 2 - 1) {
        
        int i = 1;
        while (i <= esp) {
            printf(" ");
            i++;
        }

        
        int j = 1;
        while (j <= ast) {
            printf("*");
            j++;
        }

        printf("\n");

       
        if (l_atual < m) {
            esp--;
            ast += 2;
        } else {
            esp++;
            ast -= 2;
        }

        l_atual++;
    }

    return 0;
}
