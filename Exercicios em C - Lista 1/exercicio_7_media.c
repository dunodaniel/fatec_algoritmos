#include <stdio.h>

int main() {
    // Declare as vari�veis para armazenar os n�meros
    double num1, num2;
    
    // Solicite ao usu�rio que insira os n�meros
    printf("Digite o primeiro Numero: ");
    scanf("%lf", &num1);
    
    printf("Digite o segundo Numero: ");
    scanf("%lf", &num2);
    
    double media = (num1 + num2) / 2.0;
    
    printf("A media dos Numeros �: %.2lf\n", num1, num2, media);
    
    return 0;
}
