//Escreva um algoritmo que calcule e mostre na tela uma tabela de valores de temperatura em Celsius eFarenheit. A faixa de temperaturas que deve ser mostrada é de 0 a 100 graus Celsius, em intervalos de5 graus.

#include <stdio.h>

int main() {
    float celsius, farenheit;
    int i;

    printf("Tabela de conversao Celsius-Farenheit\n");
    printf("-------------------------------------\n");

    for (i = 0; i <= 100; i += 5) {
        celsius = i;
        farenheit = (celsius * 9 / 5) + 32;
        printf("%3.0f graus Celsius = %3.1f graus Farenheit\n", celsius, farenheit);
    }

    return 0;
}