#include<stdio.h>
#include<stdlib.h>

/*Escrever um programa que gera os números de 1000 a 1999 e escrever aqueles que divididos por 
11 onde o resto da divisão é igual a 5.*/

int main()
{
    int CONT;
    CONT = 1000;
    while (CONT <= 1999)
    {
        if (CONT%11==5)
        {
            printf("%d ",CONT);
        }
        CONT++;
    }
    printf("\n");
    system("pause");
    return 0;
}
