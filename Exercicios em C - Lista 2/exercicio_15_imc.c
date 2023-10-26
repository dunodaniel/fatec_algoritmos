#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Solicite o peso e a altura da pessoa
    printf("Digite o peso (em quilogramas): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // Calcule o IMC
    imc = peso / (altura * altura);

    // Determine a situação da pessoa com base no IMC
    if (imc < 18.5) {
        printf("Situação: Magra\n");
    } else if (imc >= 18.5 && imc <= 30) {
        printf("Situação: Normal\n");
    } else {
        printf("Situação: Obesa\n");
    }

    return 0;
}
