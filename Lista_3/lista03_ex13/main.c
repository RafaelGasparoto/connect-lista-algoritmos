#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, soma = 0;

    do{
        printf("Valor: ");
        scanf("%d", &valor);

        if(valor > 0)
            soma += valor;
    }while(valor > 0);

    printf("Somatorio igual a %d", soma);

    return 0;
}
