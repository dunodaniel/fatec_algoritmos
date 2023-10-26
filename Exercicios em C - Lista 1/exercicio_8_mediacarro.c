#include <stdio.h>

int main() {
    
    double disPerco, litrosConsu;
    
    printf("Digite a Distância Percorrida em Quilometros: ");
    scanf("%lf", &disPerco);
    
    printf("Digite o Total de Litros de Combustível Gastos: ");
    scanf("%lf", &litrosConsu);
    

    double mediaConsumo = disPerco / litrosConsu;
    
    printf("A Media de consumo do Veiculo é: %.2lf km/l\n", mediaConsumo);
    
    return 0;
}
