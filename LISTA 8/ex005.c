#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N[15] = {3, 6, 24, 7, 8, 2, 5, 6, 20, 42, 56, 71, 34, 54, 67}, E[15], C, IMPAR = 0, PAR = 14;
    for (C=0;C<15;C++)
    {
        if (N[C]%2!=0)
        {
            E[IMPAR] = N[C];
            IMPAR++;
        }
        else
        {
            E[PAR] = N[C];
            PAR--;
        }
    }
    printf("Elementos pares: ");
    for (C=14;C>PAR;C--)
    {
        printf("%d ",E[C]);
    }
    printf("\nElementos impares: ");
    for (C=0;C<IMPAR;C++)
    {
        printf("%d ",E[C]);
    }
    printf("\n");
    system("pause");
    return 0;
}
