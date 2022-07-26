#include <stdio.h>
#include <stdlib.h>

/*
26.Faça um algoritmo que receba três números,
calcule e mostre a multiplicação desses números
*/

int main()
{
    float valor_1, valor_2, valor_3, resultado;

    printf("valor_1: ");
    scanf("%f", &valor_1);

    printf("valor_2: ");
    scanf("%f", &valor_2);

    printf("valor_3: ");
    scanf("%f", &valor_3);

    resultado = valor_1*valor_2*valor_3;

    printf("Resultado multiplicacao %.2f * %.2f * %.2f = %.2f", valor_1, valor_2, valor_3, resultado);

    return 0;
}
