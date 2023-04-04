//Escreva um algoritmo que mostre o resultado dos primeiros 50 termos da série: 1000/1 - 997/2 + 994/3- 991/4 + ... Resultado: 685.30.

#include <stdio.h>

int main() {
    int i, denominador = 1, sinal = 1;
    float soma = 0;

    for (i = 1; i <= 50; i++) {
        soma += (float) sinal * 1000 / denominador;
        sinal *= -1;
        denominador++;
    }

    printf("O resultado dos primeiros 50 termos da serie e %.2f\n", soma);

    return 0;
}
