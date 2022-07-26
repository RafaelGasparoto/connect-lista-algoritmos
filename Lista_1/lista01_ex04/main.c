#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10];
    int idade, dias_de_vida;

    printf("Nome da pessoa: ");
    scanf("%s", nome);
    printf("Idade da pessoa: ");
    scanf("%d", &idade);
    dias_de_vida = idade * 365;

    printf("%s, voce ja viveu %d dias", nome, dias_de_vida);

    return 0;
}
