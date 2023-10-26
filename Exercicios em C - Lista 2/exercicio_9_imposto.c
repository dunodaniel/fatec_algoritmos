#include <stdio.h>

int main() {
    double salario;
    double imposto = 0.0;

    printf("Informe o salário do funcionário: ");
    scanf("%lf", &salario);

    if (salario <= 1903.98) {
        imposto = 0.0;
    } else if (salario <= 2826.56) {
        imposto = salario * 0.075;
    } else if (salario <= 3751.05) {
        imposto = salario * 0.15;
    } else if (salario <= 4664.68) {
        imposto = salario * 0.225;
    } else {
        imposto = salario * 0.27;
    }

    printf("O valor do imposto de renda a ser pago é: R$%.2lf\n", imposto);

    return 0;
}
