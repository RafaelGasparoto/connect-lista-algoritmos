#include <stdio.h>
#include <stdlib.h>

int main()
{
    float litros, valor_do_pagamento, preco_gasolina;

    printf("Preco do L de gasolina: ");
    scanf("%f", &preco_gasolina);
    printf("Quantos reais de gasolina: ");
    scanf("%f", &valor_do_pagamento);

    litros = valor_do_pagamento/preco_gasolina;

    printf("Foi colocado %.3f litros de gasolina", litros);


    return 0;
}
