#include <stdio.h>

int main() {
    int faltas;
    float media;

    printf("Informe o n�mero de faltas: ");
    scanf("%d", &faltas);

    printf("Informe a m�dia do aluno: ");
    scanf("%f", &media);

    if (faltas <= 5 && media >= 6.0) {
        printf("O aluno est� aprovado!\n");
    } else {
        printf("O aluno est� reprovado.\n");
    }

    return 0;
}
