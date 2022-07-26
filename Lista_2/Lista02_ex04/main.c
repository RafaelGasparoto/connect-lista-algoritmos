#include <stdio.h>
#include <stdlib.h>
/*
Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado.
*/
int main()
{
    int A;

    printf("Insira um valor: ");
    scanf("%d", &A);

    if(A > 0)
        printf("%d", A*2);
    else
        printf("%d", A*3);

    return 0;
}
