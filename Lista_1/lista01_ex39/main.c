#include <stdio.h>
#include <stdlib.h>

/*
39. Jo�o recebeu seu sal�rio de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que
est�o atrasadas. Como as contas est�o atrasadas, Jo�o ter� de pagar multa de 2% sobre cada conta. Fa�a
um algoritmo que calcule e mostre quanto restar� do sal�rio do Jo�o
*/

int main()
{
    float salario_final, C1 = 200, C2 = 120, salario = 1200;

    salario_final = salario - (C2+C2*0.02) - (C1+C1*0.02);

    printf("Restara R$ %.2f do salario", salario_final);

    return 0;
}
