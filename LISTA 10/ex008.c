#include<stdio.h>
#include<stdlib.h>

int main()
{
    int MAT[6][6], C, L, V[36], A, IV=0;
    for (L=0;L<6;L++)
    {
        for(C=0;C<6;C++)
        {
            printf("Digite o valor contido na linha %d coluna %d:\n",L,C);
            scanf("%d",&MAT[L][C]);
        }
    }
    for (L=0;L<6;L++)
    {
        for(C=0;C<6;C++)
        {
            printf("%d\t",MAT[L][C]);
        }
        printf("\n");
    }
    printf("Digite o valor pelo qual deseja multiplicar a matriz acima:\n");
    scanf("%d",&A);
    for (L=0;L<6;L++)
    {
        for(C=0;C<6;C++)
        {
            MAT[L][C]*=A;
            V[IV] = MAT[L][C];
            IV++;
        }
    }
    printf("\nValores da matriz multiplicados por %d:\n",A);
    for(C=0;C<36;C++)
    {
        printf("%d ",V[C]);
    }
    printf("\n");
    system("pause");
    return 0;
}
