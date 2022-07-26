#include <stdio.h>
#include <stdlib.h>

/*
27. Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações.
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
