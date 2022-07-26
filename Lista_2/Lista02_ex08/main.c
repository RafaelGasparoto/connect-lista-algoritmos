#include <stdio.h>
#include <stdlib.h>

/*
Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o pre�o normal de etiqueta e a escolha
da condi��o de pagamento. Utilize os c�digos da tabela a seguir para ler qual a condi��o
de pagamento escolhida e efetuar o c�lculo adequado.

C�digo Condi��o de pagamento
a) � vista em dinheiro ou cheque, recebe 10% de desconto
b) � vista no cart�o de cr�dito, recebe 15% de desconto
c) Em duas vezes, pre�o normal de etiqueta sem juros
d) Em duas vezes, pre�o normal de etiqueta mais juros de 10%
*/

int main()
{
    float valor_de_pagamento, preco_etiqueta;
    char forma_de_pagamento;


    printf("Preco na etiqueta: ");
    scanf("%f", &preco_etiqueta);

    printf("Forma de pagamento a vista dinheiro ou cheque(a)\na vista cartao de credito(b)\nem duas vezes dinheiro ou cheque (c)\nem duas vezes cartao de credito (d)\nForma de pagamento: ");
    scanf(" %c", &forma_de_pagamento);

    switch(forma_de_pagamento){
        case 'a' :
            valor_de_pagamento = preco_etiqueta + preco_etiqueta*0.10;
            break;

        case 'b' :
            valor_de_pagamento = preco_etiqueta + preco_etiqueta*0.15;
            break;

        case 'c' :
            valor_de_pagamento = preco_etiqueta;
            break;

        case 'd' :
            valor_de_pagamento = preco_etiqueta + preco_etiqueta*0.10;

        default :
            printf("Forma de pagamento invalida\n");
            break;
    }

    printf("O valor do pagamento sera de %f", valor_de_pagamento);

    return 0;
}
