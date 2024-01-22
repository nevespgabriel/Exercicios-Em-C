#include<stdio.h>
#include<stdlib.h>

/*Fazer um programa que calcule e escreva a soma dos 50 primeiros termos da seguinte série:
                           S= 1000/1 – 997/2 + 994/3 -991/4*/

int main()
{
    float S;
    int NUM, DEN, CONT;
    NUM = 1000;
    DEN = 1;
    S = 0;
    do
    {
        if (DEN%2==0)
        {
            S-=NUM/DEN;
        }
        else
        {
            S+=NUM/DEN;
        }
        NUM-=3;
        DEN++;
    }
    while (DEN <=50);
    printf("A soma deu %.2f\n",S);
    system("pause");
    return 0;
}
