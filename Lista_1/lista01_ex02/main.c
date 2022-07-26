#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade_de_ferraduras, quantidade_de_cavalos;

    printf("Quantos cavalos serao comprados: ");
    scanf("%d", &quantidade_de_cavalos);

    quantidade_de_ferraduras = quantidade_de_cavalos * 4;

    printf("Serao necessarios %d ferraduras", quantidade_de_ferraduras);

    return 0;
}
