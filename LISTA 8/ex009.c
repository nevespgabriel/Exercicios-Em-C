#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[15] = {-5, 23, 64, 20, -56, -31, 78, 8, -39, 13, 334, -98, -65, -16, -69}, NEG[15], MULTX[15], X, MENOS=0, C, XIND=0;
    printf("Digite o numero o qual vc quer descobrir os multiplos: \n");
    scanf("%d",&X);
    for (C=0;C<15;C++)
    {
        if (A[C] < 0)
        {
            NEG[MENOS] = A[C];
            MENOS++;
        }
        if (A[C]%X == 0)
        {
            MULTX[XIND] = A[C];
            XIND++;
        }
    }
    printf("Multiplos de %d: ", X);
    for (C=0;C<XIND;C++)
    {
        printf("%d ",MULTX[C]);
    }
    printf("\nNegativos: ");
    for (C=0;C<MENOS;C++)
    {
        printf("%d ",NEG[C]);
    }
    printf("\n");
    system("pause");
    return 0;
}
