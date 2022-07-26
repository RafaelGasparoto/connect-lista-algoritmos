#include <stdio.h>
#include <stdlib.h>
/*
Um banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo m�dio no �ltimo ano. Fa�a
um algoritmo que leia o saldo m�dio de um cliente e calcule o valor do cr�dito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito.
*/
int main()
{
    float saldo_medio, valor_de_credito;

    printf("Saldo medio: ");
    scanf("%f", &saldo_medio);

    if(saldo_medio > 0 && saldo_medio <=200){
        valor_de_credito = 0;
    }
    else if(saldo_medio > 200 && saldo_medio <= 400){
        valor_de_credito = saldo_medio*0.20;
    }
    else if(saldo_medio > 400 && saldo_medio < 600){
        valor_de_credito = saldo_medio*0.30;
    }
    else{
        valor_de_credito = saldo_medio*0.40;
    }

    printf("\nSaldo medio: %.2f \nValor de credito: %.2f", saldo_medio, valor_de_credito);

    return 0;
}
