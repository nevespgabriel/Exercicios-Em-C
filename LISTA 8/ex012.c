#include<stdio.h>
#include<stdlib.h>

int main()
{
    int VET1[10], VET2[10], VET3[20], V1, V2, RESP, C;
    V1=V2=0;
    do
    {
        printf("Digite o %do termo do vetor 1: \n",V1);
        scanf("%d",&VET1[V1]);
        V1++;
        do
        {
            printf("Deseja continuar?\n[1]SIM\n[2]NAO\n");
            scanf("%d",&RESP);
        }while((RESP!=1)&&(RESP!=2));
    }while ((RESP!=2)&&(V1<10));
    do
    {
        printf("Digite o %do termo do vetor 2: \n",V2);
        scanf("%d",&VET2[V2]);
        V2++;
        do
        {
            printf("Deseja continuar?\n[1]SIM\n[2]NAO\n");
            scanf("%d",&RESP);
        }while((RESP!=1)&&(RESP!=2));
    }while ((RESP!=2)&&(V2<10));
    for (C=0;C<V1;C++)
    {
        VET3[C] = VET1[C];
    }
    RESP = 0;
    for (C=V1;C<(V1+V2);C++)
    {
        VET3[C] = VET2[RESP];
        RESP++;
    }
    printf("VETOR 1: ");
    for (C=0;C<V1;C++)
    {
        printf("%d ",VET1[C]);
    }
    printf("\nVETOR 2: ");
    for (C=0;C<V2;C++)
    {
        printf("%d ",VET2[C]);
    }
    printf("\nVETOR 3: ");
    for (C=0;C<(V2+V1);C++)
    {
        printf("%d ",VET3[C]);
    }
    printf("\n");
    system("pause");
    return 0;
}
