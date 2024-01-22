#include<stdio.h>
#include<stdlib.h>

/*Escrever um programa que leia 8 valores inteiro positivo, um de cada vez, e encontre e escreve o 
maior deles.*/

int main()
{
    int N, MAIOR, CONT;
    MAIOR = 0;
    CONT = 1;
    while(CONT <= 8)
    {
        printf("Digite um valor: \n");
        scanf("%d",&N);
        if (N >= 0)
        {
           if (N > MAIOR)
            {
                MAIOR = N;
            }
            CONT++;
        }
        else
        {
            printf("Informe um numero positivo\n");
        }

    }
    printf("O maior valor digitado foi %d\n",MAIOR);
    system("pause");
    return 0;
}
