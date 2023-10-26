#include <stdio.h>
#include <math.h>

int main() {
    double xp, yp, xq, yq, distancia;

    printf("Digite as coordenadas de P (xp yp): ");
    scanf("%lf %lf", &xp, &yp);

    printf("Digite as coordenadas de Q (xq yq): ");
    scanf("%lf %lf", &xq, &yq);

    //Teorema de Pit�goras
    double difX = xq - xp;
    double difY = yq - yp;
    distancia = sqrt(difX * difX + difY * difY);

    printf("A dist�ncia entre P e Q � %.2lf unidades.\n", distancia);

    return 0;
}
