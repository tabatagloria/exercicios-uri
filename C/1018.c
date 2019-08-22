#include <stdio.h>

int main(){
    int i, n, notas, lista[7] = {100, 50, 20, 10, 5, 2, 1};
    double quant;

    scanf("%d", &n);
    printf("%d\n", n);

    for(i = 0; i < 7; i++){
        notas = n / lista[i];
        n = n % lista[i];
        quant = lista[i];
        printf("%d notas(s) de R$ %.2lf\n", notas, quant);
    }

    return 0;
}
