#include <stdio.h>

int main() {
    char dataNascimento[11];
    int perfil = 0;
    
    printf("Digite a data de nascimento (TUDO JUNTO e SEM TRACO): ");
    scanf("%s", dataNascimento);

    int dia, mes, ano;
    sscanf(dataNascimento, "%d/%d/%d", &dia, &mes, &ano);

    int passo1 = dia * 100 + mes + ano;
    int passo2 = passo1 / 100 + passo1 % 100;
    int passo3 = passo2 / 1000 + passo2 % 1000;

    int ultimoDigito = passo3 % 10;

    switch (ultimoDigito) {
        case 0:
            perfil = 0;
            break;
        case 1:
            perfil = 1;
            break;
        case 2:
            perfil = 2;
            break;
        case 3:
            perfil = 3;
            break;
        case 4:
            perfil = 4;
            break;
        default:
            printf("Perfil indefinido\n");
            return 1;
    }

    switch (perfil) {
        case 0:
            printf("Perfil: Tímido\n");
            break;
        case 1:
            printf("Perfil: Sonhador\n");
            break;
        case 2:
            printf("Perfil: Paquerador\n");
            break;
        case 3:
            printf("Perfil: Atraente\n");
            break;
        case 4:
            printf("Perfil: Irresistível\n");
            break;
    }

    return 0;
}
