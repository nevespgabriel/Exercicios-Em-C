#include<stdio.h>
#include<stdlib.h>

int main()
{
    int M1[2][2], M2[2][2], C, L, I=0;
    for (L=0;L<2;L++)
    {
        for (C=0;C<2;C++)
        {
            printf("Digite o valor da linha %d coluna %d da matriz 1:\n", L, C);
            scanf("%d",&M1[L][C]);
        }
    }
    for (L=0;L<2;L++)
    {
        for (C=0;C<2;C++)
        {
            printf("Digite o valor da linha %d coluna %d da matriz 2:\n", L, C);
            scanf("%d",&M2[L][C]);
            if (M1[L][C] != M2[L][C])
            {
                I++;
            }
        }
    }
    printf("\nMATRIZ 1\n");
    for (L=0;L<2;L++)
    {
        for (C=0;C<2;C++)
        {
            printf("%d\t",M1[L][C]);
        }
        printf("\n");
    }
    printf("\nMATRIZ 2\n");
    for (L=0;L<2;L++)
    {
        for (C=0;C<2;C++)
        {
            printf("%d\t",M2[L][C]);
        }
        printf("\n");
    }
    if (I>0)
    {
        printf("As matrizes nao sao iguais\n");
    }
    else
    {
        printf("As matrizes sao iguais\n");
    }
    system("pause");
    return 0;
}
