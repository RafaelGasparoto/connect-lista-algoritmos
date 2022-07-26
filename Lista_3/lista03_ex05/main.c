#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, i,resultado = 0;

    for(i = 0; i < 10; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &valor);
        resultado = resultado + valor;
    }
    printf("A soma dos valores eh: %d", resultado);
    return 0;
}
