#include <stdio.h>
#include <stdlib.h>

/*
Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se
forem verificar se é um triângulo equilátero, isósceles ou escalenos. Se eles não formarem um triângulo,
escrever a mensagem. Considere as seguintes propriedades:
a. O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
b. Equiláteros: tem os comprimentos dos três lados iguais;
c. Isósceles: tem os comprimentos de dois lados iguais;
d. Escaleno: tem os comprimentos dos três lados diferentes
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
