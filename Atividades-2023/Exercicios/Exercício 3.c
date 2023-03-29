//Escreva um algoritmo que leia um número inteiro e apresente o seu valor absoluto.

#include <stdio.h>

int main() {
    
    int num;
    printf("Informe um valor: ");
    scanf("%d", &num);
    
    if(num >= 0){
        printf("O valor será:%d", num);
    }
    else{
        printf("O valor será:%d", num * -1);
    }

    return 0;
}