#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor_a[10], inferior_15 = 0, qt_igual_15 = 0, media_sup_15 = 0, qt_sup_15 = 0;

    for(int i = 0; i < 10; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor_a[i]);
    }

    for(int i = 0; i < 10; i++){
        if(vetor_a[i] < 15){
            inferior_15 += vetor_a[i];
        }
        else if(vetor_a[i] == 15){
            qt_igual_15++;
        }
        else{
            media_sup_15 += vetor_a[i];
            qt_sup_15++;
        }
    }

    printf("Soma valores inferior a 15: %d\n", inferior_15);
    printf("Quantidade de elementos igual a 15: %d\n", qt_igual_15);
    printf("Media elementos superior a 15: %.2f", media_sup_15/qt_sup_15*1.0);

    return 0;
}
