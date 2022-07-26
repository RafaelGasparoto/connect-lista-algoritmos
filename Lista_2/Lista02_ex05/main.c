#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar, imprimir o resultado desta operação.
*/

int main()
{
    int A;

    printf("Valor de A: ");
    scanf("%d", &A);

    if(A % 2 == 0)
        printf("%d", A+5);
    else
        printf("%d", A+8);

    return 0;
}
