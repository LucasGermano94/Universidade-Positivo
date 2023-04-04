//Escreva um algoritmo que converta números inteiros, de sua representação numérica para representação em extenso. O algoritmo deverá solicitar ao usuário um número inteiro (de 0 a 9) emostrar na tela o valor em extenso. Por exemplo, se o usuário digitar "7", o algoritmo deverá mostrar"Sete". Se o usuário digitar um valor fora da faixa prevista (de 0 a 9), o algoritmo deverá mostrar "Valorinválido".

#include <stdio.h>

int main() {
    
    int num;
    
    printf("Informe um número: ");
    scanf("%d", &num);
    
    switch(num){
        case 0: printf("Zero.");
        break;
        case 1: printf("Um.");
        break;
        case 2: printf("Dois.");
        break;
        default: printf("Valor inválido.");
    }

    return 0;
}