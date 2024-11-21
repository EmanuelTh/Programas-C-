#include <stdio.h>

int main() {
    char relogio_digital, relogio_ponteiro, relogio_parede;

    for (relogio_digital = 'A'; relogio_digital <= 'C'; relogio_digital++) {
        for (relogio_ponteiro = 'A'; relogio_ponteiro <= 'C'; relogio_ponteiro++) {
            for (relogio_parede = 'A'; relogio_parede <= 'C'; relogio_parede++) {
                if ((relogio_digital == 'A' || relogio_parede == 'A') &&
                    (relogio_digital == 'B' || relogio_ponteiro == 'C') &&
                    (relogio_parede == 'C' || relogio_ponteiro == 'C') &&
                    (relogio_ponteiro == 'B' || relogio_parede == 'B')) {

                    printf("Relógio digital: %c\n", relogio_digital);
                    printf("Relógio de ponteiros: %c\n", relogio_ponteiro);
                    printf("Relógio de parede: %c\n\n", relogio_parede);
                }
            }
        }
    }

    return 0;
}
