#include <stdio.h>
#include <stdlib.h>
/*
. Fa�a um algoritmo que leia dois valores inteiros A e B se os valores forem iguais dever� se somar os dois,
caso contr�rio multiplique A por B. Ao final, apresente o resultado.
*/
int main()
{
    int A, B;

    printf("Valor A: ");
    scanf("%d", &A);
    printf("Valor B: ");
    scanf("%d", &B);

    if(A == B)
        printf("%d", A + B);
    else
        printf("%d", A*B);

    return 0;
}
