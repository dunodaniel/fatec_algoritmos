#include <stdio.h>

int main(){
	int resultado1 = 7/2;
	double resultado2 = 7/2.0;

	size_t tamanho1 = sizeof(resultado1);
	size_t tamanho2 = sizeof(resultado2);

	printf("Tamanho de 7 / 2 (inteiro): %zu bytes\n", tamanho1);
	printf("Tamanho de 7 / 2.0 ?(double): %zu bytes\n", tamanho2);

	return 0;
}
