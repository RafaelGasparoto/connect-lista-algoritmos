#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5], qt_impares = 0, qt_pares = 0, qt_maior_50 = 0, qt_menor_7 = 0;

    for(int i = 0; i < 20; i++){
        printf("valor %d vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 20; i++){
        if(vetor[i] % 2 == 0){
            qt_pares++;
        }else{
            qt_impares++;
        }
        if(vetor[i] > 50)
            qt_maior_50++;
        if(vetor[i] < 7)
            qt_menor_7++;

    }

    printf("Numeros pares: %d\n", qt_pares);
    printf("Numeros impares: %d\n", qt_impares);
    printf("Numeros maior que 50: %d\n", qt_maior_50);
    printf("Numeros menor que 7: %d\n", qt_menor_7);

    return 0;
}
