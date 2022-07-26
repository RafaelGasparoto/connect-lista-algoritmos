#include <stdio.h>
#include <stdlib.h>

/*
Elabore um algoritmo que leia dois números inteiros e mostre o resultado da diferença do maior valor pelo
menor;
*/

int main()
{
    int A, B;

    printf("Valor A: ");
    scanf("%d", &A);
    printf("Valor B: ");
    scanf("%d", &B);

    if(A > B)
        printf("%d / %d = %d", A, B, A/B);
    else if(A < B)
        printf("%d / %d = %d", B, A, B/A);
    else
        printf("Valores iguais, divisao = 1");

    return 0;
}
