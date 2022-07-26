#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, fat = 1, n;

    printf("Valor fatorial: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fat = i*fat;
    }

    printf("Fatorial de %d eh %d", n, fat);

    return 0;
}
