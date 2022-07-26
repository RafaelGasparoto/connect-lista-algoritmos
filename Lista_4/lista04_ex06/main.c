#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor_a[10], maior_idade, posicao_maior;


    int k = 0, posicao_menor[10], menor_idade[10];

    for(int i = 0; i < 10; i++){
        printf("Idade %d: ", i+1);
        scanf("%d", &vetor_a[i]);
    }

    menor_idade[0] = maior_idade = vetor_a[0];
    posicao_menor[0] = 0;
    printf("%d", menor_idade[0]);
    for(int i = 1; i < 10; i++){
        if(vetor_a[i] == menor_idade[k]){
            k++;
            menor_idade[k] = vetor_a[i];
            posicao_menor[k] = i;
        }

        if(vetor_a[i] < menor_idade[k]){
            k = 0;
            menor_idade[k] = vetor_a[i];
            posicao_menor[k] = i;
        }

        if(vetor_a[i] > maior_idade){
            maior_idade = vetor_a[i];
            posicao_maior = i;
        }
    }
    for(int i = 0; i < k+1; i++){

    printf("Menor idade eh %d e esta na posicao %d do vetor\n", menor_idade[i], posicao_menor[i]);

    }
    printf("Maior idade eh %d e esta na posicao %d do vetor\n", maior_idade, posicao_maior);


    return 0;
}
