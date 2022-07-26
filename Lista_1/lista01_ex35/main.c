#include <stdio.h>
#include <stdlib.h>

/*
35. Faça um algoritmo que calcule e mostre a área de um losango.
Sabe-se que: A = (diagonal_maior * diagonal_menor)/2;
*/

int main()
{
    float diagonal_1, diagonal_2, area;

    printf("Diagonal 1: ");
    scanf("%f", &diagonal_1);

    printf("Diagonal 2: ");
    scanf("%f", &diagonal_2);

    area = (diagonal_1*diagonal_2)/2;

    printf("Area do losango: %.2f unidade^2", area);

    return 0;
}
