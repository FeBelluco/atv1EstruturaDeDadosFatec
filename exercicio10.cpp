#include <stdio.h>

int main() {
    float reais, cotacao_dollar, cotacao_euro;
    float valor_dollar, valor_euro;

    printf("Digite o valor em reais: R$ ");
    scanf("%f", &reais);
    printf("Digite a cotacao do Dollar: R$ ");
    scanf("%f", &cotacao_dollar);
    printf("Digite a cotacao do Euro: R$ ");
    scanf("%f", &cotacao_euro);

    valor_dollar = reais / cotacao_dollar;
    valor_euro = reais / cotacao_euro;

    printf("Valor em Dollar: $ %.2f\n", valor_dollar);
    printf("Valor em Euro: € %.2f\n", valor_euro);

    return 0;
}

