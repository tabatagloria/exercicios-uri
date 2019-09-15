#include <stdio.h>

int main() {
    int a, b, c, maior, maiorAb;

    scanf("%d %d %d", &a, &b, &c);

    maiorAb = (a + b + abs(a - b)) / 2;
    maior = (maiorAb + c + abs(maiorAb - c)) / 2;
    printf("%d eh o maior\n", maior);

    return 0;
}
