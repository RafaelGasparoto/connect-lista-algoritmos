#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R[5], A[10], X[5], acertos = 0;

    for(int i = 0; i < 5; i++){
        printf("Valor %d vetor R: ", i);
        scanf("%d", &R[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("Valor %d vetor S: ", i);
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 5; j++){
            if(A[i] == R[j]){
                acertos++;
            }
        }
    }

    printf("Acertou %d valores", acertos);


    return 0;
}
