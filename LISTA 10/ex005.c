#include<stdio.h>
#include<stdlib.h>

int main()
{
    int MAT[3][3], L, C, COND = 0, TRANSP[3][3];
    printf("MATRIZ PRINCIPAL:\n");
    for (L=0;L<3;L++)
    {
        for(C=0;C<3;C++)
        {
            MAT[L][C] = floor(rand()%10);
            TRANSP[C][L] = MAT[L][C];
            printf("%d ",MAT[L][C]);
        }
        printf("\n");
    }
    printf("MATRIZ TRANSPOSTA:\n");
    for (L=0;L<3;L++)
    {
        for(C=0;C<3;C++)
        {
            if (MAT[L][C] != TRANSP[L][C])
            {
                COND = 1;
            }
            printf("%d ",TRANSP[L][C]);
        }
        printf("\n");
    }
    if (COND> 0)
    {
        printf("A matriz nao eh simetrica!\n");
    }
    else
    {
        printf("A matriz eh simetrica!\n");
    }
    system("pause");
    return 0;
}
