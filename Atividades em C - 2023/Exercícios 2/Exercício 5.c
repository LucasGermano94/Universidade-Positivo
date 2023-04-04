// 5. Escreva um algoritmo que mostre todos os números pares existentes entre 1 e um número lido doteclado, bem como a quantidade de números apresentados.
#include <stdio.h>

int main() {
    
    int num, quant, i;
    
    quant = 0;
    
    printf("Informe o número desejado: " );
    scanf("%d", &num);
    
    for(i = 1; i <= num; i++){
        if(i % 2 == 0){
            printf("\n%d", i);
            quant++;
        }
    }
    printf("\nA quantidade de números pares será: %d", quant);

    return 0;
}