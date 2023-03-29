//Escreva um algoritmo que mostre se um número digitado está compreendido entre 20 e 90 (inclusive)ou não.

#include <stdio.h>

int main() {
    
    int num;
    printf("Informe o valor: ");
    scanf("%d", &num);
    
    if(num >= 20 && num <= 90){
        printf("O valor está no intervalo!");
    }
    else{
        printf("O valor não está no intervalo!");
    }
    

    return 0;
}