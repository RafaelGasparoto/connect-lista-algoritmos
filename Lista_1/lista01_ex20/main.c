#include <stdio.h>
#include <stdlib.h>

/*
20. Uma confec��o produz X blusas de l� e para isto gasta uma certa quantidade de novelos. Fa�a um algoritmo
para calcular quantos novelos de l� ela gasta por blusa.
*/

int main()
{
    int quantas_roupas, quantos_novelos;

    printf("Quantas roupas ira fazer: ");
    scanf("%d", &quantas_roupas);
    printf("Quantos novelos para uma roupa: ");
    scanf("%d", &quantos_novelos);

    printf("Sera necessario %d novelos para %d roupas", quantas_roupas*quantos_novelos, quantas_roupas);

    return 0;
}
