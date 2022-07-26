#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso_prato, valor_bebida, valor_conta = 0;

    do{
        printf("Peso do prato: ");
        scanf("%f", &peso_prato);

        printf("Valor bebida: ");
        scanf("%f", &valor_bebida);

        valor_conta = valor_bebida + (peso_prato * 15);

        printf("Valor da conta: %.2f\n\n", valor_conta);

        system("PAUSE");
        system("cls");
    }while(peso_prato != 0 || valor_bebida != 0);

    return 0;
}
