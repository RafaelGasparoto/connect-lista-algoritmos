#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
40. Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.
*/

int main()
{
    float cateto_1, cateto_2, hipotenusa;

    printf("Valor cateto 1: ");
    scanf("%f", &cateto_1);

    printf("Valor cateto 2: ");
    scanf("%f", &cateto_2);

    hipotenusa = sqrt(pow(cateto_1, 2) + pow(cateto_2, 2));

    printf("Valor da hipotenusa: %.2f", hipotenusa);

    return 0;
}
