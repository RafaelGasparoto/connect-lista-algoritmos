#include <stdio.h>
#include <stdlib.h>
/*
30. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um algoritmo que receba
o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do
funcionário
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

    printf("Comissão ganha: R$ %.2f \nSalario final: R$ %.2f", comissao_de_vendas, salario_final);

    return 0;
}
