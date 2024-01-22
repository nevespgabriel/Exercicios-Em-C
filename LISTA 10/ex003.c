#include<stdio.h>
#include<stdlib.h>

int main()
{
    int MAT[10][10], L, C;
    for (L=0;L<10;L++)
    {
        for (C=0;C<10;C++)
        {
            MAT[L][C]=L*C;
        }
    }
    for (L=0;L<10;L++)
    {
        for (C=0;C<10;C++)
        {
            printf("%d ",MAT[L][C]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
