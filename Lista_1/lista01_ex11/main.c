#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias_sem_acidente, meses, anos;

    printf("Quantidade de dias sem acidente: ");
    scanf("%d", &dias_sem_acidente);

    anos = dias_sem_acidente/365;

    dias_sem_acidente = dias_sem_acidente - anos*365;

    meses = dias_sem_acidente/30;

    dias_sem_acidente -= meses*30;

    printf("%d anos, %d meses e %d dias sem acidente", anos, meses, dias_sem_acidente);

    return 0;
}
