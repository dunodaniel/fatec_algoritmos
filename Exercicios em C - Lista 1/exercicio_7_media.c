#include <stdio.h>

int main() {
    // Declare as variáveis para armazenar os números
    double num1, num2;
    
    // Solicite ao usuário que insira os números
    printf("Digite o primeiro Numero: ");
    scanf("%lf", &num1);
    
    printf("Digite o segundo Numero: ");
    scanf("%lf", &num2);
    
    double media = (num1 + num2) / 2.0;
    
    printf("A media dos Numeros é: %.2lf\n", num1, num2, media);
    
    return 0;
}
