#include <stdio.h>
#include <stdlib.h>

/*
23. Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente longa.
Assumindo que seja poss�vel medir sua sombra e a do pr�dio no ch�o, e que voc� lembre da sua altura, fa�a um
algoritmo para ler os dados necess�rios e calcular a altura do pr�dio.
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
