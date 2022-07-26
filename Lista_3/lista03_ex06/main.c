#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, i, idade_media = 0;

    for(i = 0; i < 20; i++){
        printf("Idade %d: ", i+1);
        scanf("%d", &idade);
        idade_media = idade_media + idade;
    }

    idade_media = idade_media/20;

    printf("Idade media: %d", idade_media);
    return 0;
}
