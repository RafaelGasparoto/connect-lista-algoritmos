#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10], aux;

    for(int i = 0; i < 10; i++){
        printf("Valor %d: ", i);
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(A[i] > A[j]){
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%d ", A[i]);
    }

    return 0;
}
