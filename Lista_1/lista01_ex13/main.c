#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dezena, centena, unidade;

    printf("Numero: ");
    scanf("%d", &numero);

    centena = numero/100;
    numero -= centena*100;
    dezena = numero/10;
    numero -= dezena*10;



    printf("CENTENA: %d\n", centena);
    printf("DEZENA: %d\n", dezena);
    printf("UNIDADE: %d", numero);

    return 0;
}
