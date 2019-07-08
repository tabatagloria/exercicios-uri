//Exercicio 1010

#include <stdio.h>

int main() {


    int cod1, pecas1, cod2, pecas2;
    double valor1, valor2, total;

    scanf ("%d %d %lf", &cod1, &pecas1, &valor1);
    scanf ("%d %d %lf", &cod2, &pecas2, &valor2);

    total = pecas1*valor1 + pecas2*valor2;

    printf ("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
