#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qt_gato = 0, qt_cachorro = 0, controlador;

    do
    {
        printf("*******  CONTADOR  ********\n");
        printf("******* 1-Cachorro ********\n");
        printf("*******   2-Gato   ********\n");
        printf("*******   3-Sair   ********\n");

        scanf("%d", &controlador);

        if(controlador == 1){
            qt_cachorro++;
        }

        if(controlador == 2){
            qt_gato++;
        }

        system("cls");

    }
    while(controlador != 3);

    printf("%d cachorros\n", qt_cachorro);
    printf("%d gatos", qt_gato);

    return 0;
}
