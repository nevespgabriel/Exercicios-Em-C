#include<stdio.h>
#include<stdlib.h>

int main()
{
    int M[5][5], C, L, ST, SL4, SC2, DP, DS;
    ST = SL4 = SC2 = DP = DS = 0;
    for (L=0;L<5;L++)
    {
        for (C=0;C<5;C++)
        {
            printf("Digite o valor da linha %d coluna %d:\n",L,C);
            scanf("%d",&M[L][C]);
            ST+=M[L][C];
            if (L==4)
            {
                SL4+=M[L][C];
            }
            if (C==2)
            {
                SC2+=M[L][C];
            }
            if (L==C)
            {
                DP+=M[L][C];
            }
            if (L+C == 4)
            {
                DS+=M[L][C];
            }
        }
    }
    for (L=0;L<5;L++)
    {
        for (C=0;C<5;C++)
        {
            printf("%d\t",M[L][C]);
        }
        printf("\n");
    }
    printf("A soma de todos os termos da matriz foi %d\n", ST);
    printf("A soma dos termos da linha 4 foi %d\n",SL4);
    printf("A soma dos termos da coluna 2 foi %d\n",SC2);
    printf("A soma dos termos da diagonal principal foi %d\n", DP);
    printf("A soma dos termos da diagonal secundaria foi %d\n",DS);
    system("pause");
    return 0;
}
