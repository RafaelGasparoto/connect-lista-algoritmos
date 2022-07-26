#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, altura, altura_maior=0, altura_menor=0;


    for(i = 0; i < 15; i++){
        printf("Altura %d pessoa: ", i+1);
        scanf("%d", &altura);

        if(altura > altura_maior){
            altura_maior = altura;
        }
        if(altura < altura_menor || altura_menor == 0){
            altura_menor = altura;
        }

    }

    printf("A maior altura tem %d\n", altura_maior);

    printf("A menor altura tem %d", altura_menor);

    return 0;
}
