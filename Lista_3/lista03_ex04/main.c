#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N;
    char nome[10];

    printf("Nome: ");
    scanf("%s", nome);
    printf("N: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++)
        printf("%s\n", nome);

    return 0;
}
