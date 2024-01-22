#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
