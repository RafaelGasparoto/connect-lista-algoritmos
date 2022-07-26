#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor_camisa_p = 10, valor_camisa_m = 12, valor_camisa_g = 15;
    int quantidade_camisa_p, quantidade_camisa_m, quantidade_camisa_g, valor_arrecadado;

    printf("Quantidade de camisetas p vendidas: ");
    scanf("%d", &quantidade_camisa_p);
    printf("Quantidade de camisetas m vendidas: ");
    scanf("%d", &quantidade_camisa_m);
    printf("Quantidade de camisetas g vendidas: ");
    scanf("%d", &quantidade_camisa_g);

    valor_arrecadado = quantidade_camisa_p*valor_camisa_p + quantidade_camisa_m*valor_camisa_m
        + quantidade_camisa_g*valor_camisa_g;

    printf("Valor arrecadado: %d", valor_arrecadado);

    return 0;
}
