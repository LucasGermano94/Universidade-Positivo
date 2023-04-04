// Escreva um algoritmo que leia dois números inteiros e os apresente em ordem crescente.

#include <stdio.h>

int main() {
    
int num1, num2;

printf("informe primeiro número: ");
scanf("%d", &num1);

printf("informe segundo número: ");
scanf("%d", &num2);

if(num1 > num2){
printf("números em ordem crescente: %d %d",num2, num1);
}
else{ 
printf("números em ordem crescente: %d %d", num1, num2);
}
    return 0;
}