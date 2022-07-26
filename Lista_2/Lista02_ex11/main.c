#include <stdio.h>
#include <stdlib.h>

/*
Uma escola faz o pagamento de seus professores por hora/aula. Faça um algoritmo que solicite ao usuário, o
nível do professor e a quantidade de horas/aula ele tem na semana. Em seguida, calcule e exiba o salário de
um professor sabendo que a fórmula para o cálculo do salário é 𝑠𝑠𝑠𝑠𝑠𝑠 = 𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣 ∗ 𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞 ∗ 4.5. O valor
da hora/aula do professor é dado em função do seu nível:

Professor Nível 1 R$12,00 por hora/aula
Professor Nível 2 R$17,00 por hora/aula
Professor Nível 3 R$25,00 por hora/aula

*/

int main()
{
    int nivel, qunt_hr_aula;
    float salario;

    printf("Quantidade de hora/aula: ");
    scanf("%d", &qunt_hr_aula);

    do
    {
        printf("Nivel do professor (1, 2, 3): ");
        scanf("%d", &nivel);

        if(nivel != 1 && nivel != 2 && nivel != 3)
            printf("Nivel de professor nao existe");

    }while(nivel != 1 && nivel != 2 && nivel != 3);

    switch(nivel){
        case 1 :
            salario = 12.00 * qunt_hr_aula * 4.5;
            break;

        case 2 :
            salario = 17.00 * qunt_hr_aula * 4.5;
            break;

        case 3 :
            salario = 25.00 * qunt_hr_aula * 4.5;
            break;

        default :
            break;
    }

    printf("Salario: %.2f", salario);

    return 0;

}
