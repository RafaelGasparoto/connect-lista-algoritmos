#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km_rodados = 0, km, controlador;

    do
    {
        printf("********     KMS BR 101      ********\n");
        printf("********      1-Parar        ********\n");
        printf("********    2-Kms rodados    ********\n");

        scanf("%d", &controlador);

        if(controlador == 1){
            printf("Quantos kms rodados? ");
            scanf("%d", &km);
            km_rodados += km;
        }
        if(controlador == 2){
            printf("Ate agora foram percorridos %d KM\n", km_rodados);
            system("Pause");
        }
        system("cls");
    }while(km_rodados <= 4000);

    printf("FIM DA BR 101");
    return 0;
}
