#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor_a[10], vetor_b[10], vetor_r[10];

    for(int i = 0; i < 10; i++){
        printf("Valor %d vetor A: ", i+1);
        scanf("%d", &vetor_a[i]);

        printf("Valor %d vetor B: ", i+1);
        scanf("%d", &vetor_b[i]);

        vetor_r[i] = vetor_a[i] + vetor_b[i];
    }

    for(int i = 0; i < 10; i++){
        printf("%d ", vetor_r[i]);
    }

    return 0;
}
