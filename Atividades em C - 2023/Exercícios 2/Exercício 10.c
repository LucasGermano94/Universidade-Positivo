//Escreva um algoritmo que calcule o fatorial de um número positivo qualquer. Por exemplo, se onúmero for 5, o resultado será 120 (5 * 4 * 3 * 2 * 1 = 120). É importante obsevar que o fatorial donúmero 0 é igual a 1.

#include <stdio.h>

int main() {
    int num, i, fat;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &num);

    fat = 1;

    for (i = 1; i <= num; i++) {
        fat *= i;
    }

    printf("O fatorial de %d e %d\n", num, fat);

    return 0;
}