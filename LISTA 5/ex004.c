#include<stdio.h>
#include<stdlib.h>

/*A conversão de graus Farenheit para centígrados é obtida por

C= 5*(F-32)/9 

Fazer um programa que calcule e escreva uma tabela de centígrados em função de graus Farenheit, 
que variam de 50 a 150 de 1 em 1.*/

int main()
{
    int F;
    float C;
    F = 50;
    do
    {
        C = 5.0*(F-32)/9.0;
        printf("%.1f C = %d F\n",C,F);
        F++;
    }
    while (F<=150);
    system("pause");
    return 0;
}



