#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, idade, adulto = 0;

    for(i = 0; i < 20; i++){
        printf("Idade %d: ", i+1);
        scanf("%d", &idade);
        if(idade >= 18)
            adulto++;
    }

    printf("%d pessoas sao maiores de idade", adulto);

    return 0;
}
