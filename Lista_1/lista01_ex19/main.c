#include <stdio.h>
#include <stdlib.h>

/*
19. A granja Frangotech possui um controle automatizado de cada frango da sua produ��o. No p� direito do
frango h� um anel com um chip de identifica��o; no p� esquerdo s�o dois an�is para indicar o tipo de alimento que ele deve consumir.
Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa
R$3,50, fa�a um algoritmo para calcular o gasto total da granja para marcar todos os seus frangos
*/

int main()
{
    int gasto_total, quantidade_de_frangos;

    printf("Quantidade de frangos: ");
    scanf("%d", &quantidade_de_frangos);

    gasto_total = 4*quantidade_de_frangos + 7*quantidade_de_frangos;

    printf("Gasto total: R$ %d", gasto_total);

    return 0;
}
