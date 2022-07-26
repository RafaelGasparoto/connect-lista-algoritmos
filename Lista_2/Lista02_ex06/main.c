#include <stdio.h>
#include <stdlib.h>

/*
6. Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente.
*/

int main()
{
    int A, B, C;

    printf("Valor A: ");
    scanf("%d", &A);
    printf("Valor B: ");
    scanf("%d", &B);
    printf("Valor C: ");
    scanf("%d", &C);

    if(A > B && A > C && B > C)
        printf("%d %d %d", A, B, C);
    else if(A > B && A > C && C > B)
        printf("%d %d %d", A, C, B);
    else if(B > A && B > C && A > C)
        printf("%d %d %d", B, A, C);
    else if(B > A && B > C && C > A)
        printf("%d %d %d", B, C, A);
    else if(C > A && C > B && A > B)
        printf("%d %d %d", C, A, B);
    else
        printf("%d %d %d", C, B, A);


    return 0;
}
