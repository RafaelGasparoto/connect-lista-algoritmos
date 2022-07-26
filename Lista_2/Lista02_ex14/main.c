#include <stdio.h>
#include <stdlib.h>

/*
Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados de 1990 em diante, a taxa incide sobre o
valor de tabela do carro. Elabore um algoritmo que leia o ano e o valor de tabela do carro, calcule e informe o
imposto a ser pago.
*/


int main()
{
    int ano;
    float valor;

    printf("Ano do carro: ");
    scanf("%d", &ano);
    printf("Valor de tabela: ");
    scanf("%f", &valor);

    if(ano < 1990)
        valor = valor*0.01;
    else
        valor = valor*0.015;

    printf("Imposto a ser pago: %.2f", valor);


    return 0;
}
