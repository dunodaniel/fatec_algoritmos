#include <stdio.h>

int main() {
    
    double disPerco, litrosConsu;
    
    printf("Digite a Dist�ncia Percorrida em Quilometros: ");
    scanf("%lf", &disPerco);
    
    printf("Digite o Total de Litros de Combust�vel Gastos: ");
    scanf("%lf", &litrosConsu);
    

    double mediaConsumo = disPerco / litrosConsu;
    
    printf("A Media de consumo do Veiculo �: %.2lf km/l\n", mediaConsumo);
    
    return 0;
}
