#include <stdio.h>
#include <stdlib.h>

/*
27. Fa�a um algoritmo que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo segundo.
Sabe-se que o segundo n�mero n�o pode ser zero, portanto n�o � necess�rio se preocupar com valida��es.
*/

int main()
{
    float valor_1, valor_2;

    printf("Valor 1: ");
    scanf("%f", &valor_1);

    printf("Valor 2: ");
    scanf("%f", &valor_2);

    printf("Resultado da divisao %.2f / %.2f = %.2f", valor_1, valor_2, valor_1/valor_2);

    return 0;
}
