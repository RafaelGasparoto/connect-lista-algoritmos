#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_total, valor_para_guardar ,custo_paozinho = 0.12, custo_broa = 1.50;
    int quantidade_de_paozinhos, quantidade_de_broas;

    printf("Quantidade de paozinhos vendidos: ");
    scanf("%d", &quantidade_de_paozinhos);
    printf("Quantidade de broas vendidas: ");
    scanf("%d", &quantidade_de_broas);

    valor_total = (quantidade_de_broas*custo_broa) + (quantidade_de_paozinhos*custo_paozinho);

    valor_para_guardar = valor_total/10;

    printf("O caixa arrecadou: %.2f\n", valor_total);
    printf("Valor para depositar: %.2f", valor_para_guardar);

    return 0;
}
