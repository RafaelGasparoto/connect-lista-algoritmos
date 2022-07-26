#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_inicial, salario_com_aumento, salario_final;

    printf("Salario do funcionario: ");
    scanf("%f", &salario_inicial);

    salario_com_aumento = salario_inicial*0.15 + salario_inicial;

    salario_final = salario_com_aumento - salario_com_aumento*0.08;

    printf("Salario inicial: %.2f\n", salario_inicial);
    printf("Salario com aumento: %.2f\n", salario_com_aumento);
    printf("Salario final: %.2f", salario_final);

    return 0;
}
