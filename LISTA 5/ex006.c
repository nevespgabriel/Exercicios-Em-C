#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
