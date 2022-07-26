#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade_de_sanduiches;
    float kg_queijo, kg_presunto, kg_carne;

    printf("Quantidade_de_sanduiches: ");
    scanf("%d", &quantidade_de_sanduiches);

    kg_queijo = quantidade_de_sanduiches*2*0.05;
    kg_presunto = quantidade_de_sanduiches*1*0.05;
    kg_carne = quantidade_de_sanduiches*1*0.1;

    printf("Deve ser comprado %.2f kg de queijo, %.2f kg de presunto e %.2f kg de carne", kg_queijo, kg_presunto, kg_carne);


    return 0;
}
