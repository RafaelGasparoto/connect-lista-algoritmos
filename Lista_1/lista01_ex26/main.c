#include <stdio.h>
#include <stdlib.h>

/*
26.Fa�a um algoritmo que receba tr�s n�meros,
calcule e mostre a multiplica��o desses n�meros
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
