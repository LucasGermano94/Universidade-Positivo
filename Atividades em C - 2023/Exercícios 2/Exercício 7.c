//Escreva um algoritmo que apresente na tela a tabuada de um número lido do teclado. Por exemplo,considerando que o número lido é 2, o formato da apresentação deve ser o seguinte:

#include <stdio.h>

int main() {
    int num, i, mult;

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++) {
        mult = num * i;
        printf("%d x %d = %d\n", num, i, mult);
    }

    return 0;
}