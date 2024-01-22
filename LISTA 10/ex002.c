#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[7][5], L, C, S[7];
    for (L=0;L<7;L++)
    {
        S[L]=0;
        for (C=0;C<5;C++)
        {
            A[L][C]=L*C;
            S[L]+=A[L][C];
        }
    }
    for (L=0;L<7;L++)
    {
        printf("A soma de todos os termos da linha %d da matriz eh %d.\n",L,S[L]);
    }
    system("pause");
    return 0;
}
