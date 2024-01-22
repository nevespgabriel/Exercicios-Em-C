#include<stdio.h>
#include<stdlib.h>

int main()
{
    char PAL1[30],PAL2[16];
    int C1, C2, C, I=0;
    do
    {
        printf("Digite uma palavra:\n");
        gets(PAL1);
        printf("Digite outra palavra:\n");
        gets(PAL2);
        C1=0;
        C2=0;
        do
        {
            C1++;
        }while(PAL1[C1]!='\0');
        do
        {
            C2++;
        }while(PAL2[C2]!='\0');
        if ((C1 > 15)||(C2 > 15))
            printf("PALAVRA GRANDE!! DIGITE NOVAMENTE!\n");
    }while((C1 > 15)||(C2 > 15));
    for(C=C1;C<C1+C2+2;C++)
    {
        PAL1[C] = PAL2[I];
        I++;
    }
    printf("As duas palavras unidas: %s\n",PAL1);
    system("pause");
    return 0;
}
