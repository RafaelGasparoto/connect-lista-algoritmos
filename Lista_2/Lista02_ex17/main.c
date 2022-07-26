#include <stdio.h>
#include <stdlib.h>

/*
Para uma lanchonete, escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor
a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. O cardápio
é o seguinte:
*/


int main()
{
    int codigo_item, quantidade;
    float valor_do_pagamento;

    printf("Codigo do item: ");
    scanf("%d", &codigo_item);

    printf("Quantidade do item: ");
    scanf("%d", &quantidade);

    switch(codigo_item){
        case 1 :
            valor_do_pagamento = quantidade*11.0;
            break;
        case 2 :
            valor_do_pagamento = quantidade*8.5;
            break;
        case 3 :
            valor_do_pagamento = quantidade*8.0;
            break;
        case 4 :
            valor_do_pagamento = quantidade*9.0;
            break;
        case 5 :
            valor_do_pagamento = quantidade*10.0;
            break;
        case 6 :
            valor_do_pagamento = quantidade*4.5;
            break;

        default :
            valor_do_pagamento = 0;
            printf("Codigo de item nao existe\n");
    }

    printf("Valor total da conta: %.2f", valor_do_pagamento);


    return 0;
}
