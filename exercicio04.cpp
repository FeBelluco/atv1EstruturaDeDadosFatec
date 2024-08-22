#include <stdio.h>

int main() {
    int numero;
    int pares = 0, total = 0;

    while(1) {
        printf("Digite um numero (1000 para terminar): ");
        scanf("%d", &numero);

        if(numero == 1000) break;

        if(numero % 2 == 0) {
            pares++;
        }

        total++;
    }

    printf("Total de numero lidos: %d\n", total);
    printf("Total de numero pares: %d\n", pares);
    return 0;
}

