#include <stdio.h>
#include <stdlib.h>
/*
2. Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou �mpar.

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
