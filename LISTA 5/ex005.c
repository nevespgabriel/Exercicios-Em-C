#include<stdio.h>
#include<stdlib.h>

/*Fazer um programa que calcule e escreva a soma dos 30 primeiros termos da série:

S= 480/10 - 475/11 + 470/12 - 465/13 + ...
*/

int main()
{
    float S;
    int NUM, DEN;
    DEN = 10;
    NUM = 480;
    do
    {
        if (DEN%2==0)
        {
            S+=NUM/(float)DEN;
        }
        else
        {
            S-=NUM/(float)DEN;
        }
        DEN++;
        NUM-=5;
    }
    while(DEN<40);
    printf("A soma dos %d numeros deu %.2f\n",DEN-10,S);
    system("pause");
    return 0;
}
