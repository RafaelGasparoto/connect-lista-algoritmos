#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mesas_nao_fumantes = 25, mesas_fumantes = 25, reserva;

    do{
        printf("********       RESERVAS      ********\n");
        printf("********      1-Fumante      ********\n");
        printf("********     2-Nao fumante   ********\n");

        scanf("%d", &reserva);

        if(reserva == 1){
            if(mesas_fumantes == 0){
                printf("As mesas de fumantes acabaram\n");
                system("Pause");
            }
            else
                mesas_fumantes--;
        }

        if(reserva == 2){
            if(mesas_nao_fumantes == 0){
                printf("As mesas de fumantes acabaram\n");
                system("Pause");
            }
            else
                mesas_nao_fumantes--;
        }
        system("cls");

    }while(mesas_nao_fumantes != 0 || mesas_fumantes != 0);

    printf("Todas as mesas foram reservadas");

    return 0;
}
