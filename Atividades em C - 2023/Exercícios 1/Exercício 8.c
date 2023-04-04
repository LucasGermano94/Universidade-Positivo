//Escreva um algoritmo que leia um número inteiro e, caso este número seja positivo, apresente umamensagem indicando se ele é par ou ímpar. Caso o número seja negativo, apresente o seu valorabsoluto.

#include <stdio.h>

int main() {
    
    int num;
    
    printf("Informe número: ");
    scanf("%d",&num);
    
    if(num >= 0){
        if(num % 2 == 0){
            printf("O número é par.");
    }
        else{
            printf("O número é ímpar");
        }
    }
    else{
        printf("O valor absoluto é %d", num * -1);
    }
    return 0;
}