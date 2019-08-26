#include <stdio.h>

int main() {
    double litros, tempo, velocidade;

    scanf("%lf", &tempo);
    scanf("%lf", &velocidade);

    litros = (velocidade * tempo) / 12;
    printf("%.3lf\n", litros);

    return 0;
}
