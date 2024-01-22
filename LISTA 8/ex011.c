#include<stdio.h>
#include<stdlib.h>

void TROCA_VETOR (int VET[10], int TAM)
{
    int C;
    for (C=0;C<10;C++)
    {
        printf("%do termo do vetor: %d\n",C,VET[C]);
    }
    for (C=0;C<5;C++)
    {
        VET[C] = VET[TAM]+VET[C];
        VET[TAM] = VET[C]-VET[TAM];
        VET[C] = VET[C]-VET[TAM];
        TAM--;
    }
    for (C=0;C<10;C++)
    {
        printf("%do termo do vetor: %d\n",C,VET[C]);
    }
}

int main()
{
    int VET[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, TAM;
    TAM = 9;
    TROCA_VETOR(VET, TAM);
    system("pause");
    return 0;
}
