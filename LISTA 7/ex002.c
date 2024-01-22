#include<stdio.h>
#include<stdlib.h>

int main()
{
    int C, SOMA = 0;
    for (C = 100; C<=200; C++)
    {
        if (C % 7 ==0)
        {
            printf("%d\n",C);
            SOMA+=C;
        }
    }
    printf("A soma de todos os multiplos de 7 entre 100 e 200: %d\n",SOMA);
    system("pause");
    return 0;
}
