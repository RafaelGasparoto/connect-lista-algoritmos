#include <stdio.h>
#include <stdlib.h>

/*
39. João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que
estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça
um algoritmo que calcule e mostre quanto restará do salário do João
*/

int main()
{
    float salario_final, C1 = 200, C2 = 120, salario = 1200;

    salario_final = salario - (C2+C2*0.02) - (C1+C1*0.02);

    printf("Restara R$ %.2f do salario", salario_final);

    return 0;
}
