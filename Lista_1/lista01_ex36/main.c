#include <stdio.h>
#include <stdlib.h>

/*
36. Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e
mostre a quantidade de salários mínimos que ganha esse funcionário.
*/

int main()
{
    float salario_minimo, salario_funcionario, quant_de_sal_min;

    printf("Salario minimo: R$ ");
    scanf("%f", &salario_minimo);

    printf("Salario do funcionario: R$ ");
    scanf("%f", &salario_funcionario);

    quant_de_sal_min = salario_funcionario/salario_minimo;

    printf("O funcionario recebe %.2f salarios minimos", quant_de_sal_min);

    return 0;
}
