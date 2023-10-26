#include <stdio.h>

int main() {
    int numeroPlaca;
    char diaRodizio;

    printf("Digite o n�mero da placa do ve�culo (apenas os n�meros): ");
    scanf("%d", &numeroPlaca);

    if (numeroPlaca == 1 || numeroPlaca == 2) {
        diaRodizio = 'Segunda-feira';
    } else if (numeroPlaca == 3 || numeroPlaca == 4) {
        diaRodizio = 'Ter�a-feira';
    } else if (numeroPlaca == 5 || numeroPlaca == 6) {
        diaRodizio = 'Quarta-feira';
    } else if (numeroPlaca == 7 || numeroPlaca == 8) {
        diaRodizio = 'Quinta-feira';
    } else if (numeroPlaca == 9 || numeroPlaca == 0) {
        diaRodizio = 'Sexta-feira';
    } else {
        printf("N�mero de placa inv�lido\n");
        return 1;
    }

    printf("O ve�culo deve circular no rod�zio na %s.\n", diaRodizio);

    return 0;
}
