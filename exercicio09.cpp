#include <stdio.h>

int main() {
    float celsius, kelvin, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;
    fahrenheit = celsius * 1.8 + 32;

    printf("%.2f °C eh igual a %.2f K\n", celsius, kelvin);
    printf("%.2f °C eh igual a %.2f °F\n", celsius, fahrenheit);

    return 0;
}

