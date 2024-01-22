#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Fazer um programa em C para calcular e imprimir todos os números primos entre 1 e 100.

int main()
{
    int N, CONT, PRIMO;
    PRIMO = 0;
    N = 2;
    CONT = 2;
    while (N <= 100)
    {
        while (CONT <= N/2)
        {
            if (N%CONT == 0)
            {
                PRIMO++;
            }
            CONT++;
        }
        if (PRIMO == 0)
        {
            printf("%d \n",N);
        }
        CONT = 2;
        PRIMO = 0;
        N++;
    }
    system("pause");
    return 0;
}
