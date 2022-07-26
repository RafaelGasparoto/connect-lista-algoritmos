#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valor, qt_pares = 0;

    for(i = 0; i < 20; i++){
        printf("Valor: ");
        scanf("%d", &valor);

        if(valor%2 == 0)
            qt_pares++;
    }

    printf("%d numeros sao pares", qt_pares);

    return 0;
}
