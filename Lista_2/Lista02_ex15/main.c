#include <stdio.h>
#include <stdlib.h>

/*
Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios,
vari�vel de acordo com o cargo, conforme a tabela abaixo.
Fa�a um algoritmo que leia o sal�rio e o cargo de um funcion�rio e
calcule o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela,
ele dever�, ent�o, receber 40% de aumento. Mostre o
sal�rio antigo, o novo sal�rio e a diferen�a.
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
