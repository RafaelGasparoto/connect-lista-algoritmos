#include <stdio.h>
#include <stdlib.h>
/*
30. Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um algoritmo que receba
o sal�rio fixo de um funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e o sal�rio final do
funcion�rio
*/

int main()
{
    float salario_fixo, salario_final, comissao_de_vendas, valor_de_vendas;

    printf("Salario fixo do funcionario: R$ ");
    scanf("%f", &salario_fixo);

    printf("Valor de vendas do funcionario: R$ ");
    scanf("%f", &valor_de_vendas);

    comissao_de_vendas = valor_de_vendas*0.04;

    salario_final = salario_fixo + comissao_de_vendas;

    printf("Comiss�o ganha: R$ %.2f \nSalario final: R$ %.2f", comissao_de_vendas, salario_final);

    return 0;
}
