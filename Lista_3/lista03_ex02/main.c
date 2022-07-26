#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicio, fim, i, resultado = 0;

    printf("Valor inicial: ");
    scanf("%d", &inicio);
    printf("Valor final: ");
    scanf("%d", &fim);

    for(i = inicio; i <= fim; i++)
        resultado = resultado + i;


    printf("Somatorio entre os valores eh %d\n", resultado);

    return 0;
}
