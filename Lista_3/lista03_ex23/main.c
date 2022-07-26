#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1,controlador, canal, canal_3=0, canal_5=0, canal_8=0, canal_11=0, canal_13=0, qt_pessoas, total;

    do{
        printf("Quantidade de pessoas na casa %d assistindo: ", i);

        i++;

        scanf("%d", &qt_pessoas);

        printf("\n********          CANAL            ********\n");
        printf("********         3-Canal 3            ********\n");
        printf("********         5-Canal 5            ********\n");
        printf("********         8-Canal 8            ********\n");
        printf("********        11-Canal 11           ********\n");
        printf("********        13-Canal 13           ********\n");

        scanf("%d", &canal);

        switch(canal){
            case 3:
                canal_3 += qt_pessoas;
            break;
            case 5:
                canal_5 += qt_pessoas;
            break;
            case 8:
                canal_8 += qt_pessoas;
            break;
            case 11:
                canal_11 += qt_pessoas;
            break;
            case 13:
                canal_13++;
            break;
            default:
                printf("Canal informado incorreto\n");
                i--;

        }
        printf("\nDigite 0 para sair 1 para continuar:\n");

        scanf("%d", &controlador);
        system("cls");
    }
    while(controlador != 0);

    total = canal_3 + canal_5 + canal_8 + canal_11 + canal_13;

    printf("Audiencia Canal 3 : %.2f\n", canal_3*100.0/total);
    printf("Audiencia Canal 5 : %.2f\n", canal_5*100.0/total);
    printf("Audiencia Canal 8 : %.2f\n", canal_8*100.0/total);
    printf("Audiencia Canal 11: %.2f\n", canal_11*100.0/total);
    printf("Audiencia Canal 13: %.2f\n", canal_13*100.0/total);

    return 0;
}
