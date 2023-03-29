//Escreva um algoritmo que, dada a idade de uma pessoa, determine sua classificação como menor deidade (menos de 18 anos), maior de idade ou terceira idade (idade igual ou superior a 65 anos).

#include <stdio.h>

int main() {

    int idade;
    printf("Informe a idade: ");
    scanf("%d", &idade);
    
    if(idade < 18){
        printf("Menor de idade.");
        
    } else if (idade >= 18 && idade < 65){
        printf("Maior de idade.");
    }
    else{
        printf("Terceira idade.");
    }
    return 0;
}