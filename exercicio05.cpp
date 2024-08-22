#include <stdio.h>

int main() {
    int num1, num2;
    int soma_pares = 0, multiplicacao_impares = 1;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for(int i = num1; i <= num2; i++) {
        if(i % 2 == 0) {
            soma_pares += i;
        } else {
            multiplicacao_impares *= i;
        }
    }

    printf("A soma dos numero pares eh: %d\n", soma_pares);
    printf("A multiplicação dos números ímpares eh: %d\n", multiplicacao_impares);
    return 0;
}

