#include <stdio.h>

int main() {
    float custo_fabrica, percentual_impostos, percentual_distribuidor;
    float valor_total, valor_impostos, valor_distribuidor;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custo_fabrica);
    printf("Digite a porcentagem de impostos: ");
    scanf("%f", &percentual_impostos);
    printf("Digite a porcentagem do distribuidor: ");
    scanf("%f", &percentual_distribuidor);

    valor_impostos = (percentual_impostos / 100) * custo_fabrica;
    valor_distribuidor = (percentual_distribuidor / 100) * custo_fabrica;
    valor_total = custo_fabrica + valor_impostos + valor_distribuidor;

    printf("Valor total do carro: R$ %.2f\n", valor_total);
    printf("Valor do distribuidor: R$ %.2f (%.2f%%)\n", valor_distribuidor, percentual_distribuidor);
    printf("Valor dos impostos: R$ %.2f (%.2f%%)\n", valor_impostos, percentual_impostos);

    return 0;
}

