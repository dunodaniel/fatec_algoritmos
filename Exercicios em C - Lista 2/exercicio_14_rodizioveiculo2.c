#include <stdio.h>

int main() {
    int numeroPlaca;
    char diaRodizio;

    printf("Digite o n�mero da placa do ve�culo (apenas os n�meros): ");
    scanf("%d", &numeroPlaca);

    switch (numeroPlaca) {
        case 1:
        case 2:
            diaRodizio = 'Segunda-feira';
            break;
        case 3:
        case 4:
            diaRodizio = 'Ter�a-feira';
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
            printf("N�mero de placa inv�lido\n");
            return 1;
    }

    printf("O ve�culo deve circular no rod�zio na %s.\n", diaRodizio);

    return 0;
}
