#include <stdio.h>

int main() {
    int n, hora, minuto, segundo;

    scanf("%d", &n);

    minuto = n / 60;
    segundo = n % 60;
    hora = minuto / 60;

    if (minuto >= 60) {
        minuto = minuto - (hora * 60);
    }
    printf("%d:%d:%d\n", hora, minuto, segundo);

    return 0;
}
