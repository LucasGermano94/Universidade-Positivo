//Escreva um algoritmo que receba um número inteiro positivo e escreva a sequência de números deFibonacci. Por exemplo, se o número for 10, escreva 1, 1, 2, 3, 5, 8, 13, 21, 34, 55.

#include <stdio.h>

int main() {
    int n, i, primeiro = 1, segundo = 1, proximo;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci para %d termos:\n", n);

    for (i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            printf("1 ");
            proximo = 1;
        } else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
            printf("%d ", proximo);
        }
    }

    printf("\n");

    return 0;
}
