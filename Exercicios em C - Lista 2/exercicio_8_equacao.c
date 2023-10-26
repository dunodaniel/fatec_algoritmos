#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminante, x1, x2;

    printf("Informe os coeficientes da equa��o de segundo grau (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("As ra�zes reais da equa��o s�o: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    } else if (discriminante == 0) {
        x1 = -b / (2 * a);
        printf("A equa��o possui uma raiz real: x1 = %.2lf\n", x1);
    } else {
        printf("A equa��o n�o possui ra�zes reais.\n");
    }

    return 0;
}
