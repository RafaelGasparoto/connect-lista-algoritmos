#include <stdio.h>
#include <stdlib.h>
/*
2. Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar.

*/
int main()
{
    int A;

    printf("Valor: ");
    scanf("%d", &A);

    if(A % 2 == 0)
        printf("Par");
    else
        printf("Impar");

    return 0;
}
