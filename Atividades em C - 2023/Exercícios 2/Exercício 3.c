// 3. Escreva um algoritmo que mostre os números múltiplos de 5, no intervalo de 1 até 100.
#include <stdio.h>

int main() {
    
    for(int i = 1; i <= 100; i++){
        if(i % 5 == 0){
            printf("\n%d", i);
        }
     
    }


    return 0;
}