#include <stdio.h>
#include <stdlib.h>

/*
34. Faça um algoritmo que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado;
*/

int main()
{
    float lado_1, lado_2, area;

    printf("Lado 1 do quadrado: ");
    scanf("%f", &lado_1);
    printf("Lado 2 do quadrado: ");
    scanf("%f", &lado_2);

    area = lado_1*lado_2;

    printf("Area do quadrado: %.2f unidade^2", area);

    return 0;
}
