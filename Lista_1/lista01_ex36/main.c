#include <stdio.h>
#include <stdlib.h>

/*
36. Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e
mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio.
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
