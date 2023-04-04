//Escreva um algoritmo que mostre o resultado dos primeiros 20 termos da série: 1/1 + 3/2 + 5/4 + 7/8 +... Resultado: 6.00.

#include <stdio.h>

int main() {
    int i, denominador = 1;
    float soma = 0;

    for (i = 1; i <= 20; i++) {
        soma += (float) (2 * i - 1) / denominador;
        denominador *= 2;
    }

    printf("O resultado dos primeiros 20 termos da serie e %.2f\n", soma);

    return 0;
}
