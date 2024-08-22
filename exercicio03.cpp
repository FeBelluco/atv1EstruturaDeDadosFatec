#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);

    for(int i = 1, count = 0; count < N; i += 2) {
        printf("%d\n", i);
        count++;
    }

    return 0;
}

