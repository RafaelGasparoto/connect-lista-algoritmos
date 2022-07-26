#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qut_alunos;
    float nota_1, nota_2, media;

    printf("Quantidade de alunos: ");
    scanf("%d", &qut_alunos);

    while(qut_alunos != 0){
        printf("Nota 1: ");
        scanf("%f", &nota_1);
        printf("Nota 2: ");
        scanf("%f", &nota_2);

        media = (nota_1 + nota_2) / 2;

        if(media >= 60)
            printf("Aprovado com media %.2f\n", media);
        else
            printf("Repreovado com media %.2f\n", media);
    }

    return 0;
}
