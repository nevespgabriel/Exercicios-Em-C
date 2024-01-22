#include<stdio.h>
#include<stdlib.h>

int main()
{
    int QUAD[3][3], C, L, SL[3], SC[3], SDP, SDS;
    SC[0] = SC[1] = SC[2] = SDP = SDS = 0;
    for(L=0;L<3;L++)
    {
        SL[L] = 0;
        for (C=0;C<3;C++)
        {
            printf("Digite o valor contido na linha %d coluna %d:\n",L,C);
            scanf("%d",&QUAD[L][C]);
            SL[L]+=QUAD[L][C];
            SC[C]+=QUAD[L][C];
            if (C==L)
            {
                SDP+=QUAD[L][C];
            }
            if (C+L == 2)
            {
                SDS+=QUAD[L][C];
            }
        }
    }
    if ((SDS==SDP)&&(SDS==SL[0])&&(SDS==SL[1])&&(SDS==SL[2])&&(SDS==SC[0])&&(SDS==SC[1])&&(SDS==SC[2]))
    {
        printf("A matriz digitada eh um quadrado magico.\n");
    }
    else
    {
        printf("A matriz digitada nao eh um quadrado magico.\n");
    }
    system("pause");
    return 0;
}
