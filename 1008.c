//Exercicio 1008

#include <stdio.h>

int main() {

    int NUMBER, HORAS;
    float SAL_HORA, SALARY;

    scanf ("%d", &NUMBER);
    scanf ("%d", &HORAS);
    scanf ("%f", &SAL_HORA);

    SALARY = HORAS * SAL_HORA;

    printf ("NUMBER = %d\nSALARY = U$ %.2f\n", NUMBER, SALARY);

    return 0;
}
