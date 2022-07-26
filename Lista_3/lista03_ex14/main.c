#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char resposta[4];

    do{
        fflush(stdin);
        printf("Ola tudo bem?\n");
        gets(resposta);
    }while(strcmp(resposta, "sim"));

    return 0;
}
