#include <stdio.h>

int main() {
    int numeros[10];
    int menor, maior;

    for(int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if(i == 0) {
            menor = maior = numeros[i];
        } else {
            if(numeros[i] < menor) menor = numeros[i];
            if(numeros[i] > maior) maior = numeros[i];
        }
    }

    printf("O menor valor eh: %d\n", menor);
    printf("O maior valor eh: %d\n", maior);
    return 0;
}

