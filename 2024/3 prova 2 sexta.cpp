#include <stdio.h>

void ordenar_coluna(int matriz[][2], int N) {
    int i = 0;
    int j;
    while (i < N - 1) {
        j = 0;
        while (j < N - i - 1) {
            if (matriz[j][1] > matriz[j + 1][1]) {
                int temp = matriz[j][1];
                matriz[j][1] = matriz[j + 1][1];
                matriz[j + 1][1] = temp;
            }
            j++;
        }
        i++;
    }
}

void filtrar_pares(int matriz[][2], int N) {
    int i = 0;
    while (i < N) {
        if (matriz[i][1] % 2 != 0) {
            matriz[i][1] = 0;  // Substitui valores ímpares por 0
        }
        i++;
    }
}

int main() {
    int N;

    // Recebe o valor de N
    printf("Digite o número de linhas da matriz (N): ");
    scanf("%d", &N);

    // Declara a matriz Nx2
    int matriz[N][2];

    // Inicializa a primeira coluna com zeros e recebe valores para a segunda coluna
    int i = 0;
    while (i < N) {
        matriz[i][0] = 0;  // Inicializa a primeira coluna com zeros
        printf("Digite o valor para a segunda coluna na linha %d: ", i + 1);
        scanf("%d", &matriz[i][1]);
        i++;
    }

    // Ordena a segunda coluna
    ordenar_coluna(matriz, N);

    // Filtra apenas os valores pares na segunda coluna
    filtrar_pares(matriz, N);

    // Exibe a matriz final
    printf("\nMatriz após ordenação e filtragem de valores pares:\n");
    i = 0;
    while (i < N) {
        printf("%d %d\n", matriz[i][0], matriz[i][1]);
        i++;
    }

    return 0;
}
