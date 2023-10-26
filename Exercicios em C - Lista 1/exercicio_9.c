#include <stdio.h>

int main() {
    double fahrenheit, celsius;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("%.2lf graus Fahrenheit equivalem a %.2lf graus Celsius.\n", fahrenheit, celsius);

    return 0;
}
