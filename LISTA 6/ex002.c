#include<stdio.h>
#include<stdlib.h>

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
