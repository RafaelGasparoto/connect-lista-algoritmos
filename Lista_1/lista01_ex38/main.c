#include <stdio.h>
#include <stdlib.h>
/*
38. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a. a idade dessa pessoa em anos;
b. a idade dessa pessoa em meses;
c. a idade dessa pessoa em dias
d. a idade dessa pessoa em semanas
*/
int main()
{
    int anos, meses, dias, semanas, ano_de_nascimento, ano_atual;

    printf("Ano de nascimento: ");
    scanf("%d", &ano_de_nascimento);

    printf("Ano atual: ");
    scanf("%d", &ano_atual);

    anos = ano_atual- ano_de_nascimento;
    meses = anos*12;
    dias = anos*365;
    semanas = anos*52;

    printf("Idade em anos: %d\n", anos);
    printf("Idade em meses: %d\n", meses);
    printf("Idade em dias: %d\n", dias);
    printf("Idade em semanas: %d\n", semanas);

    return 0;
}
