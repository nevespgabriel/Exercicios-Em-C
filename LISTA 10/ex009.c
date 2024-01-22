#include<stdio.h>
#include<stdlib.h>

int main()
{
    int M[5][5], SL[5], SC[5], C, L;
    SC[0]=SC[1]=SC[2]=SC[3]=SC[4]=0;
    for(L=0;L<5;L++)
    {
        SL[L]=0;
        for(C=0;C<5;C++)
        {
            printf("Digite o valor da linha %d coluna %d:\n",L,C);
            scanf("%d",&M[L][C]);
            SL[L]+=M[L][C];
            SC[C]+=M[L][C];
        }
    }
    printf("MATRIZ:\n");
    for(L=0;L<5;L++)
    {
        for(C=0;C<5;C++)
        {
            printf("%d\t",M[L][C]);
        }
        printf("\n");
    }
    for (L=0;L<5;L++)
    {
        printf("SOMA DA LINHA %d: %d\n",L,SL[L]);
    }
    for (C=0;C<5;C++)
    {
        printf("SOMA DA COLUNA %d: %d\n",C,SC[C]);
    }
    system("pause");
    return 0;
}
