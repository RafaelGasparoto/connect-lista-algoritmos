#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R[5], S[10], X[5], k = 0;

    for(int i = 0; i < 5; i++){
        printf("Valor %d vetor R: ", i);
        scanf("%d", &R[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("Valor %d vetor S: ", i);
        scanf("%d", &S[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 5; j++){
            if(S[i] == R[j]){
                X[k++] = S[i];
            }
        }
    }

    for(int i = 0; i < k-1; i++){
        printf("%d ", X[i]);
    }


    return 0;
}
