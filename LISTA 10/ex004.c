#include<stdio.h>
#include<stdlib.h>

int main()
{
    int MAT[7][5], C, L, MAIOR;
    for (L=0;L<7;L++)
    {
        for(C=0;C<5;C++)
        {
            MAT[L][C] = floor(rand()%100);
            printf("%d ",MAT[L][C]);
            if ((C==0)&&(L==0))
            {
                MAIOR = MAT[L][C];
            }
            else if (MAT[L][C]>MAIOR)
            {
                MAIOR = MAT[L][C];
            }
        }
        printf("\n");
    }
    printf("O maior valor encontrado na matriz foi %d\n",MAIOR);
    system("pause");
    return 0;
}
