#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    printf("Digite o operador (+, -, * | x, / | :): ");
    scanf(" %c", &operador);

    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
		case 'x':
            resultado = num1 * num2;
            break;
        case '/':
		case ':':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: Divisão por zero não é permitida!\n");
                return 1;
            }
            break;
        default:
            printf("Operador inválido\n");
            return 1;
    }

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
