#include <stdio.h>

int main(void) {

	float n1,n2;
	printf("Digite dois números distintos:");
	scanf("%f %f",&n1,&n2);

	if(n1>n2) printf("%f %s %f\n", n1," é maior que ", n2);
	else printf("%f %s %f\n", n2," é maior que ", n1);
	return 0;

}
