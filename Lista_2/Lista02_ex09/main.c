#include <stdio.h>
#include <stdlib.h>

/*
Escreva um algoritmo que leia o número de identificação do aluno, 3 notas obtidas e calcule a média aritmética obtida pelo aluno.
Ao final informe se o aluno foi aprovado direto, ficou em recuperação ou foi reprovado
por nota.
*/

int main()
{
    int id_aluno;
    float nota_1, nota_2, nota_3, media_final;

    printf("Id do aluno: ");
    scanf("%d", &id_aluno);

    printf("Nota 1: ");
    scanf("%f", &nota_1);
    printf("Nota 2: ");
    scanf("%f", &nota_2);
    printf("Nota 3: ");
    scanf("%f", &nota_3);

    media_final = (nota_1 + nota_2 + nota_3) / 3.0;

    if(media_final >= 6)
        printf("Aluno %d foi aprovado com %.2f de media", id_aluno, media_final);
    else if(media_final >=5)
        printf("Aluno %d ficou de recuperacao com %.2f de media", id_aluno, media_final);
    else
        printf("Aluno %d reprovou com %.2f de media", id_aluno, media_final);

    return 0;
}
