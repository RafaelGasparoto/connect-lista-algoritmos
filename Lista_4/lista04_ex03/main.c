#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor_a[8], vetor_b[8];

    for(int i = 0; i < 8; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor_a[i]);
        vetor_b[i] = vetor_a[i] *2;
    }

    for(int i = 0; i < 8; i++)
        printf("%d ", vetor_b[i]);



    return 0;
}
