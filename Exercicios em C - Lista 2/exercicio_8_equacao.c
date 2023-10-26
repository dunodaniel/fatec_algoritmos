#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminante, x1, x2;

    printf("Informe os coeficientes da equação de segundo grau (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("As raízes reais da equação são: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    } else if (discriminante == 0) {
        x1 = -b / (2 * a);
        printf("A equação possui uma raiz real: x1 = %.2lf\n", x1);
    } else {
        printf("A equação não possui raízes reais.\n");
    }

    return 0;
}
