#include <stdio.h>

float toKelvin(float celsius) {
    return celsius + 273.15;
}

float toFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    float kelvin = toKelvin(celsius);
    float fahrenheit = toFahrenheit(celsius);

    printf("%.2f graus Celsius equivalem a %.2f Kelvin\n", celsius, kelvin);
    printf("%.2f graus Celsius equivalem a %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
