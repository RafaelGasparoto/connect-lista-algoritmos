#include <stdio.h>
#include <stdlib.h>

/*
Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso
ideal, utilizando as seguintes fórmulas:
● para homens: (72.7 * h) – 58;
● para mulheres: (62.1 * h) – 44.7
*/

int main()
{
    float altura;
    char sexo;

    do{

        printf("Altura: ");
        scanf("%f", &altura);
        printf("Sexo (f ou m): ");
        scanf(" %c", &sexo);

        if(sexo == 'm')
            printf("Peso ideal: %.2f", (72.7 * altura) - 58);
        else if(sexo == 'f')
            printf("Peso ideal: %.2f", (62.1 * altura) - 44.7);
        else
            printf("Para sexo use somente f ou m, tente novamente\n\n");

    }while(sexo != 'm' && sexo != 'f');


    return 0;
}
