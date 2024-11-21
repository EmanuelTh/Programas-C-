#include <stdio.h>
int main() {
int size = 200;
int values[size];
int i;
int min, max;
double sum = 0.0;
int countAboveAverage = 0;
double average;
printf("Digite %d valores inteiros:\n", size);
for (i = 0; i < size; i++) {
scanf("%d", &values[i]);
}
min = max = values[0];
for (i = 0; i < size; i++) {
if (values[i] < min) {
min = values[i];
}
if (values[i] > max) {
max = values[i];
}
sum += values[i];
}
average = sum / size;
for (i = 0; i < size; i++) {
if (values[i] > average) {
countAboveAverage++;
}
}
printf("Menor valor: %d\n", min);
printf("Maior valor: %d\n", max);
printf("Média dos valores: %.2f\n", average);
printf("Número de valores acima da média: %d\n", countAboveAverage);
return 0;
}
