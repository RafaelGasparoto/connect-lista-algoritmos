#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float area_da_pizza, raio_da_pizza;

    printf("Raio da pizza: ");
    scanf("%f", &raio_da_pizza);

    area_da_pizza = 3.14*pow(raio_da_pizza, 2);

    printf("Area da pizza: %.2f", area_da_pizza);

    return 0;
}
