#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[3][4], C, L, SC[4], SL[3], NC0=0, NL0=0;
    for (L=0;L<3;L++)
    {
        for(C=0;C<4;C++)
        {
            SC[C] = 0;
            SL[L] = 0;
            printf("Digite o valor da linha %d coluna %d:\n",L,C);
            scanf("%d",&A[L][C]);
        }
    }
    for (L=0;L<3;L++)
    {
        for(C=0;C<4;C++)
        {
            SC[C]+=A[L][C];
            SL[L]+=A[L][C];
        }
    }
    for (C=0;C<4;C++)
    {
        if (SC[C]==0)
        {
            NC0++;
        }
    }
    for (L=0;L<3;L++)
    {
        if (SL[L]==0)
        {
            NL0++;
        }
    }
    printf("A matriz possui %d linhas e %d colunas nulas.\n",NL0,NC0);
    system("pause");
    return 0;
}
