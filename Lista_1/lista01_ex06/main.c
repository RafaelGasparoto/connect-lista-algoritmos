#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quilo, valor_a_pagar;

    printf("Quantidade de kg o prato deu: ");
    scanf("%f", &quilo);

    valor_a_pagar = quilo * 12;

    printf("Valor a pagar: %.2f", valor_a_pagar);

    return 0;
}
