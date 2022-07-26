#include <stdio.h>
#include <stdlib.h>

/*
Uma empresa concederá um aumento de salário aos seus funcionários,
variável de acordo com o cargo, conforme a tabela abaixo.
Faça um algoritmo que leia o salário e o cargo de um funcionário e
calcule o novo salário. Se o cargo do funcionário não estiver na tabela,
ele deverá, então, receber 40% de aumento. Mostre o
salário antigo, o novo salário e a diferença.
*/

int main()
{
    float salario, aumento, salario_final;
    int cargo;


    printf("Salario: ");
    scanf("%f", &salario);

    printf("Cargo: ");
    scanf("%d", &cargo);

    switch(cargo){
        case 101 :
            salario_final = salario * 0.10 + salario;
            aumento = salario_final - salario;
            break;

        case 102 :
            salario_final = salario * 0.20 + salario;
            aumento = salario_final - salario;
            break;

        case 103 :
            salario_final = salario * 0.30 + salario;
            aumento = salario_final - salario;
            break;

        default :
            salario_final = salario * 0.40 + salario;
            aumento = salario_final - salario;
            break;
    }

    printf("Salario antigo: %.2f \nNovo salario: %.2f \nValor de aumento: %.2f", salario, salario_final, aumento);
    return 0;
}
