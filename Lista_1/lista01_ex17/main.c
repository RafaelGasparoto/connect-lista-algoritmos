#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit;

    printf("Temperatura em C: ");
    scanf("%f", &celsius);

    fahrenheit = 1.8*celsius + 32;
    printf("Temperatura em F: %f", fahrenheit);

    return 0;
}
