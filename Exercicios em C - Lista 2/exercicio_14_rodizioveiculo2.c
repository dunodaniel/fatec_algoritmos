#include <stdio.h>

int main() {
    int numeroPlaca;
    char diaRodizio;

    printf("Digite o número da placa do veículo (apenas os números): ");
    scanf("%d", &numeroPlaca);

    switch (numeroPlaca) {
        case 1:
        case 2:
            diaRodizio = 'Segunda-feira';
            break;
        case 3:
        case 4:
            diaRodizio = 'Terça-feira';
            break;
        case 5:
        case 6:
            diaRodizio = 'Quarta-feira';
            break;
        case 7:
        case 8:
            diaRodizio = 'Quinta-feira';
            break;
        case 9:
        case 0:
            diaRodizio = 'Sexta-feira';
            break;
        default:
            printf("Número de placa inválido\n");
            return 1;
    }

    printf("O veículo deve circular no rodízio na %s.\n", diaRodizio);

    return 0;
}
