#include <stdio.h>

int main() {
    int n, ano, d, meses, dias;

    scanf("%d", &n);

    ano = n / 365;
    d = n % 365;
    meses = d / 30;
    dias = d % 30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
