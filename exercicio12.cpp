#include <stdio.h>

int main() {
    int num1, num2;
    int soma, produto, quadrado_num1, soma_cubos;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    produto = num1 * (num2 * num2);
    quadrado_num1 = num1 * num1;
    soma_cubos = (num1 * num1 * num1) + (num2 * num2 * num2);

    printf("a) A soma dos numeros eh: %d\n", soma);
    printf("b) O produto do primeiro numero pelo quadrado do segundo eh: %d\n", produto);
    printf("c) O quadrado do primeiro numero eh: %d\n", quadrado_num1);
    printf("d) A soma dos cubos dos numero eh: %d\n", soma_cubos);

    return 0;
}

