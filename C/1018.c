#include <stdio.h>

int main(){
    int i, n, quantidadeNotas, notas[7] = {100, 50, 20, 10, 5, 2, 1};


    scanf("%d", &n);
    printf("%d\n", n);

    for(i = 0; i < 7; i++){
        quantidadeNotas = n / notas[i];
        n = n % notas[i];
        printf("%d nota(s) de R$ %d,00\n", quantidadeNotas, notas[i]);
    }

    return 0;
}