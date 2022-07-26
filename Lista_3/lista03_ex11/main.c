#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valor, entre_0_100 = 0;

    for(i = 0; i < 20; i++){
        printf("Valor: ");
        scanf("%d", &valor);

        if(valor >= 0 && valor <= 100)
            entre_0_100++;
    }

    printf("%d numeros sao entre 0 e 100", entre_0_100);

    return 0;
}
