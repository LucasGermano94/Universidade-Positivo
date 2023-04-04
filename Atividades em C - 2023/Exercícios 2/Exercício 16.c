//Escreva um algoritmo que forneça quantos números devem existir em sequência a partir do 1 (1, 2, 3,4,...) para que a sua soma ultrapasse o valor 100 o mínimo possível.

#include <stdio.h>

int main() {
    int soma = 0, contador = 0;

    while (soma <= 100) {
        contador++;
        soma += contador;
    }

    printf("O numero minimo de numeros em sequencia a partir do 1 para ultrapassar 100 na soma eh: %d\n", contador);

    return 0;
}
