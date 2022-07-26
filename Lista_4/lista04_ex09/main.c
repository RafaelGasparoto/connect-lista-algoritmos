#include <stdio.h>
#include <stdlib.h>

int main()
{
    int D[10], k = 0;

    for(int i = 0; i < 10; i++){
        printf("Valor %d vetor D: ", i);
        scanf("%d", &D[i]);
    }

    for(int i = 0; i < 10; i++){
        if(D[i] <= 0){
            for(int j = i; j < 10; j++){
                D[j] = D[j+1];
            }
            k++;
            i--;
        }
    }

    for(int i = 0; i < 10 - k; i++){
        printf("%d ", D[i]);
    }

    return 0;
}
