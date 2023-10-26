#include <stdio.h> 

int main(void){
	int numeroDecimal;
	printf("Digite um númro inteiro em base 10:");
	scanf("%d", &numeroDecimal);

	printf("O número %d em base 16 (hexadecimal) é: Ox%X\n", numeroDecimal, numeroDecimal);

	return 0;
}




