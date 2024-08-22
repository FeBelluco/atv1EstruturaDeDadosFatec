#include <stdio.h>

int main() {
    float n1, n2, n3;
    float media_final;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media_final = (n1 * 2 + n2 * 3 + n3 * 5) / 10.0;

    printf("A media final ponderada eh: %.2f\n", media_final);
    return 0;
}

