#include <stdio.h>

int main() {
    int numeroPlaca;
    char diaRodizio;

    printf("Digite o número da placa do veículo (apenas os números): ");
    scanf("%d", &numeroPlaca);

    if (numeroPlaca == 1 || numeroPlaca == 2) {
        diaRodizio = 'Segunda-feira';
    } else if (numeroPlaca == 3 || numeroPlaca == 4) {
        diaRodizio = 'Terça-feira';
    } else if (numeroPlaca == 5 || numeroPlaca == 6) {
        diaRodizio = 'Quarta-feira';
    } else if (numeroPlaca == 7 || numeroPlaca == 8) {
        diaRodizio = 'Quinta-feira';
    } else if (numeroPlaca == 9 || numeroPlaca == 0) {
        diaRodizio = 'Sexta-feira';
    } else {
        printf("Número de placa inválido\n");
        return 1;
    }

    printf("O veículo deve circular no rodízio na %s.\n", diaRodizio);

    return 0;
}
