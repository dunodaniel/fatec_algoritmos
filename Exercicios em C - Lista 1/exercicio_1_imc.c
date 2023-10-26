/* OBESO.C - determina se uma pessoa está obesa */

#include <stdio.h> // entrada e saida de padrão
#include <math.h> // funções matematicas 

int main (void) {
	float peso,altura,imc;
	printf("Qual o peso e a altura? ");
	scanf("%f %f", &peso, &altura);
	imc = peso/pow(altura,2);
	printf("IMC = %.lf\n",imc);
	if( imc<=30 ) printf("Não está obesa!\n");
	else printf("Esta obesa!\n");
	return 0;
}
