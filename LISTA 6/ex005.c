#include<stdio.h>
#include<stdlib.h>

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
