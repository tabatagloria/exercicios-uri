//Exercicio 1009

#include <stdio.h>

int main() {

    char nome[30];
    double salario, vendas, TOTAL;

    printf ("Primeiro nome do vendedor: ");
    scanf ("%s", &nome);
    scanf ("%lf", &salario);
    scanf ("%lf", &vendas);

    printf ("TOTAL = R$ %.2lf\n", TOTAL=salario+vendas*0.15);

    return 0;
}
