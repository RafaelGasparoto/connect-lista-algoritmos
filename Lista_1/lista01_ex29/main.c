#include <stdio.h>
#include <stdlib.h>

/*
29. Fa�a um algoritmo que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se que este
sofreu um desconto de 10%.
*/

int main()
{
    float preco_produto, preco_final;

    printf("Preco do produto: R$ ");
    scanf("%f", &preco_produto);

    preco_final = preco_produto - preco_produto*0.1;

    printf("Preco com 10%% de desconto: R$ %.2f", preco_final);

    return 0;
}
