#include<stdio.h>
#include<stdlib.h>

/*Fazer um programa em C que leia um número inteiro e positivo e verifique se esse número é 
primo ou não é primo.*/

int main()
{
    int NUM, CONT, PRIMO;
    printf("Escolha um numero para verificar se eh primo:\n");
    scanf("%d",&NUM);
    CONT = 2;
    PRIMO = 0;
    while (CONT <= NUM/2)
    {
        if (NUM%CONT == 0)
        {
            PRIMO++;
        }
        CONT++;
    }
    if (PRIMO > 0)
    {
        printf("O numero eh divisivel por %d valores alem de 1 e dele mesmo\n",PRIMO);
    }
    else
    {
        printf("O numero eh primo\n");
    }
    system("pause");
    return 0;
}
