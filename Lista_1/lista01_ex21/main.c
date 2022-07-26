#include <stdio.h>
#include <stdlib.h>

/*
21. A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e
garrafa de 2 litros. Se um comerciante compra uma determinada quantidade de cada formato, faça um algoritmo para calcular quantos litros de refrigerante ele comprou.
*/

int main()
{
    int quantidade_lata, quantidade_garrafa_600, quantidade_garrafa_2000;
    float quantidade_de_litros;

    printf("Quantidade de latas 350ml: ");
    scanf("%d", &quantidade_lata);
    printf("Quantidade de garrafas de 600ml: ");
    scanf("%d", &quantidade_garrafa_600);
    printf("Quantidade de garrafas de 2L: ");
    scanf("%d", &quantidade_garrafa_2000);

    quantidade_de_litros = quantidade_lata*0.350 + quantidade_garrafa_600*0.600 + quantidade_garrafa_2000*2;

    printf("Foram comprados %.2f L de refrigerante", quantidade_de_litros);


    return 0;
}
