//Escreva um algoritmo que escreva os 10 primeiros termos da série 1, 3, 9, 27, ...

#include <stdio.h>

int main() {
    int i;
    int termo = 1;

    printf("Os 10 primeiros termos da serie 1, 3, 9, 27, ...\n");
    printf("-----------------------------------------------\n");

    for (i = 0; i < 10; i++) {
        printf("%d\n", termo);
        termo *= 3;
    }

    return 0;
}
