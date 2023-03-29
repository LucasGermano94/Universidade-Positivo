//Em uma certa papelaria, até 100 folhas, a cópia do xerox custa R$ 0,25 e, acima de 100 folhas, cadacópia adicional custa R$ 0,20. Escreva um algoritmo que dado o número total de cópias, informe ovalor a ser pago.

#include <stdio.h>

int main() {

    int numero_de_copias;
    float valor;
    
    printf("Informe o valor desejado de cópias: ");
    scanf("%d", &numero_de_copias);
    
    if(numero_de_copias <= 100){
        valor = numero_de_copias * 0.25;
    }
    else{
        valor = 100 * 0.25 + (numero_de_copias - 100) * 0.20;
    }
    printf("O Valor total a ser pago será: R$ %.2f\n", valor);
    return 0;
}