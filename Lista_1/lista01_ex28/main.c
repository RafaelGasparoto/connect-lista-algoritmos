#include <stdio.h>
#include <stdlib.h>

/*
28. Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
peso 2 para a primeira nota e peso 3 para a segunda nota.
*/

int main()
{
    float nota_1, nota_2, media_ponderada;

    printf("Nota 1: ");
    scanf("%f", &nota_1);

    printf("Nota 2: ");
    scanf("%f", &nota_2);

    media_ponderada = (nota_1*2 + nota_2*3)/5;

    printf("Media ponderada = %.2f", media_ponderada);

    return 0;
}

