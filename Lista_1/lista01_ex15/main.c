#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p_1, p_2;
    float p_3, valor_da_conta;

    printf("Valor da conta: ");
    scanf("%f", &valor_da_conta);

    p_1 = valor_da_conta/3;
    p_2 = valor_da_conta/3;
    p_3 = valor_da_conta - p_1 - p_2;

    printf("%d, %d, %.2f", p_1, p_2, p_3);

    return 0;
}
