#include <stdio.h>
#include <math.h>
 int main (void){
	char caracter;
 	
	printf("Digite um caractere: ");
	scanf(" %c", &caracter);

	int codigoASCII = (int)caracter;

	printf("O código ASCII de '%c' é: %d\n", caracter, codigoASCII);

	return 0;
}
