#include <stdio.h>
#include <stdlib.h>

/*
24. Um tonel de refresco é feito com 8 partes de água
mineral e 2 partes de suco de maracujá. Faça um algoritmo para calcular quantos litros de água e de
suco são necessários para se fazer X litros de refresco (informados pelo usuário).
*/

int main()
{
    float litros_tonel, litros_agua, litros_suco, litros_refresco;

    printf("Quantos L tem um tonel: ");
    scanf("%f", &litros_tonel);
    printf("Quantos L de refresco: ");
    scanf("%f", &litros_refresco);

    litros_agua = litros_tonel*litros_refresco*0.8;
    litros_suco = litros_tonel*litros_refresco*0.2;

    printf("Sera necessario %.2f L de agua e %.2f L de suco", litros_agua, litros_suco);

    return 0;
}
