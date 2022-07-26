#include <stdio.h>
#include <stdlib.h>

/*
Escrever um algoritmo que leia um valor em reais e calcule qual o menor número possível de notas de 100,
50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessárias.
*/

int main()
{
    int valor, v, nota_1, nota_5, nota_10, nota_50, nota_100;

    printf("Valor: ");
    scanf("%d", &v);

    valor = v;

    nota_100 = valor/100;

    valor -= nota_100*100;

    nota_50 = valor/50;

    valor -= nota_50*50;

    nota_10 = valor/10;

    valor -= nota_10*10;
    nota_5 = valor/5;

    valor -= nota_5*5;

    nota_1 = valor;

    printf("Valor lido %d, notas de 100: %d \nnotas de 50: %d \nnotas de 10: %d \nnotas de 5: %d \nnotas de 1: %d", v, nota_100, nota_50, nota_10, nota_5, nota_1);

    return 0;
}
