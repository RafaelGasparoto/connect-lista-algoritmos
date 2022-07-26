#include <stdio.h>
#include <stdlib.h>

/*
23. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa.
Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, faça um
algoritmo para ler os dados necessários e calcular a altura do prédio.
*/


int main()
{
    float altura_da_pessoa, sombra_da_pessoa, sombra_do_predio, altura_do_predio;

    printf("Altura da pessoa em metros: ");
    scanf("%f", &altura_da_pessoa);
    printf("Comprimento da sombra da pessoa em metros: ");
    scanf("%f", &sombra_da_pessoa);
    printf("Comprimento da sombra do predio em metros: ");
    scanf("%f", &sombra_do_predio);

    altura_do_predio = (altura_da_pessoa*sombra_do_predio)/sombra_da_pessoa;

    printf("O predio tem %.2f metros de altura", altura_do_predio);

    return 0;
}
