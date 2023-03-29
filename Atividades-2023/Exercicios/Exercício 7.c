//Escreva um algoritmo que efetue a leitura de um número inteiro e apresente se esse número édivisível por 2 ou divisível por 7.

#include <stdio.h>

int main() {

    int num;
    printf("Informe o número: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("%d O valor é divisível por 2\n.", num);
    }
    
    if(num % 7 == 0){
        printf("%d O valor é divisível por 7\n.", num);
    }

    return 0;
}