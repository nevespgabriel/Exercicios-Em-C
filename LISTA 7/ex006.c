#include<stdio.h>
#include<stdlib.h>

int main()
{
    int C, FAT, NUM, DEN = 1;
    float S;
    for (C=1; C<=50; C++)
    {
        NUM = 1;
        for (FAT = C; FAT>0; FAT--)
        {
            NUM*=FAT;
        }
        if (C%2 == 0)
        {
            S-=(float)NUM/DEN;
        }
        else
        {
            S+=(float)NUM/DEN;
        }
        DEN = 2*DEN + 1;
    }
    printf("O resultado do problema deu %.2f\n",S);
    system("pause");
    return 0;
}
