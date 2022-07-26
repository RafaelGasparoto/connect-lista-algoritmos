#include <stdio.h>
#include <stdlib.h>
/*
1. Faça um algoritmo que leia dois valores A e B e imprima o maior deles.
*/
int main()
{
    int A, B;

    printf("Valor A: ");
    scanf("%d", &A);
    printf("Valor B: ");
    scanf("%d", &B);

    if(A > B)
        printf("%d", A);
    else
        printf("%d", B);

    return 0;
}
