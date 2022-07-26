#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valor, entre_0_100 = 0, entre_101_200 = 0, maior_200 = 0;

    for(i = 0; i < 5; i++){
        printf("Valor: ");
        scanf("%d", &valor);

        if(valor >= 0 && valor <= 100)
            entre_0_100++;
        else if(valor >= 101 && valor <= 200)
            entre_101_200++;
        else
            maior_200++;
    }

    printf("%d numeros sao entre 0 e 100\n", entre_0_100);

    printf("%d numeros sao entre 101 e 200\n", entre_101_200);

    printf("%d numeros sao maiores que 200\n", maior_200);

    return 0;
}
