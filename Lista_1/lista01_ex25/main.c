#include <stdio.h>
#include <stdlib.h>

/*
25. Calcule o volume de uma caixa d'�gua cil�ndrica.
*/

int main()
{
    float pi = 3.14, raio, altura, volume;

    printf("Raio da caixa d'agua: ");
    scanf("%f", &raio);

    printf("Altura da caixa d'agua: ");
    scanf("%f", &altura);

    volume = pi*(raio*raio)*altura;

    printf("Volume da caixa d'agua: %.2f", volume);

    return 0;
}
