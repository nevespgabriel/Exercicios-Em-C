#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Faça um programa que calcule e escreva o valor de S:

    S= 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50*/

int main()
{
    float NUM, DIV, S;
    NUM = 1;
    DIV = 1;
    S = 0;
    while(NUM <= 99)
    {
       S+=NUM/DIV;
       DIV++;
       NUM+=2;
    }
    printf("O calculo de S deu %.1f\n",S);
    system("pause");
    return 0;
}
