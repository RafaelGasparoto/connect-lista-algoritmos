#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i, idade, idade_mais_nova = 0;
    char nome[20], nome_mais_nova[20];

    for(i = 0; i < 10; i++){
        fflush(stdin);
        printf("Nome: ");
        gets(nome);
        printf("Idade: ");
        scanf("%d", &idade);

        if(idade_mais_nova == 0 || idade_mais_nova > idade){
            idade_mais_nova = idade;
            strcpy(nome_mais_nova, nome);
        }
    }
    printf("Pessoa mais nova %s com %d anos", nome_mais_nova, idade_mais_nova);

    return 0;
}
