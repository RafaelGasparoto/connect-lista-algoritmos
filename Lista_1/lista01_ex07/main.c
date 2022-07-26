#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, dias_ocorridos;

    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);

    dias_ocorridos = 30 * (mes-1) + dia;

    printf("Se passaram %d dias desde o inicio do ano", dias_ocorridos);

    return 0;
}
