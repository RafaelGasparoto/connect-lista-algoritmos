#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hr_trabalhada, hr_extras, salario_liquido, salario_bruto;

    printf("Hrs trabalhadas: ");
    scanf("%f", &hr_trabalhada);
    printf("Hrs extras: ");
    scanf("%f", &hr_extras);

    salario_bruto = hr_trabalhada*10 + hr_extras*15;
    salario_liquido = salario_bruto-salario_bruto*0.1;

    printf("\nSalario liquido %.2f \nSalario bruto %.2f", salario_liquido, salario_bruto);

    return 0;
}
