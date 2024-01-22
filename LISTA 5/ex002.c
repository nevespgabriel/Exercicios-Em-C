#include<stdio.h>
#include<stdlib.h>

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
