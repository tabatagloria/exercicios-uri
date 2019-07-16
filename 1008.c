//Exercicio 1008

#include <stdio.h>

int main() {

    int number, horas;
    float sal_hora, salary;

    scanf ("%d", &number);
    scanf ("%d", &horas);
    scanf ("%f", &sal_hora);

    salary = horas * sal_hora;

    printf ("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);

    return 0;
}
