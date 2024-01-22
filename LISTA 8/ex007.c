#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, C, CONT, VET1[100], VET2[100], VET3[100];
    float MED1, MED2, MED3;
    MED1 = MED2 = MED3 = 0;
    for (C=1;C<4;C++)
    {
        do
        {
            printf("Qual o tamanho do conjunto %d?\n",C);
            scanf("%d",&N);
            if (N>100)
            {
                printf("Informe um valor menor, capacidade ultrapassada!\n");
            }
        }while((N>100)||(N<0));
        for (CONT=0;CONT<N;CONT++)
        {
            printf("Informe o valor %d do conjunto %d:\n",CONT,C);
            if (C == 1)
            {
                scanf("%d",&VET1[CONT]);
                MED1+=VET1[CONT];
            }
            else if (C==2)
            {
                scanf("%d",&VET2[CONT]);
                MED2+=VET2[CONT];
            }
            else
            {
                scanf("%d",&VET3[CONT]);
                MED3+=VET3[CONT];
            }
        }
        if (C == 1)
        {
            MED1/=(float)N;
        }
        else if (C==2)
        {
            MED2/=(float)N;
        }
        else
        {
             MED3/=(float)N;
        }
    }
    printf("MEDIA CONJUNTO 1 = %.1f\n",MED1);
    printf("MEDIA CONJUNTO 2 = %.1f\n",MED2);
    printf("MEDIA CONJUNTO 3 = %.1f\n",MED3);
    system("pause");
    return 0;
}
