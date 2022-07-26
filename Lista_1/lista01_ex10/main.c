#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x_1, y_1, x_2, y_2;
    double distancia;

    printf("Ponto x_1 no plano: ");
    scanf("%lf", &x_1);
    printf("Ponto y_1 no plano: ");
    scanf("%lf", &y_1);
    printf("Ponto x_1 no plano: ");
    scanf("%lf", &x_2);
    printf("Ponto y_2 no plano: ");
    scanf("%lf", &y_2);

    distancia = sqrt(pow((x_2-x_1),2) + pow((y_2-y_1),2));

    printf("Distancia entre os 2 pontos: %f", distancia);

    return 0;
}
