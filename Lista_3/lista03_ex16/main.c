#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade_itens;
    float preco, total = 0;

    printf("Quantos items? ");
    scanf("%d", &quantidade_itens);

    for(int i = 1; i <= quantidade_itens; i++){
        printf("Preco item %d: ", i);
        scanf("%f", &preco);

        total += preco;
    }

    printf("Valor total da compra: %.2f", total);

    return 0;
}
