#include <stdio.h>

void converterTempo(int minutos, int *horas, int *minutos_resultantes, float *segundos)
{
    *horas = minutos / 60;
    *minutos_resultantes = minutos % 60;
    *segundos = (*minutos_resultantes - (*minutos_resultantes / 1)) * 60;
}

int main()
{
    int minutos, horas, minutos_resultantes;
    float segundos;

    printf("Digite o intervalo de tempo em minutos: ");
    scanf("%d", &minutos);

    converterTempo(minutos, &horas, &minutos_resultantes, &segundos);

    printf("%d min = %d h %d min %.1f s\n", minutos, horas, minutos_resultantes, segundos);

    return 0;
}
