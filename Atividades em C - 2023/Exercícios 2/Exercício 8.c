//Escreva um algoritmo que mostre a tabuada de um número inteiro qualquer que será digitado pelousuário, mas a tabuada não deve necessariamente iniciar em 1 e terminar em 10, ou seja, o valorinicial e final devem ser informados também pelo usuário, conforme mostrado no exemplo a seguir:

#include <stdio.h>

int main() {
    int num, inicio, fim, i, mult;

    printf("Mostrar a tabuada de: ");
    scanf("%d", &num);

    printf("Comecar por: ");
    scanf("%d", &inicio);

    printf("Terminar em: ");
    scanf("%d", &fim);

    for (i = inicio; i <= fim; i++) {
        mult = num * i;
        printf("%d x %d = %d\n", num, i, mult);
    }

    return 0;
}