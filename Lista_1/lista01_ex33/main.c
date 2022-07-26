#include <stdio.h>
#include <stdlib.h>
/*
33. Faça um algoritmo que calcule e mostre a área de um trapézio.
Sabe-se que: A = (base maior + base menor)* altura)/2 ;
*/
int main()
{
    float base_maior, base_menor, altura, area;

    printf("Base maior do trapezio: ");
    scanf("%f", &base_maior);

    printf("Base menor do trapezio: ");
    scanf("%f", &base_menor);

    printf("Altura do trapezio: ");
    scanf("%f", &altura);

    area = ((base_maior + base_menor)*altura)/2;

    printf("Area do trapezio: %.2f unidade^2", area);

    return 0;
}
