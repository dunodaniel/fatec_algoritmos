#include <stdio.h>


int main() {
    int faltas;
    float media;

    printf("Informe o número de faltas: ");
    scanf("%d", &faltas);

    printf("Informe a média do aluno: ");
    scanf("%f", &media);

    if (faltas <= 5 && media >= 6.0) {
		_textcolor(1);
        printf("O aluno está aprovado!\n");
    } else if (media == 5.0) {
		_textcolor(2);
		printf("O aluno está em recuperação.\n");
    } else {
		_textcolor(3);
        printf("O aluno está reprovado.\n");
    }
    return 0;
}
