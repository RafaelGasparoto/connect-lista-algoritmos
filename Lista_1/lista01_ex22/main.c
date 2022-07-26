#include <stdio.h>
#include <stdlib.h>

/*
22. Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um
algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais.
Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de
um tipo, a quantidade respectiva é zero.
*/


int main()
{
    int moeda_1, moeda_5, moeda_10, moeda_25, moeda_50, moeda_1_real;
    float valor_total;

    printf("Moedas de 1 centavo: ");
    scanf("%d", &moeda_1);
    printf("Moedas de 5 centavos: ");
    scanf("%d", &moeda_5);
    printf("Moedas de 10 centavos: ");
    scanf("%d", &moeda_10);
    printf("Moedas de 25 centavos: ");
    scanf("%d", &moeda_25);
    printf("Moedas de 50 centavos: ");
    scanf("%d", &moeda_50);
    printf("Moedas de 1 real: ");
    scanf("%d", &moeda_1_real);

    valor_total = moeda_1*0.01 + moeda_5*0.05 + moeda_10*0.10 + moeda_25*0.25 + moeda_50*0.50 + moeda_1_real*1.0;

    printf("Valor total economizado: R$ %.2f", valor_total);

    return 0;
}
