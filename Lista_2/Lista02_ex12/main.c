#include <stdio.h>
#include <stdlib.h>

/*
Dados tr�s valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um tri�ngulo e, se
forem verificar se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles n�o formarem um tri�ngulo,
escrever a mensagem. Considere as seguintes propriedades:
a. O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
b. Equil�teros: tem os comprimentos dos tr�s lados iguais;
c. Is�sceles: tem os comprimentos de dois lados iguais;
d. Escaleno: tem os comprimentos dos tr�s lados diferentes
*/

int main()
{
    int X, Y, Z;

    printf("Valor X: ");
    scanf("%d", &X);
    printf("Valor Y: ");
    scanf("%d", &Y);
    printf("Valor Z: ");
    scanf("%d", &Z);

    if(X < Y + Z && Y < X + Z && Z < X + Y){
        if(X == Y && Y == Z)
            printf("Triangulo equilatero");
        else if(X == Y || Y == Z)
            printf("Triangulo isoscelo");
        else
            printf("Triangulo escaleno");
    }else{
        printf("Os valores nao formam um triangulo");
    }

    return 0;
}
