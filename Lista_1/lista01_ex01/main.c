#include <stdio.h>
#include <stdlib.h>

int main()
{
    int largura, comprimento, area;

    printf("Largura do terreno: ");
    scanf("%d", &largura);
    printf("Comprimento do terreno: ");
    scanf("%d", &comprimento);

    area = largura * comprimento;

    printf("Area do terreno: %d", area);


    return 0;
}
