#include <stdio.h>

int main() {
    int valores[10];
    int soma = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    printf("A soma dos valores digitados eh: %d\n", soma);
    return 0;
}

