//Escreva um algoritmo que mostre o resultado da série: 1/100 + 2/99 + 3/98 + 4/97 + ... + 100/1.Resultado: 423.93.

#include <stdio.h>

int main() {
    int i;
    float soma = 0;

    for (i = 1; i <= 100; i++) {
        soma += (float) i / (float) (101 - i);
    }

    printf("O resultado da serie e %.2f\n", soma);

    return 0;
}
