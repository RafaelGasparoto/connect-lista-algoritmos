#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, maior_oito = 0, valor;

    for(i = 0; i < 20; i++){
        printf("Valor: ");
        scanf("%d", &valor);
        if(valor > 8)
            maior_oito++;
    }

    printf("%d valores sao maiores do que 8", maior_oito);

    return 0;
}
