#include <stdio.h>
#include <stdlib.h>

/*
37. Fa�a um algoritmo que calcule e mostre a tabuada de um n�mero digitado pelo usu�rio.
*/

int main()
{
    int numero_entrada, i;

    printf("Tabuada do numero: ");
    scanf("%d", &numero_entrada);

    for(i = 0; i < 11; i++){
        printf("%d * %d = %d\n", numero_entrada, i, numero_entrada*i);
    }

    return 0;
}
