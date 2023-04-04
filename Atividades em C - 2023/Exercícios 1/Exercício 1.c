//Escreva um algoritmo que leia dois números e efetue a adição dos mesmos. Caso o valor somado seja menor que 20, este deverá ser apresentado somando-se a ele mais 8; caso o valor somado seja igualou maior que 20, este deverá ser apresentado subtraindo-se 5.

#include <stdio.h>

int main() {
    
    int num1, num2, valor_total;
    
    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);
    
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);
    
    valor_total = num1 + num2;
    if(valor_total <= 20){
        printf("Resultado: %d", valor_total - 5);
    }
else{
    printf("Resultado: %d", valor_total + 8);
}

    return 0;
}