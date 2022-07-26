#include <stdio.h>
#include <stdlib.h>

/*
32. Faça um algoritmo que receba o peso de
 uma pessoa em quilos, calcule e mostre esse peso em gramas.
*/

int main()
{
    float peso_em_kg;
    int peso_em_g;

    printf("Peso da pessoa em Kg: ");
    scanf("%f", &peso_em_kg);

    peso_em_g = peso_em_kg*1000;

    printf("Peso da pessoa em g: %d", peso_em_g);

    return 0;
}
