#include<stdio.h>
#include<stdlib.h>

int main()
{
    int MAT[5][5], VET[5], C=0, L=0;
    for (L=0;L<5;L++)
    {
        for(C=0;C<5;C++)
        {
            MAT[L][C]=L*C;
        }
    }
    printf("Os elementos da diagonal secundaria da matriz sao: ");
    for (L=0;L<5;L++)
    {
        for(C=0;C<5;C++)
        {
            if(L+C==4)
            {
                printf("%d ",MAT[L][C]);
            }
        }
    }
    printf("\n");
    system("pause");
    return 0;
}

