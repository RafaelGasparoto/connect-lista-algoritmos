#include <stdio.h>
#include <stdlib.h>
/*
31. Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a. o novo peso se a pessoa engordar 15% sobre o peso digitado;
b. o novo peso se a pessoa emagrecer 20% sobre o peso digitado.
*/
int main()
{
    float peso_da_pessoa, peso_emagrecer, peso_engordar;

    printf("Peso da pessoa em Kg: ");
    scanf("%f", &peso_da_pessoa);

    peso_engordar = peso_da_pessoa + peso_da_pessoa*0.15;
    peso_emagrecer = peso_da_pessoa - peso_da_pessoa*0.20;

    printf("Se a pessoa engordar 15%% ela tera: %.2f Kg\n", peso_engordar);
    printf("Se a pessoa emagrecer 20%% ela tera: %.2f Kg", peso_emagrecer);

    return 0;
}
