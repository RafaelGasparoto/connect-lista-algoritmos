#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10];
    int i;

    printf("Nome de usuario: ");
    scanf("%s", nome);

    for(i = 0; i < 10; i++)
        printf("%s\n", nome);

    return 0;
}
