//Escreva um algoritmo que efetue a leitura de um número inteiro e apresente se esse número édivisível por 2 e divisível por 3.

#include <stdio.h>

int main() {

    int num;
    printf("Informe o número: ");
    scanf("%d", &num);
    
    if(num % 2 == 0 && num % 3 == 0){
    
        printf("%d é divisível por 2 e por 3.", num);
    } else {
    
        printf("%d não é divisível por 2 e por 3.", num);
    }

    return 0;
}