// Escreva um algoritmo que leia o valor de dois números inteiros e a operação aritmética desejada.Calcule então o resultado utilizando os símbolos da tabela a seguir como referência para o cálculo. Símbolo Operação aritmética+ Adição- Subtração* Multiplicação/ Divisão.

#include <stdio.h>

int main() {
    int num1, num2;
    char operacao;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    printf("Digite a operação aritmética desejada (+, -, * ou /): ");
    scanf(" %c", &operacao); // Note o espaço antes do %c para evitar o problema de buffer
    
    switch (operacao) {
        case '+':
            printf("O resultado da operação é: %d", num1 + num2);
            break;
        case '-':
            printf("O resultado da operação é: %d", num1 - num2);
            break;
        case '*':
            printf("O resultado da operação é: %d", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Não é possível dividir por zero.");
            } else {
                printf("O resultado da operação é: %d", num1 / num2);
            }
            break;
        default:
            printf("Operação inválida. Digite uma das seguintes operações: +, -, * ou /");
            break;
    }
    
    return 0;
}