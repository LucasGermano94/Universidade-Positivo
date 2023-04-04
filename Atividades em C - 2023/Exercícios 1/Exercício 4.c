//Tendo como dados de entrada a altura e o gênero de uma pessoa, construa um algoritmo que calculeo seu peso ideal, de acordo com as seguintes fórmulas:Para homens: 72.7 x altura - 58Para mulheres: 62.1 x altura - 44.7

#include <stdio.h>

int main() {
    
    float altura, peso_ideal;
    char genero;
    
    printf("Informe altura: ");
    scanf("%f", &altura);
    
    printf("Informe o gênero (M/F): ");
    scanf(" %c", &genero);
    
    if(genero == 'M'){
        peso_ideal = 72.7 * altura - 58;
    }
        else{
            peso_ideal = 62.1 * altura - 44.7;
        }
        
        printf("Peso ideal: %f ", &peso_ideal);

    return 0;
}