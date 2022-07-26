#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota_1, nota_2, nota_3, media_ponderada;

    printf("Nota 1: ");
    scanf("%f", &nota_1);
    printf("Nota 2: ");
    scanf("%f", &nota_2);
    printf("Nota 3: ");
    scanf("%f", &nota_3);

    media_ponderada = ((nota_1*1) + (nota_2*2) + (nota_3*3))/6;

    printf("Media ponderada do aluno: %.2f", media_ponderada);

    return 0;
}
